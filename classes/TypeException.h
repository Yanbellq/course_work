#ifndef COURSE_WORK_TYPEEXCEPTION_H
#define COURSE_WORK_TYPEEXCEPTION_H

#include <iostream>
using namespace std;

class TypeException : public exception
{
public:
    TypeException() = default;
    ~TypeException() = default;

    const char *what() const noexcept override{
        return "Wrong type of data!!!";
    };
};

#endif
