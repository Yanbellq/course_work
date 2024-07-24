#ifndef COURSE_WORK_PASSWORDEXCEPTION_H
#define COURSE_WORK_PASSWORDEXCEPTION_H

#include <iostream>
using namespace std;

class PasswordException : public exception
{
public:
    PasswordException() = default;
    ~PasswordException() = default;
    const char *what() const noexcept override{
        return "Wrong password!!!";
    };
};

#endif
