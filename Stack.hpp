#include "Node.hpp"
#include <string>
using namespace std;

class Stack
{
    private:
        Node* top;

    public:
        Stack();
        void push(int payload);
        int pop();
        int peek();
        void display();
        string displayAtIndex(int index);
        
};