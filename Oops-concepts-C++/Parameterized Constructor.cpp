/*A parameterized constructor is a constructor that takes one or
 more arguments during object creation and uses these arguments to initialize the data members. */

#include<iostream>
using namespace std;

class person{
 public:
 string name;
 int age;
 //Parameterized Constructor
 person(){
    cout<<"this is the a default Constructor contructor"<<endl;
 }
  person(int a,string n){
    name = n;
    age = a;
    cout<<"this is the a Parameterized Constructor contructor"<<endl;
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
  }  
   
   void display(){
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
   }
};



int main(){
    person obj1(12,"alan");
    person obj;
    obj.name = "john";
    obj.age = 24;
    obj.display();

   
    return 0;
}
