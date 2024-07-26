#include "MacOS_PC.h"

MacOS_PC::MacOS_PC()
        : versionOfOS("unknown"), hardDiscCapacity(0) {};

MacOS_PC::MacOS_PC(Computers PC, string versionOfOS, int hardDiscCapacity)
        : PC(PC), hardDiscCapacity(hardDiscCapacity), versionOfOS(versionOfOS) {};

MacOS_PC::MacOS_PC(const MacOS_PC &other)
        : PC(other.PC), hardDiscCapacity(other.hardDiscCapacity), versionOfOS(other.versionOfOS) {};

MacOS_PC::MacOS_PC(MacOS_PC &&other)
        : PC(other.PC), hardDiscCapacity(other.hardDiscCapacity), versionOfOS(other.versionOfOS)
{
    other.PC = Computers();
    other.hardDiscCapacity = 0;
    other.versionOfOS = "unknown";
};

void MacOS_PC::interface1()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "     CAUTION AUDITORIUM 2" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
};

void MacOS_PC::interface2()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "     CAUTION AUDITORIUM 2" << endl
         << "            BROKEN" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
};
