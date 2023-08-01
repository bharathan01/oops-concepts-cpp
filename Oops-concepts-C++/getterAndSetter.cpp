//to access and modify the data inside a private is used getter and setter methode
#include<iostream>
using namespace std;


class animal{
   // with private methode the data can be access with in the class only, all the data are private in a class are defualt
    private:
      int age = 0 ;

    // the data inside public an access out side the class  
    public:  
     string name;
     string color;

    //protected - data can be access within the class and the inherited classes

    //getter methode - get the private data

    int getData(){
        return age;
    } 
   //setter -set a new private data
    void setData(int a){
        age = a;
    }

    void display(){
        cout<<"the name of the animal "<<name<<" the age is "<<age<<" the color is "<<color<<endl;
    } 


};



int main (){
    
    animal obj;
    obj.name =  "cat";
    obj.color = "black";
    cout<<"getting the private data "<<obj.getData()<<endl;
    obj.setData(2);
    obj.display();


    return 0;
}
