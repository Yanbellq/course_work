#ifndef COURSE_WORK_WINDOWSOS_PC_H
#define COURSE_WORK_WINDOWSOS_PC_H

#include <iostream>
#include "fstream"
#include "memory"
#include "Computers.h"

using namespace std;

class WindowsOS_PC : public Interface
{
    Computers PC;
    int versionOfOS, localNumber = PC.getID();
    bool withFloppy, withCD;
public:
    WindowsOS_PC();
    WindowsOS_PC(Computers PC, int versionOS, bool withCD, bool withFloppy);
    WindowsOS_PC(const WindowsOS_PC &other);
    WindowsOS_PC(WindowsOS_PC &&other);
    ~WindowsOS_PC(){};

    string getVersionOS() const { return to_string(versionOfOS); };
    string getCD() const { return to_string(withCD); };
    string getFloppy() const {return to_string(withFloppy); };

    void interface1() override;
    void interface2() override;
    void interface3() override;
};


#endif
