#include "student.h"
using namespace std;

Student::Student(int ID, string name, int gradYear, string major, double gpa) :
Person(ID, name) {
    setGradYear(gradYear);
    setMajor(major);
    setGPA(gpa);
}

Student::Student() : Person() {
    setGradYear(0);
    setMajor("");
    setGPA(-1.0);
}

int Student::getGradYear() const {
    return gradYear;
}

std::string Student::getMajor() const {
    return major;
}

double Student::getGPA() const {
    return gpa;
}

void Student::setGradYear(int gradYear) {
    this->gradYear = gradYear;
}

void Student::setMajor(std::string major) {
    this->major = major;
}

void Student::setGPA(double gpa) {
    this->gpa = gpa;
}

string Student::print() const {
    return "Grad Year: " + to_string(getGradYear()) + ". Major: " +
           getMajor() + ". GPA: " + to_string(getGPA()) + ". " + Person::print();
}
