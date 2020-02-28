#include "Stack.hpp"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack()
{
    this->top = 0;
}

void Stack::push(Node* newNode)
{
    Node* n = newNode;
    if(top)
    {
        //we have at least one element on our stack
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
    
}

Node* Stack::pop()
{
    Node* nodeToReturn = this->top;
    top = top->getNextNode();
    return nodeToReturn;
}

int Stack::peek()
{
    return this->top->getPayload();
}

void Stack::display()
{
    if(this->top)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            std::cout << currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
    }
    else
    {
        std::cout << "Empty Stack\n";
    }
}

string Stack::displayAtIndex(int index)
{
    int indx = index;
    int count = -1;
    Node* currNode = this->top;
    while(currNode)
    {
        
    }   
}



