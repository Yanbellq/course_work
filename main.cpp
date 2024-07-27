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
         << "Who are you?" << endl << endl
         << "1. Administrator" << endl
         << "2. Inspector" << endl
         << "0. Exit" << endl;
    line();
    int select;
    cout << "Your choice: ";
    cin >> select;
    line();
    try
    {
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
                                     << "What you want want to do?" << endl << endl
                                     << "1. Add new computer in 1st auditorium" << endl
                                     << "2. Add new computer in 2nd auditorium" << endl
                                     << "3. Show computers in 1st auditorium" << endl
                                     << "4. Show computers in 2nd auditorium" << endl
                                     << "5. Delete computer by ID in 1st auditorium" << endl
                                     << "6. Delete computer by ID in 2nd auditorium" << endl
                                     << "7. Change to broken in 1st auditorium" << endl
                                     << "8. Change to broken in 2nd auditorium" << endl
                                     << "9. Show broken computers in 1st auditorium" << endl
                                     << "10. Show broken computers in 2nd auditorium" << endl
                                     << "11. Delete broken computer by ID in 1st auditorium" << endl
                                     << "12. Delete broken computer by ID in 2nd auditorium" << endl
                                     << "13. Change to fix in 1st auditorium" << endl
                                     << "14. Change to fix in 2nd auditorium" << endl
                                     << "15. Show computers in fix in 1st auditorium" << endl
                                     << "16. Show computers in fix in 2nd auditorium" << endl
                                     << "17. Delete computer in fix in 1st auditorium" << endl
                                     << "18. Delete computer in fix in 2nd auditorium" << endl
                                     << "19. Change to fixed in 1st auditorium" << endl
                                     << "20. Change to fixed in 2nd auditorium" << endl
                                     << "21. Show Inspectors" << endl
                                     << "0. Exit" << endl;
                                line();

                                int selectAd;
                                cout << "Your choice: ";
                                cin >> selectAd;

                                line();

                                switch (selectAd) {
                                    case 1:
                                    {
                                        line();
                                        AddComputersAu1();
                                        line();
                                        break;
                                    }
                                    case 2:
                                    {
                                        line();
                                        AddComputersAu2();
                                        line();
                                        break;
                                    }
                                    case 3:
                                    {
                                        WindowsOS_PC windows;
                                        windows.interface1();
                                        ShowComputersAu1();
                                        curious_line();
                                        break;
                                    }
                                    case 4:
                                    {
                                        MacOS_PC mac;
                                        mac.interface1();
                                        ShowComputersAu2();
                                        curious_line();
                                        break;
                                    }
                                    case 5:
                                    {
                                        DeleteElementByIDAu1();
                                        break;
                                    }
                                    case 6:
                                    {
                                        DeleteElementByIDAu2();
                                        break;
                                    }
                                    case 7:
                                    {
                                        ChangeToBrokenAu1();
                                        break;
                                    }
                                    case 8:
                                    {
                                        ChangeToBrokenAu2();
                                        break;
                                    }
                                    case 9:
                                    {
                                        WindowsOS_PC windows;
                                        windows.interface2();
                                        ShowBrokenAu1();
                                        curious_line();
                                        break;
                                    }
                                    case 10:
                                    {
                                        MacOS_PC mac;
                                        mac.interface2();
                                        ShowBrokenAu2();
                                        curious_line();
                                        break;
                                    }
                                    case 11:
                                    {
                                        DeleteElementByIDBrokenAu1();
                                        break;
                                    }
                                    case 12:
                                    {
                                        DeleteElementByIDBrokenAu2();
                                        break;
                                    }
                                    case 13:
                                    {
                                        ChangeToFixAu1();
                                        break;
                                    }
                                    case 14:
                                    {
                                        ChangeToFixAu2();
                                        break;
                                    }
                                    case 15:
                                    {
                                        WindowsOS_PC windows;
                                        windows.interface3();
                                        ShowFixAu1();
                                        curious_line();
                                        break;
                                    }
                                    case 16:
                                    {
                                        MacOS_PC mac;
                                        mac.interface3();
                                        ShowFixAu2();
                                        curious_line();
                                        break;
                                    }
                                    case 17:
                                    {
                                        DeleteElementByIDFixAu1();
                                        break;
                                    }
                                    case 18:
                                    {
                                        DeleteElementByIDFixAu2();
                                        break;
                                    }
                                    case 19:
                                    {
                                        ChangeToFixedAu1();
                                        break;
                                    }
                                    case 20:
                                    {
                                        ChangeToFixedAu2();
                                        break;
                                    }
                                    case 21:
                                    {
                                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                                             << "      CAUTION INSPECTORS" << endl
                                             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                                        ShowInspectors();
                                        curious_line();
                                        break;
                                    }
                                    case 0:
                                        return 0;
                                    default:
                                        throw ChoiceException();
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
                    return 0;
                }
                break;
            }
            case 2: //Inspector
            {
                Registration();

                try
                {
                    while (true)
                    {
                        line();
                        cout << "\nHello my dear inspector <3!" << endl << endl
                             << "1. Show computers in 1st auditorium" << endl
                             << "2. Show computers in 2nd auditorium" << endl
                             << "3. Show broken computers in 1st auditorium" << endl
                             << "4. Show broken computers in 2nd auditorium" << endl
                             << "5. Show computers in fix in 1st auditorium" << endl
                             << "6. Show computers in fix in 2nd auditorium" << endl
                             << "0. Exit" << endl << endl;

                        int selectIns;
                        cout << "Your choice: ";
                        cin >> selectIns;

                        switch (selectIns)
                        {
                            case 1:
                            {
                                WindowsOS_PC windows;
                                windows.interface1();
                                ShowComputersAu1();
                                curious_line();
                                break;
                            }
                            case 2:
                            {
                                MacOS_PC mac;
                                mac.interface1();
                                ShowComputersAu2();
                                curious_line();
                                break;
                            }
                            case 3:
                            {
                                WindowsOS_PC windows;
                                windows.interface2();
                                ShowBrokenAu1();
                                curious_line();
                                break;
                            }
                            case 4:
                            {
                                MacOS_PC mac;
                                mac.interface2();
                                ShowBrokenAu2();
                                curious_line();
                                break;
                            }
                            case 5:
                            {
                                WindowsOS_PC windows;
                                windows.interface3();
                                ShowFixAu1();
                                curious_line();
                                break;
                            }
                            case 6:
                            {
                                MacOS_PC mac;
                                mac.interface3();
                                ShowFixAu2();
                                curious_line();
                                break;
                            }
                            case 0:
                                return 0;
                            default:
                                throw ChoiceException();
                        }
                    }
                }
                catch (ChoiceException & Choice)
                {
                    cerr << Choice.what();
                }
                break;
            }
            case 0: //Exit
            {
                return 0;
            }
            default:
            {
                throw ChoiceException();
            }
        }
    }
    catch (ChoiceException &Choice) {
        cerr << Choice.what();
    }
    return 0;
}