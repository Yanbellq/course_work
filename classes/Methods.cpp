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

void DeleteElementByIDAu1(){
    string filename = R"(T:\\course_work\\data-base\\au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 1st auditorium data-base" << endl;
}

void DeleteElementByIDAu2(){
    string filename = R"(T:\\course_work\\data-base\\au2.txt)";

    unique_ptr<string> versionOfOS {new string {"unknown"}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                    << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 2nd auditorium data-base" << endl;
}

void ChangeToBrokenAu1()
{
    string au1 = R"(T:\\course_work\\data-base\\au1.txt)";
    string broken_au1 = R"(T:\\course_work\\data-base\\broken_au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    ifstream finCom(au1);

    cout << "Enter ID: ";
    cin >> *ID;

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID == *localNumber)
        {
            *isBroken = true;

            ofstream foutCom(broken_au1, ios_base::app);
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;

            foutCom.close();
        }
    }
    finCom.close();

    ifstream finCom1(au1);
    ofstream foutCom1("temp.txt");
    while (finCom1 >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID != *localNumber)
        {
            foutCom1 << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                     << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
        }
    }

    finCom1.close();
    foutCom1.close();

    remove(au1.c_str());
    rename("temp.txt", au1.c_str());

    cout << "Computer with this ID: '" << *ID << "' was moved to database with broken computers" << endl;
}

void ChangeToBrokenAu2()
{
    string au2 = R"(T:\\course_work\\data-base\\au2.txt)";
    string broken_au2 = R"(T:\\course_work\\data-base\\broken_au2.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    ifstream finCom(au2);

    cout << "Enter ID: ";
    cin >> *ID;

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID == *localNumber)
        {
            *isBroken = true;

            ofstream foutCom(broken_au2, ios_base::app);
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                    << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;

            foutCom.close();
        }
    }
    finCom.close();

    ifstream finCom1(au2);
    ofstream foutCom1("temp1.txt");
    while (finCom1 >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken)
    {
        if (*ID != *localNumber)
        {
            foutCom1 << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                     << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;
        }
    }

    finCom1.close();
    foutCom1.close();

    remove(au2.c_str());
    rename("temp1.txt", au2.c_str());

    cout << "Computer with this ID: '" << *ID << "' was moved to database with broken computers" << endl;
}

void ShowBrokenAu1()
{
    ifstream finCom(R"(T:\course_work\data-base\broken_au1.txt)");
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
    unique_ptr<bool> isInFix {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
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
             << "Is in fix?: " << *isInFix << endl;
        line();
    }

    finCom.close();
}

void ShowBrokenAu2()
{
    ifstream finCom(R"(T:\course_work\data-base\broken_au2.txt)");
    if (!finCom.is_open())
        cerr << "Error opening file!" << endl;

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        line();
        cout << "Version of WindowsOS: " << *versionOfOS << endl
             << "Name of the screen: " << *nameScreen << endl
             << "Name of CPU: " << *nameCPU << endl
             << "Name of GPU: " << *nameGPU << endl
             << "With CD?: " << *hardDiscCapacity << endl
             << "Type of Keyboard: " << *typeOfKeyboard << endl
             << "Local number: " << *localNumber << endl
             << "Is in fix?: " << *isInFix << endl;
        line();
    }

    finCom.close();
}

void DeleteElementByIDBrokenAu1()
{
    string filename = R"(T:\\course_work\\data-base\\broken_au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 1st auditorium data-base with broken computers" << endl;
}

void DeleteElementByIDBrokenAu2()
{
    string filename = R"(T:\\course_work\\data-base\\broken_au2.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                    << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 2nd auditorium data-base with broken computers" << endl;
}

void ChangeToFixAu1()
{
    string broken_au1 = R"(T:\\course_work\\data-base\\broken_au1.txt)";
    string fix_au1 = R"(T:\\course_work\\data-base\\broken_in_fix_au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    ifstream finCom(broken_au1);

    cout << "Enter ID: ";
    cin >> *ID;

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID == *localNumber)
        {
            *isInFix = true;

            ofstream foutCom(fix_au1, ios_base::app);
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << " "
                    << *isFixed << endl;

            foutCom.close();
        }
    }
    finCom.close();

    ifstream finCom1(broken_au1);
    ofstream foutCom1("temp.txt");
    while (finCom1 >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID != *localNumber)
        {
            foutCom1 << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                     << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;
        }
    }

    finCom1.close();
    foutCom1.close();

    remove(broken_au1.c_str());
    rename("temp.txt", broken_au1.c_str());

    cout << "Computer with this ID: '" << *ID << "' was moved to database with broken in fix computers " << endl;
}

