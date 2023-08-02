/*single inheritance

Single inheritance is a concept in object-oriented programming where a class can inherit properties and behaviors from only one base class. 
In other words, a derived class can have only one immediate parent class from which it inherits.
*/

#include<iostream>
using namespace std;

class animal{
    
    private:
    int age;

    protected:
    string sound;
    
    public:
    string name;
    string color;

    void animalSound(){
        cout<<"the "<<name<<" is "<<sound;
    }

};
class dog : public animal{
   // derived class

   //creating a setter to access protected data
   public:
   void setDogSound(string s){
    this -> sound = s;
    cout<<this -> sound;
}

};

int main(){

 dog obj;
 obj.name = "dog";
 obj.animalSound();
 obj.setDogSound("barking");

    return 0;
}