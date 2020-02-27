#include "TowersOfHanoi.hpp"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    //left tower
    Stack* left = new Stack();
    left->push(3);
    left->push(2);
    left->push(1);

    //middle tower
    Stack* middle = new Stack();
    middle->push(0);
    middle->push(0);
    middle->push(0);

    //right tower
    Stack* right = new Stack();
    right->push(0);
    right->push(0);
    right->push(0);

    

    TowersOfHanoi* tower = new TowersOfHanoi(left, middle, right);
    tower->displayTowers();

    
    int hi = left->pop();
    left->push(0);
    right->pop();
    right->push(hi);


    std::cout << "\n";
    tower->displayTowers();
    
    left->pop();
    hi = left->pop();
    left->push(0);
    left->push(0);

    middle->pop();
    middle->push(hi);

    std::cout << "\n";
    tower->displayTowers();

    hi = right->pop();
    right->push(0);

    int bye = middle->pop();
    middle->pop();
    middle->push(hi);
    middle->push(bye);

    std::cout << "\n";
    tower->displayTowers();




    
    

    return 0;
}