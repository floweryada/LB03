#include <iostream>
#include "LB03.h"
#include "users.h"
#include <stdlib.h>

using namespace std;

void menu();


void menu()
{
    int enterNumber;

    OneConnList oneConnList;
    Data data;

    while(true)
    {
        system("cls");

        cout << "Hello!\n";
        cout << "If you want to: \n";

        cout << "Exit, please, press <0>\n";
        cout << "Know, is the List empty, please, press <1>\n";
        cout << "See the existing List, please, press <2>\n";
        cout << "Delete all List, please, press <3>\n";
        cout << "Add the node to the end of List, please, press <4>\n";
        cout << "Delete the node from the beginning of the List, please, press, <5>\n";

        cin >> enterNumber;

        if(enterNumber == '0')
            {
               system("cls");
                exit(0);
            }

        if(enterNumber == '1')
            {
                system("cls");

                if (oneConnList.listIsEmpty())
                    cout << "List isn't full\n";
                else cout << "List is empty" << endl;

                system("pause");
            }

        if(enterNumber == '2')
            {
                system("cls");

                oneConnList.showList();

                system("pause");
            }

        if(enterNumber == '3')
            {
                system("cls");

                 oneConnList.deleteList();

                system("pause");
            }

        if(enterNumber == '4')
            {
                system("cls");

                data = enterData(data);
                oneConnList.pushToEnd(data);

                system("pause");
            }

        if(enterNumber == '5')
            {
                system("cls");

                oneConnList.popFromBegin();

                system("pause");
            }

    }

}
