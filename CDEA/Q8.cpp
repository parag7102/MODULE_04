/*8. Write a C++ program to implement a class called Student that has private
    member variables for name, class, roll number, and marks. Include member
    functions to calculate the grade based on the marks and display the 
    student's information. Accept address from each student implement using
    of aggregation */
#include <iostream>
#include <string>

class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string country;

    Address(std::string street, std::string city, std::string state, std::string country) : street(street), city(city), state(state), country(country) {}
};

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    float marks;
    Address* address; 

public:
    // Constructor
    Student(std::string name, std::string className, int rollNumber, float marks, Address* addr) : name(name), className(className), rollNumber(rollNumber), marks(marks), address(addr) {}

    
    char calculateGrade() const {
        if(marks >= 90) return 'A';
        else if(marks >= 80) return 'B';
        else if(marks >= 70) return 'C';
        else if(marks >= 60) return 'D';
        else return 'F';
    }

    
    void displayInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Class: " << className << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Marks: " << marks << "\n";
        std::cout << "Grade: " << calculateGrade() << "\n";
        std::cout << "Address: " << address->street << ", " << address->city << ", " << address->state << ", " << address->country << "\n";
    }
};

int main() {
    Address addr("123 Street", "Surat", "Gujarat", "India");
    Student student("Yash Patel", "12th", 1, 85.5, &addr);
    student.displayInfo();
    return 0;
}
