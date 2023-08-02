/*Multilevel inheritance is a concept in object-oriented programming where a class is derived from another class,
which in turn is derived from yet another class. In other words,
a class can have multiple levels of inheritance in its hierarchy.*/

#include <iostream>
using namespace std;
class A
{
public:
    int number;
    string name;
    char letter;

    void displayA()
    {
        cout << "base class/parent class" << endl;
        cout << " the number " << number << " name " << name << " char " << letter << endl;
    }
};

class B : public A
{
public:
    void displayB()
    {

        cout << "derived class B" << endl;
        cout << " the number " << this->number << " name " << this->name << " char " << this->letter << endl;
    }
};

class C : public B
{
public:
    void displayC()
    {
        cout << "Derived class C " << endl;
        cout << " the number " << this->number << " name " << this->name << " char " << this->letter << endl;
    }
};

int main()
{
    A objA;
    objA.number = 10;
    objA.letter = 'A';
    objA.name = "ram";
    objA.displayA();

    B objB;
    objB.number = 11;
    objB.letter = 'B';
    objB.name = "alan";
    objB.displayB();

    C objC;
    objC.number = 12;
    objC.letter = 'C';
    objC.name = "gorge";
    objC.displayC();

    return 0;
}