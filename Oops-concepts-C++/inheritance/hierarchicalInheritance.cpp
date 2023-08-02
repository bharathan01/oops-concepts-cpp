/*
Hierarchical inheritance is a concept in object-oriented programming where a single base class is inherited by multiple derived classes. 
In this type of inheritance, a class acts as a base for several classes, forming a hierarchical relationship in the inheritance chain.
*/

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

        cout << "derived class B" <<this -> letter << endl;
        cout << " the number " << this->number << " name " << this->name << " char " << this->letter << endl;
    }
};

class C : public A{
public:
    void displayC()
    {
        cout << "Derived class "<<this -> letter << endl;
        cout << " the number " << this->number << " name " << this->name << " char " << this->letter << endl;
    }
};
class D : public B
{
public:
};
class E : public C{
public:
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

    D objD;
    objD.number = 12;
    objD.letter = 'D';
    objD.name = "abin";
    objD.displayB();

    E objE;
    objE.number = 14;
    objE.letter = 'E';
    objE.name = "john";
    objE.displayC();

    return 0;
}