#include "TowersOfHanoi.hpp"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    //creating our discs
    Node* oneDisc = new Node(1);
    Node* twoDisc = new Node(2);
    Node* threeDisc = new Node(3);

    Node* zero1 = new Node(0);
    Node* zero2 = new Node(5);
    Node* zero3 = new Node(5);
    Node* zero4 = new Node(0);
    Node* zero5 = new Node(5);
    Node* zero6 = new Node(5);
    


    //left tower
    Stack* left = new Stack();
    left->push(threeDisc);
    left->push(twoDisc);
    left->push(oneDisc);

    //middle tower
    Stack* middle = new Stack();
    middle->push(zero1);
    middle->push(zero2);
    middle->push(zero3);
    

    //right tower
    Stack* right = new Stack();
    right->push(zero4);
    right->push(zero5);
    right->push(zero6);



    TowersOfHanoi* game = new TowersOfHanoi(left, middle, right);
    game->populateArray();
    game->displayTowers();
    std::cout << "\n";
    game->arrayOfTowers[1]->display();

    
    
    return 0;
}