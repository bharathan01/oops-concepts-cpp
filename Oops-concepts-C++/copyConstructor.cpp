/*A copy constructor is a special constructor that is used to create a new object as a copy of an existing object of the same class.*/
#include<iostream>
using namespace std;

class person{
 public:
 string name;
 int age;
 
 person(){
    cout<<"this is the a default Constructor contructor"<<endl;
 }
 //Parameterized Constructor
  person(int a,string n){
    name = n;
    age = a;
    cout<<"this is the a Parameterized Constructor contructor"<<endl;
    cout<<"the name of the person is "<<name<<" the age is "<<age<<endl;
  } 
  //copy Constructor
  person(person &obj2){
    name = obj2.name;
    age = obj2.age;
    cout<<"this is the a copy Constructor contructor"<<endl;
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

  //methode -1 passing the coping obj as a parameter to the coped constructor
    person obj3(obj1);
  //methode -2 assgin the obj1 to obj2 copy constructor,all the class having an default copy constructor is there if we dont create implicitly the is called explicitly
  
   person obj4 = obj1;  

    return 0;
}
