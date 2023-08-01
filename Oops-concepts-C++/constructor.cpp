/*Constructors in C++ are special member functions of a class that are automatically called when an object of the class is created. */

#include<iostream>
using namespace std;

class person{
 public:
  //default constructor
  person(){
    cout<<"this is the a default contructor"<<endl;
  }  
   string name;
   int age;

   void display(){
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
   }
};



int main(){
    
    person obj;
    obj.name = "john";
    obj.age = 24;
    obj.display();


    return 0;
}
