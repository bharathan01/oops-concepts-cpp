/*Encapsulation is one of the four fundamental concepts in object-oriented programming (OOP). 
It refers to the bundling of data (attributes) and the methods (functions) that operate on that data within a single unit called a class. 
In C++, you can achieve encapsulation by defining private and public access specifiers within a class,
 which control the visibility of the class members from outside the class.*/

 #include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter methods to set the private attributes
    void setName(string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    // Getter methods to access the private attributes
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person person1;

    // Using the setter methods to set the attributes
    person1.setName("John");
    person1.setAge(30);

    // Using the getter methods to access the attributes
    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;

    return 0;
}
