/*Static  Member: When used with a class or struct, the static keyword can be used to declare a static data member. 
A static data member is shared among all instances of the class and exists independently of any particular object. static menbers are belongs to class its self*/

#include<iostream>
using namespace std;

class hello{
    //Static Data Member
    public:
    static int n;
    //Static Member fubction
      static void display(){
        cout<<"this is a static member function"<<endl;
      }
};

int main(){
// no need of a object to call a static members     
int hello::n = 0;
hello::display();


    return 0;
}