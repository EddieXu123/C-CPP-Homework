#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    int gradYear;
    string major;
    double gpa;

public:
    Student(int ID, string name, int gradYear, string major, double gpa);
    Student();

    int getGradYear() const;
    void setGradYear(int gradYear);

    string getMajor() const;
    void setMajor(std::string major);

    double getGPA() const;
    void setGPA(double gpa);

    string print() const;
};


#endif // STUDENT_H
