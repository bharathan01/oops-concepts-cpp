/*Compile-time polymorphism, also known as static polymorphism, is a type of polymorphism in 
object-oriented programming where the determination of which function to call is made at compile time. 
It is achieved through function overloading and operator overloading. 
The specific function to be called is resolved based on the number, types, and order of arguments passed 
to the function or the operator being used.*/


#include<iostream>
using namespace std;
//function overloading methode
class animal{
 public:
 void dog(string sound){
    cout<<"the dog is "<<sound<<endl;
 }
 void dog(string sound,string name){
    cout<<"the dog "<<name<<" is "<<sound<<endl;
 }
};

//operator overloading methode

class Point {
private:
    int x;
    int y;

public:
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Overloading + operator for adding two points
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    // Display the coordinates of the point
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};


int main(){
   

    animal obj;

    obj.dog("barking");
    obj.dog("barking","poppy");

    Point p1(2, 3);
    Point p2(5, 7);

    Point sum = p1 + p2;

    cout << "Point 1: ";
    p1.display(); // Output: Point(2, 3)

    cout << "Point 2: ";
    p2.display(); // Output: Point(5, 7)

    cout << "Sum of Points: ";
    sum.display(); // Output: Point(7, 10) 


    return 0;
}