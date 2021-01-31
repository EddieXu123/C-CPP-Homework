#include "faculty.h"
using namespace std;

Faculty::Faculty(int ID, string name, double salary, string department, string title, string researchFocus) :
        Employee(ID, name, salary, department) {
    setTitle(title);
    setResearchFocus(researchFocus);
}

Faculty::Faculty() :
        Employee() {
    setTitle("");
    setResearchFocus("");
}

string Faculty::getTitle() const {
    return title;
}
string Faculty::getResearchFocus() const {
    return researchFocus;
}

void Faculty::setTitle(string title) {
    this->title = title;
}

void Faculty::setResearchFocus(string researchFocus) {
    this->researchFocus = researchFocus;
}

string Faculty::print() const {
    return "Title: " + getTitle() + ". Research Focus: " + getResearchFocus() + + ". " + Employee::print();
}