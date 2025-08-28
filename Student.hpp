#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor and Destructor
    Student();               // Default constructor
    ~Student();              // Destructor

    // Setters
    void setName(const string& n);
    void setAge(int a);

    // Getters
    string getName() const;
    int getAge() const;
};

#endif