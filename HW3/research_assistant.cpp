#include "research_assistant.h"
#include <string>
using namespace std;

ResearchAssistant::ResearchAssistant(string area, string major, double gpa, int gradYear, int ID, string name) :
        Student(ID, name, gradYear, major, gpa){
    setResearchArea(area);
}

ResearchAssistant::ResearchAssistant(string area, string title, string department, int salary, int ID, string name) :
Staff(ID, name, salary, department, title) {
    setResearchArea(area);
}

string ResearchAssistant::getResearchArea() const {
    return area;
}

void ResearchAssistant::setResearchArea(string researchArea) {
    area = researchArea;
}
string ResearchAssistant::print() const {
    if (Student::getName() == "" && Staff::getName() == "") {
        return "Error. Defaults in both fields";
    }
    if (Student::getName() != "" && Staff::getName() != "") {
        return "Error. Defaults in no fields";
    }
    string returnString = "Research Area: " + getResearchArea() + ". ";
    returnString += (Student::getName() == "" ? Staff::print() : Student::print());
    return returnString;
}