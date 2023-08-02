/*Runtime polymorphism, also known as dynamic polymorphism, is a concept in object-oriented programming where the 
decision on which function to execute is made at runtime rather than compile time. It allows a program to determine 
the appropriate method to call based on the actual type of the object at runtime, 
rather than the type of the pointer or reference used to access the object.
->achived only by inheritance
->methode name should be same in base class and child class
*/

// runtime polymorphism using function overriding and virtual functions:
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Square square;

    shapePtr = &circle;
    shapePtr->draw(); // Output: "Drawing a circle."

    shapePtr = &square;
    shapePtr->draw(); // Output: "Drawing a square."

    return 0;
}
