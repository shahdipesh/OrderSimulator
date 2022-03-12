
#include <string>
#include "FileReaderHelper.h"
#include "Order.h"
#include "iostream"

#include "Menu.h"
#include "Event.h"
#include "ArrivalEvent.h"
#include "Queue.h"
#include "PriorityQueue.h"
#include "Stack.h"

using namespace std;

int main(int argc, char* argv[])
{
   FileReaderHelper *fileReaderHelper = new FileReaderHelper(argc,argv);
   fileReaderHelper->readNextLineFromFile("");

//Order *o1 = new Order(4,2,"Pizza",3);
//Event *e1 = new ArrivalEvent(o1,12,1);
//    Order *o2 = new Order(5,2,"Samosa",3);
//    Event *e2 = new ArrivalEvent(o2,12,1);
//    Order *o3 = new Order(6,2,"AAA",3);
//    Event *e3 = new ArrivalEvent(o3,12,1);
//
//   LinkedList *stack = new Stack;
//   stack->insert(e1);
//    stack->insert(e2);
//    stack->insert(e3);
//    stack->insert(e2);
//    stack->print();

}
