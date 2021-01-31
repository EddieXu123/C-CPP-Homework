#ifndef FACULTY_H
#define FACULTY_H
#include "employee.h"
#include <string>
using namespace std;

class Faculty : public Employee {
private:
    string title;
    string researchFocus;

public:
    Faculty(int ID, string name, double salary, string department, string title, string researchFocus);
    Faculty();

    string getTitle() const;
    void setTitle(string title);

    string getResearchFocus() const;
    void setResearchFocus(string researchFocus);

    string print() const;
};


#endif // FACULTY_H
