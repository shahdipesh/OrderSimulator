
#include "FileReaderHelper.h"
#include <sstream>
#include "iostream"
#include "Controller.h"
#include "ArrivalEvent.h"

using namespace std;

ifstream inputFile;
FileReaderHelper::FileReaderHelper(int argc, char **argv) {
    if(argc != 3)
    {
        cout<<"USAGE: FileReadingExample.exe filename simulationType"<<endl;
        cout<<"where simulationType is either 1, 2 or 3."<<endl;
        exit(1);
    }

    string filename = argv[1];
    string version = argv[2];
    this->version=stoi(version);

    cout << "The filename is: " << filename << endl;
    cout << "The version selected is: " << version <<endl;

    //
    //Opening the file, reading one line (just the first one of the file here) and parsing it
    //
    inputFile.open(filename);  // opening the file for reading

}

int FileReaderHelper::readNextLineFromFile(string line) {
    if(getline(inputFile, line))  //gets the next line from the file and saves it in 'line', if there is one
    {
        stringstream sst(line);  //stringstream allows us to parse the line token by token (kind of like a Scanner in Java)
        string token;
        int counter = 0;
        int time = 0;
        int expiry = 0;
        string meal = "";
        int numIngredients = 0;

        while(sst >> token)  //grabing one token at a time, until there is no token left
        {
            if(counter == 0) //reading time
                time = stoi(token);
            else if(counter == 1) //reading expiry
                expiry = stoi(token);
            else if(counter == 2) //reading meal type
                meal = token;
            else //counting ingredients from here (if counter > 2)
            {
                numIngredients++;
            }
            counter++;
        }
        Controller *controller = new Controller();
        controller->handleMessage(time,expiry,meal,numIngredients,this->version,this);
        return 1;
    }
    else{
        return 0;
    }



}
// PURPOSE:    Reads next line from a file and creates an event based on that
// PARAMETERS:
//     string line: To tokenize the line
//     int simulation: which simulation is the event related to
// Returns: Event
Event *FileReaderHelper::createNewEventFromNextLine(string line,int simulation) {
    if(getline(inputFile, line))  //gets the next line from the file and saves it in 'line', if there is one
    {
        stringstream sst(line);  //stringstream allows us to parse the line token by token (kind of like a Scanner in Java)
        string token;
        int counter = 0;
        int time = 0;
        int expiry = 0;
        string meal = "";
        int numIngredients = 0;

        while (sst >> token)  //grabing one token at a time, until there is no token left
        {
            if (counter == 0) //reading time
                time = stoi(token);
            else if (counter == 1) //reading expiry
                expiry = stoi(token);
            else if (counter == 2) //reading meal type
                meal = token;
            else //counting ingredients from here (if counter > 2)
            {
                numIngredients++;
            }
            counter++;
        }
        if(counter>0) {
            Order *order = new Order(time, expiry, meal, numIngredients);
            Event *event = new ArrivalEvent(order, simulation, order->getTimeStamp());
            return event;
        }
        else{
            return nullptr;
        }
    }
    else{
        return nullptr;
    }

}




