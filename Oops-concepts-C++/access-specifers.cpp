
#include<iostream>
using namespace std;


class animal{
   // with private methode the data can be access with in the class only, all the data are private in a class are defualt
    private:
      string color = "white";
      int age = 2;

    // the data inside public an access out side the class  
    public:  
     string name;

    //protected - data can be access within the class and the inherited classes
    
    void display(){
        cout<<"the name of the animal "<<name<<" the age is "<<age<<" the color is "<<color<<endl;
    } 


};



int main (){
    
    animal obj;

    obj.name =  "cat";
    obj.display();


    return 0;
}