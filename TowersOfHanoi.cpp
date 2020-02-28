#include "TowersOfHanoi.hpp"
#include <string>
#include <iostream>
using namespace std;

TowersOfHanoi::TowersOfHanoi(Stack* left, Stack *middle, Stack *right)
{
    this->left = left;
    this->middle = middle;
    this->right = right;
    
}

void TowersOfHanoi::displayTowers()
{
    string zero = "|" + left->displayAtIndex(0) + "|" + middle->displayAtIndex(0) + "|" + right->displayAtIndex(0);
    string one = "|" + left->displayAtIndex(1) + "|" + middle->displayAtIndex(1) + "|" + right->displayAtIndex(1);
    string two = "|" + left->displayAtIndex(2) + "|" + middle->displayAtIndex(2) + "|" + right->displayAtIndex(2);
    std::cout << zero << "\n";
    std::cout << one << "\n";
    std::cout << two << "\n";
}

void TowersOfHanoi::move(int towerA, int towerB)
{   
    Stack* firstTower = returnTower(towerA);
    Stack* secondTower = returnTower(towerB);
    
    if(firstTower->peek() <= secondTower->peek())
    {
        Node* discToMove = firstTower->pop();
        secondTower->push(discToMove);
    }
    else
    {
        std::cout << "Can't Move Here!\n";
    }
}

void TowersOfHanoi::populateArray()
{
    this->arrayOfTowers[0] = this->left;
    this->arrayOfTowers[1] = this->middle;
    this->arrayOfTowers[2] = this->right;
}

Stack* TowersOfHanoi::returnTower(int tower)
{
    int indexOfTower = tower - 1;
    Stack* towerToReturn = arrayOfTowers[indexOfTower];
    return towerToReturn;
}
