/*Multiple inheritance is a concept in object-oriented programming where a 
class can inherit properties and behaviors from more than one base class.*/

#include <iostream>
using namespace std;

// Base class 1
class Shape {
public:
    void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Base class 2
class Color {
public:
    void setColor(string color) {
        this->color = color;
    }

    string getColor() const {
        return color;
    }

private:
    string color;
};

// Derived class (Multiple Inheritance)
class ColoredCircle : public Shape, public Color {
public:
    void draw() {
        cout << "Drawing a colored circle with color: " << getColor() << endl;
    }
};

int main() {
    ColoredCircle coloredCircle;
    coloredCircle.setColor("Blue");

    coloredCircle.draw(); // Output: "Drawing a colored circle with color: Blue"

    // Accessing draw() method from Shape (base class 1)
    coloredCircle.Shape::draw(); // Output: "Drawing a generic shape."

    return 0;
}
