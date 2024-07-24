#ifndef COURSE_WORK_ID_EXCEPTION_H
#define COURSE_WORK_ID_EXCEPTION_H

#include <iostream>
using namespace std;

class ID_Exception : public exception
{
public:
    ID_Exception()=default;
    ~ID_Exception()=default;
    const char *what() const noexcept override{
        return "There is already this ID. Change it!";
    }
};

#endif
