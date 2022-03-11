
#include <string>
#include "FileReaderHelper.h"
#include "Order.h"
#include "iostream"

#include "Menu.h"
#include "Event.h"
#include "ArrivalEvent.h"
#include "Queue.h"
#include "PriorityQueue.h"

using namespace std;

int main(int argc, char* argv[])
{
   FileReaderHelper *fileReaderHelper = new FileReaderHelper(argc,argv);
   fileReaderHelper->readNextLineFromFile("");

//Order *o1 = new Order(4,2,"Pizza",3);
//
//Event *event = new ArrivalEvent(o1,12,1);
//
//cout<<event->getOrderDetails()->getId();


}
