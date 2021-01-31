#ifndef STAFF_H
#define STAFF_H
#include "employee.h"
#include <string>
using namespace std;

class Staff : public Employee {
private:
    string title;

public:
    Staff(int ID, string name, double salary, string department, string title);
    Staff();

    string getTitle() const;
    void setTitle(string title);

    string print() const;
};


#endif // STAFF_H
