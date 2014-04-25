#include "LB03.h"
#include <iostream>

using namespace std;

OneConnList::OneConnList():
    top (nullptr)
   {
   }

OneConnList::~OneConnList()
{
    deleteList();
}



bool OneConnList::listIsEmpty() const
{
    if(nullptr == top)
        throw -1;
    return top -> data;
}

void OneConnList::showList() const
{
    Node *p = nullptr;
    p = top;

    while(p)
    {
        cout << p -> data << endl;
        p = p -> link;
    }
}

void OneConnList::deleteList()
{
    Node *p = nullptr;
    p = top;
    while (top)
    {
        p = top -> link;
        delete top;
        top = p;
    }
    top = nullptr;
}



void OneConnList::pushToEnd(Data data)
{
    Node *p = nullptr;
    p = new Node;
    p -> data = data;
    p -> link = top;
    top = p;
    p = nullptr;
}


void OneConnList::popFromBegin()
{
    if(top)
    {

        Node *p = nullptr;
        p = top;
        top = top -> link;
        p -> link = nullptr;
        p -> data = 0;

        delete p;
        p = nullptr;
    }
}
