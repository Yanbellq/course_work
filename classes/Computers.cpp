#include "Computers.h"

Computers::Computers()
    : Computers(0, "unknown", "unknown", "unknown", "unknown"){};

Computers::Computers(int localNumber, string nameScreen, string nameCPU, string nameGPU, string typeOfKeyboard)
    : localNumber(localNumber), nameScreen(nameScreen), nameCPU(nameCPU), nameGPU(nameGPU), typeOfKeyboard(typeOfKeyboard){}

Computers::Computers(const Computers& other)
    : localNumber(other.localNumber), nameScreen(other.nameScreen), nameCPU(other.nameCPU), nameGPU(other.nameGPU), typeOfKeyboard(other.typeOfKeyboard){}

Computers::Computers(Computers &&other)
    : localNumber(other.localNumber), nameScreen(other.nameScreen), nameCPU(other.nameCPU), nameGPU(other.nameGPU), typeOfKeyboard(other.typeOfKeyboard)
{
    other.localNumber = 0;
    other.nameScreen = "unknown";
    other.nameCPU = "unknown";
    other.nameGPU = "unknown";
    other.typeOfKeyboard = "unknown ";
}

Computers &Computers::operator=(const Computers &obj)
{
    if (this != &obj)
    {
        this->localNumber = obj.localNumber;
        this->nameScreen = obj.nameScreen;
        this->nameCPU = obj.nameCPU;
        this->nameGPU = obj.nameGPU;
        this->typeOfKeyboard = obj.typeOfKeyboard;
    }
    return *this;
}
