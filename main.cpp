#include <iostream>
#include "classes/Methods.h"
#include "classes/WindowsOS_PC.h"
#include "classes/ChoiceException.h"
#include "classes/PasswordException.h"
#include "classes/TypeException.h"

using namespace std;

int main()
{
    line();
    cout << "Hello my dear friend <3!" << endl
         << "Who are you?" << endl
         << "1. Administrator" << endl
         << "2. Inspector" << endl
         << "3. Instructions" << endl
         << "0. Exit" << endl;
    line();
    line();
    int select;
    cout << "Your choice: ";
    cin >> select;
    line();
    try
    {
        if (select != 1 && select != 2 && select != 3 && select != 0)
            throw ChoiceException();
        switch (select)
        {
            case 1: //Admin
            {
                string password;
                int k = 0;
                while (k < 3)
                {
                    cout << "Enter password: ";
                    cin >> password;

                    if (password == "123")
                    {
                        try {
                            while (true) {
                                line();
                                cout << "Hello my dear admin <3!" << endl
                                     << "What you want want to do?" << endl
                                     << "1. Add new computer in 1st auditorium" << endl
                                     << "2. Add new computer in 2nd auditorium" << endl
                                     << "3. See all computers in 1st auditorium" << endl
                                     << "4. See all computers in 2nd auditorium" << endl
                                     << "0. Exit" << endl;
                                line();

                                int selectAd;
                                cout << "Your choice: ";
                                cin >> selectAd;

                                line();


                                if (selectAd != 1 && selectAd != 2 && selectAd != 3 && selectAd != 4 && selectAd != 0)
                                    throw ChoiceException();
                                switch (selectAd) {
                                    case 1: {
                                        line();
                                        AddComputersAu1();
                                        line();
                                        break;
                                    }
                                    case 2: {
                                        line();
                                        AddComputersAu2();
                                        line();
                                        break;
                                    }
                                    case 3: {
                                        WindowsOS_PC windows;
                                        windows.interface();
                                        ShowComputersAu1();
                                        curious_line();
                                        break;
                                    }
                                    case 4: {
                                        MacOS_PC mac;
                                        mac.interface();
                                        ShowComputersAu2();
                                        curious_line();
                                        break;
                                    }
                                    case 0:
                                        return 0;
                                }
                            }
                        }
                        catch (ChoiceException & Choice)
                        {
                            cerr << Choice.what();
                        }
                        catch (PasswordException & Password) {
                            cerr << Password.what();
                        }
                    } else {
                        cerr << "Wrong password" << endl;
                        k++;
                    }
                }
                if (k == 3) {
                    cerr << "You have reached the maximum number of attempts. The program ends." << endl;
                    return 1;
                }
                break;
            }
        }
    }
    catch (ChoiceException &Choice) {
        cerr << Choice.what();
    }
    return 0;
}