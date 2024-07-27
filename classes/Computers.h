#ifndef COURSE_WORK_COMPUTERS_H
#define COURSE_WORK_COMPUTERS_H

#include <iostream>
#include "Interface.h"
using namespace std;

class Computers
{
    string nameCPU, nameScreen, nameGPU, typeOfKeyboard;
    int localNumber;
public:

    Computers();
    Computers(int localNumber, string nameScreen, string nameCPU, string nameGPU, string typeOfKeyboard);
    Computers(const Computers& other);
    Computers(Computers&& other);
    ~Computers(){};

    int getID() const { return localNumber; };
    string getScreen() const { return nameScreen; };
    string getCPU() const { return nameCPU; };
    string getGPU() const { return nameGPU; };
    string getKeyboard() const { return typeOfKeyboard; };
    string getComputer() const { return to_string(localNumber) + " " + nameScreen + " " + nameCPU + " " + nameGPU + " " + typeOfKeyboard; };

    Computers &operator = (const Computers &obj);
};


#endif