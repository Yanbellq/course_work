#ifndef COURSE_WORK_MACOS_PC_H
#define COURSE_WORK_MACOS_PC_H

#include <iostream>
#include "Computers.h"

using namespace std;

class MacOS_PC : public Interface
{
    Computers PC;
    string versionOfOS;
    int hardDiscCapacity, localNumber = PC.localNumber;
public:
    MacOS_PC();
    MacOS_PC(Computers PC, string versionOfOS, int hardDiscCapacity);
    MacOS_PC(const MacOS_PC& other);
    MacOS_PC(MacOS_PC&& other);
    ~MacOS_PC(){};

    void interface1() override;
    void interface2() override;
    void interface3() override;
};


#endif