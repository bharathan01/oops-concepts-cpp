
#include<iostream>
using namespace std;

class person{
   public:
   string name;
   int age;
   
   void display(){
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
   }
};



int main(){
    //static object creation, Static object creation involves creating objects with automatic storage duration. 
    //These objects are allocated on the stack and are automatically destroyed when they go out of scope.
    person obj;
    obj.name = "john";
    obj.age = 24;
    obj.display();

    //dymanic object creation, Dynamic object creation involves creating objects with dynamic storage duration. These objects are allocated on the heap using the new operator, 
    //and they have a lifetime that extends beyond the scope in which they were created.
    person* obj2 = new person;
    obj2 -> name = "alan";
    obj2 -> age = 22;
    obj2 -> display();


    return 0;
}
