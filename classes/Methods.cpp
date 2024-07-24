#include "Methods.h"

void line()
{
    cout << "------------------------------" << endl;
}

void curious_line()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void clearConsole() {
    system("cls");
}

void AddComputersAu1()
{
    unique_ptr<int> localNumber {new int {0}};
    cout << "Enter ID of this computer: ";
    cin >> *localNumber;

    unique_ptr<string> nameScreen {new string {"unknown"}};
    cout << "Enter how this screen is named: ";
    cin >> *nameScreen;

    unique_ptr<int> versionOfOS {new int {0}};
    cout << "Enter which version of WindowsOS have this PC: ";
    cin >> *versionOfOS;

    unique_ptr<string> nameCPU {new string {"unknown"}};
    cout << "Enter CPU of this PC: ";
    cin >> *nameCPU;

    unique_ptr<string> nameGPU {new string {"unknown"}};
    cout << "Enter GPU of this PC: ";
    cin >> *nameGPU;

    unique_ptr<bool> withCD {new bool {false}};
    cout << endl << "This PC with CD-ROM?" << endl << "   (1 if Yes / 0 if No)" << endl << "Enter: ";
    cin >> *withCD;

    unique_ptr<bool> withFloppy {new bool {false}};
    cout << endl << "This PC with Floppy-Disc?      (1 if Yes / 0 if No)" << endl << "Enter: ";
    cin >> *withFloppy;

    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    cout << "Enter which type of keyboard is on this PC: ";
    cin >> *typeOfKeyboard;

    unique_ptr<bool> isBroken {new bool {false}};


    ifstream finCom(R"(T:\course_work\data-base\au1.txt)");

    unique_ptr<int> localNumber1 {new int {0}};
    unique_ptr<string> nameScreen1 {new string {"unknown"}};
    unique_ptr<string> nameCPU1 {new string {"unknown"}};
    unique_ptr<string> nameGPU1 {new string {"unknown"}};
    unique_ptr<int> versionOfOS1 {new int {0}};
    unique_ptr<bool> withCD1 {new bool {false}};
    unique_ptr<bool> withFloppy1 {new bool {false}};
    unique_ptr<string> typeOfKeyboard1 {new string {"unknown"}};
    unique_ptr<bool> isBroken1 {new bool {false}};

    while (finCom >> *localNumber1 >> *nameScreen1 >> *nameCPU1 >> *nameGPU1 >> *versionOfOS1 >> *withCD1 >> *withFloppy1 >> *typeOfKeyboard1 >> *isBroken1)
    {
        if (*localNumber == *localNumber1)
        {
            throw ID_Exception();
        }
        cout << nameScreen1;
    }
    finCom.close();

    ofstream foutCom(R"(T:\course_work\data-base\au1.txt)", ios_base::app);
    foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " " << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
    foutCom.close();
};

void AddComputersAu2()
{
    unique_ptr<int> localNumber {new int {0}};
    cout << "Enter ID of this computer: ";
    cin >> *localNumber;

    unique_ptr<string> nameScreen {new string {"unknown"}};
    cout << "Enter how this screen is named: ";
    cin >> *nameScreen;

    unique_ptr<string> versionOfOS {new string {"unknown"}};
    cout << "Enter which version of MacOS have this PC: ";
    cin >> *versionOfOS;

    unique_ptr<string> nameCPU {new string {"unknown"}};
    cout << "Enter CPU of this PC: ";
    cin >> *nameCPU;

    unique_ptr<string> nameGPU {new string {"unknown"}};
    cout << "Enter GPU of this PC: ";
    cin >> *nameGPU;

    unique_ptr<int> hardDiscCapacity {new int {0}};
    cout << "Enter hard-disc capacity of this PC: ";
    cin >> *hardDiscCapacity;

    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    cout << "Enter which type of keyboard is on this PC: ";
    cin >> *typeOfKeyboard;

    unique_ptr<bool> isBroken {new bool {false}};

    ifstream finCom(R"(T:\course_work\data-base\au2.txt)");

    unique_ptr<int> localNumber1 {new int {0}};
    unique_ptr<string> nameScreen1 {new string {"unknown"}};
    unique_ptr<string> nameCPU1 {new string {"unknown"}};
    unique_ptr<string> nameGPU1 {new string {"unknown"}};
    unique_ptr<int> versionOfOS1 {new int {0}};
    unique_ptr<int> hardDiscCapacity1 {new int {0}};
    unique_ptr<string> typeOfKeyboard1 {new string {"unknown"}};
    unique_ptr<bool> isBroken1 {new bool {false}};

    while (finCom >> *localNumber1 >> *nameScreen1 >> *nameCPU1 >> *nameGPU1 >> *versionOfOS1 >> *hardDiscCapacity1 >> *typeOfKeyboard1 >> *isBroken1)
    {
        if (*localNumber == *localNumber1)
        {
            throw ID_Exception();
        }
        cout << nameScreen1;
    }
    finCom.close();

    ofstream foutCom(R"(T:\course_work\data-base\au2.txt)", ios_base::app);
    foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
    foutCom.close();
}

void ShowComputersAu1()
{
    ifstream finCom(R"(T:\course_work\data-base\au1.txt)");
    if (!finCom.is_open())
        cerr << "Error opening file!" << endl;

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        line();
        cout << "Version of WindowsOS: " << *versionOfOS << endl
             << "Name of the screen: " << *nameScreen << endl
             << "Name of CPU: " << *nameCPU << endl
             << "Name of GPU: " << *nameGPU << endl
             << "With CD?: " << *withCD << endl
             << "With Floppy?: " << *withFloppy << endl
             << "Type of Keyboard: " << *typeOfKeyboard << endl
             << "Local number: " << *localNumber << endl
             << "Is broken?: " << *isBroken << endl;
        line();
    }

    finCom.close();
}

void ShowComputersAu2()
{
    ifstream finCom(R"(T:\course_work\data-base\au2.txt)");
    if (!finCom.is_open())
        cerr << "Error opening file!" << endl;

    unique_ptr<string> versionOfOS {new string {"unknown"}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        line();
        cout << "Version of MacOS: " << *versionOfOS << endl
             << "Name of the screen: " << *nameScreen << endl
             << "Name of CPU: " << *nameCPU << endl
             << "Name of GPU: " << *nameGPU << endl
             << "Hard-Disc Capacity?: " << *hardDiscCapacity << "GB" << endl
             << "Type of Keyboard: " << *typeOfKeyboard << endl
             << "Local number: " << *localNumber << endl
             << "Is broken?: " << *isBroken << endl;
        line();
    }

    finCom.close();
}

void ChangeToBrokenAu1()
{
    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};

    *isBroken = true;

    ofstream foutCom(R"(T:\course_work\data-base\au1.txt)", ios_base::app);
    foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " " << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
    foutCom.close();
}

void ShowByIDAu1()
{
    WindowsOS_PC windows1;
    int ID;

    cout << "Enter ID of the book: ";
    cin >> ID;

    unique_ptr<WindowsOS_PC> windows = windows1.findPC(R"(T:\\course_work\\data-base\\au1.txt)", ID);
    if(windows)
    {
        cout << "Here your PC, that you have searched by ID: " << endl;
        cerr << windows.get
    }
}