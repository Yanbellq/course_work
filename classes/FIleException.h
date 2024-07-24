#ifndef COURSE_WORK_FILEEXCEPTION_H
#define COURSE_WORK_FILEEXCEPTION_H

#include <iostream>
using namespace std;

class FileException : public exception
{
public:
    FileException() = default;
    ~FileException() = default;
    const char *what() const noexcept override{
        return "Problems with file)))";
    };
};

#endif
