
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
    
    person obj;
    obj.name = "john";
    obj.age = 24;
    obj.display();


    return 0;
}