void ChangeToFixAu2()
{
    string broken_au2 = R"(T:\\course_work\\data-base\\broken_au2.txt)";
    string fix_au2 = R"(T:\\course_work\\data-base\\broken_in_fix_au2.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    ifstream finCom(broken_au2);

    cout << "Enter ID: ";
    cin >> *ID;

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID == *localNumber)
        {
            *isInFix = true;

            ofstream foutCom(fix_au2, ios_base::app);
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                    << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << " " << *isFixed << endl;

            foutCom.close();
        }
    }
    finCom.close();

    ifstream finCom1(broken_au2);
    ofstream foutCom1("temp.txt");
    while (finCom1 >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix)
    {
        if (*ID != *localNumber)
        {
            foutCom1 << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                     << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << endl;
        }
    }

    finCom1.close();
    foutCom1.close();

    remove(broken_au2.c_str());
    rename("temp.txt", broken_au2.c_str());

    cout << "Computer with this ID: '" << *ID << "' was moved to database with broken in fix computers " << endl;
}

void ShowFixAu1()
{
    ifstream finCom(R"(T:\course_work\data-base\broken_in_fix_au1.txt)");
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
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
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
             << "Is fixed?: " << *isFixed << endl;
        line();
    }

    finCom.close();
}

void ShowFixAu2()
{
    ifstream finCom(R"(T:\course_work\data-base\broken_in_fix_au2.txt)");
    if (!finCom.is_open())
        cerr << "Error opening file!" << endl;

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity {new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
    {
        line();
        cout << "Version of WindowsOS: " << *versionOfOS << endl
             << "Name of the screen: " << *nameScreen << endl
             << "Name of CPU: " << *nameCPU << endl
             << "Name of GPU: " << *nameGPU << endl
             << "With CD?: " << *hardDiscCapacity << endl
             << "Type of Keyboard: " << *typeOfKeyboard << endl
             << "Local number: " << *localNumber << endl
             << "Is fixed?: " << *isFixed << endl;
        line();
    }

    finCom.close();
}

void DeleteElementByIDFixAu1()
{
    string filename = R"(T:\\course_work\\data-base\\broken_in_fix_au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << " "
                    << *isFixed << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 1st auditorium data-base with broken computers in fix" << endl;
}

void DeleteElementByIDFixAu2()
{
    string filename = R"(T:\\course_work\\data-base\\broken_in_fix_au2.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<int> hardDiscCapacity{new int {0}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    cout << "Enter ID: ";
    cin >> *ID;

    ifstream finCom(filename);
    ofstream foutCom("temp.txt");

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *hardDiscCapacity >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
    {
        if (*ID != *localNumber)
        {
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *hardDiscCapacity << " "
                    << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << " " << *isFixed << endl;
        }
    }

    finCom.close();
    foutCom.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Computer with this ID: '" << *ID << "' was deleted from 2nd auditorium data-base with broken computers in fix" << endl;
}

void ChangeToFixedAu1()
{
    string fix_au1 = R"(T:\\course_work\\data-base\\broken_in_fix_au1.txt)";
    string au1 = R"(T:\\course_work\\data-base\\au1.txt)";

    unique_ptr<int> versionOfOS {new int {0}};
    unique_ptr<string> nameScreen {new string {"unknown"}};
    unique_ptr<string> nameCPU {new string {"unknown"}};
    unique_ptr<string> nameGPU {new string {"unknown"}};
    unique_ptr<bool> withCD {new bool {false}};
    unique_ptr<bool> withFloppy {new bool {false}};
    unique_ptr<string> typeOfKeyboard {new string {"unknown"}};
    unique_ptr<int> localNumber {new int {0}};
    unique_ptr<bool> isBroken {new bool {false}};
    unique_ptr<bool> isInFix {new bool {false}};
    unique_ptr<bool> isFixed {new bool {false}};

    unique_ptr<int> ID {new int {0}};

    ifstream finCom(fix_au1);

    cout << "Enter ID: ";
    cin >> *ID;

    while (finCom >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
    {
        if (*ID == *localNumber)
        {
            *isBroken = false;

            ofstream foutCom(au1, ios_base::app);
            foutCom << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                    << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << endl;

            foutCom.close();
        }
    }
    finCom.close();

    ifstream finCom1(fix_au1);
    ofstream foutCom1("temp.txt");
    while (finCom1 >> *versionOfOS >> *nameScreen >> *nameCPU >> *nameGPU >> *withCD >> *withFloppy >> *typeOfKeyboard >> *localNumber >> *isBroken >> *isInFix >> *isFixed)
    {
        if (*ID != *localNumber)
        {
            foutCom1 << *versionOfOS << " " << *nameScreen << " " << *nameCPU << " " << *nameGPU << " " << *withCD << " "
                     << *withFloppy << " " << *typeOfKeyboard << " " << *localNumber << " " << *isBroken << " " << *isInFix << " "
                     << *isFixed << endl;
        }
    }

    finCom1.close();
    foutCom1.close();

    remove(fix_au1.c_str());
    rename("temp.txt", fix_au1.c_str());

    cout << "Computer with this ID: '" << *ID << "' was moved to database with workable computers" << endl;
}

void ChangeToFixedAu2()
{

}