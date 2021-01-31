#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    int ID;
    string name;

public:
    Person(int ID, string name);
    Person();

    int getID() const;
    void setID(int ID);

    string getName() const;
    void setName(string name);

    string print() const;
    void print();
};


#endif // PERSON_H