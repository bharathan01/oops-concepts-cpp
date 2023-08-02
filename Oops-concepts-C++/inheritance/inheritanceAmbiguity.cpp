/*In C++, the term "inheritance ambiguity" refers to a situation that arises when a class inherits from multiple base 
classes, and there are conflicting names or functions with the same name in the different base classes. This can lead
 to ambiguity when trying to access a member from the derived class because the compiler doesn't know which base class member to use.*/




 #include<iostream>
 using namespace std;
 class A{
    public:
    void display(){
        cout<<"this is from Class A"<<endl;
    }
 };
 class B : public A{
 public:
    void display(){
        cout<<"this is from Class A"<<endl;
    }
 };
 int main(){
   B obj;
   //calling the display() on the base class
   obj.display();
  //calling the display() on the derived class class,:: operator used to select the 
   obj.B::display();
    
    return 0;
 }