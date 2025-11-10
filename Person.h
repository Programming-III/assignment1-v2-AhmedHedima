#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;

public:
    Person() {}
    Person(string name, int id) : name(name), id(id) {}

    virtual void display() const {
        cout << "Name: " << name << " (ID: " << id << ")" << endl;
    }

    // Getters (optional, useful later)
    string getName() const { return name; }
    int getId() const { return id; }
};

#endif
