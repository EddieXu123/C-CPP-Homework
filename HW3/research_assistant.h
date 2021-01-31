#ifndef RESEARCH_ASSISTANT_H
#define RESEARCH_ASSISTANT_H
#include "staff.h"
#include "student.h"
#include <string>
using namespace std;

class ResearchAssistant : public Student, public Staff {
private:
    string area;

public:
    ResearchAssistant(string area, string major, double gpa, int gradYear, int id, string name);
    ResearchAssistant(string area, string title, string department, int salary, int id, string name);

    string getResearchArea() const;

    void setResearchArea(string researchArea);

    string print() const;
};


#endif // RESEARCH_ASSISTANT_H
