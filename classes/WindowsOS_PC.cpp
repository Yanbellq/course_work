#include "WindowsOS_PC.h"

WindowsOS_PC::WindowsOS_PC()
    : versionOfOS(0), withCD(false), withFloppy(false) {};

WindowsOS_PC::WindowsOS_PC(Computers PC, int versionOS, bool withCD, bool withFloppy)
    : PC(PC), versionOfOS(versionOS), withCD(withCD), withFloppy(withFloppy) {};

WindowsOS_PC::WindowsOS_PC(const WindowsOS_PC &other)
    : PC(other.PC), versionOfOS(other.versionOfOS), withCD(other.withCD), withFloppy(other.withFloppy) {};

WindowsOS_PC::WindowsOS_PC(WindowsOS_PC &&other)
    : PC(other.PC), versionOfOS(other.versionOfOS), withCD(other.withCD), withFloppy(other.withFloppy)
{
    other.PC = Computers();
    other.versionOfOS = 0;
    other.withCD = false;
    other.withFloppy = false;
};

WindowsOS_PC::~WindowsOS_PC() { cout << "Computer with this ID: '" << localNumber << "' was deleted from data-base" << endl;}

void WindowsOS_PC::interface()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "     CAUTION AUDITORIUM 1" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
};
