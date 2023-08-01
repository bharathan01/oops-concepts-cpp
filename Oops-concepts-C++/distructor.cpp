/*Destructor is a special member function in C++ that is automatically called when an object is destroyed or goes out of scope. 
Its primary purpose is to release any resources or memory allocated by the object during its lifetime.
 -no return type
 -no parameter input
 -~ operator is use to create distructor
 */
#include<iostream>
using namespace std;

class person{
 public:
 string name;
 int age;
 
 person(){
    cout<<"this is the a default Constructor contructor"<<endl;
 }
   void display(){
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
   }

   ~person(){
    cout<<"the distructor is called!!!";
   }
};



int main(){

    person obj;
    obj.name = "john";
    obj.age = 24;
    obj.display();
    return 0;
}
