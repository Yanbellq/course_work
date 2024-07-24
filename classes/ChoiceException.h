#ifndef COURSE_WORK_CHOICEEXCEPTION_H
#define COURSE_WORK_CHOICEEXCEPTION_H

#include <iostream>
using namespace std;

class ChoiceException : public exception
{
public:
    ChoiceException() = default;
    ~ChoiceException() = default;
    const char *what() const noexcept override{
        return "Wrong choice! Check what you choose!!!";
    };
};

#endif
