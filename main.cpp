#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <string>
#include "nodeList.h"
#include "list.h"

/*
Victoria C
Double Linked List Reservation Program
5/13/13
*/

using namespace std;

int randTicket(int low, int high);
void clear();

int main()
{
    srand((unsigned)time(NULL));
    nodeList* nl = new nodeList();

    while (true)
    {
        int choice;

        cout << "::AIRLINE RESERVATION SYSTEM::\n\n"
             << "1. Reserve a ticket\n"
             << "2. Cancel a ticket\n"
             << "3. Check a ticket\n"
             << "4. Display Passengers\n"
             << "5. EXIT\n"
             << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Reserving a ticket\n\n";
                cout << "Enter Name: ";
                string name;
                cin >> name;
                int tix = randTicket(0,5);
                list* newTicket = new list(name,tix);
                nl->addToHead(newTicket);
                cout << "Ticket reservation sucessful!\n";
                cout << "Your ticket information is the latest one\n";
                cout << "Please keep a copy for your records\n";
                nl->printList();
                cout << "\n";
                break;
            }
            case 2:
            {
                cout << "Canceling a ticket\n\n";
                cout << "Enter ticket number: ";
                int ticketToFind;
                cin >> ticketToFind;
              list* ticketToDelete = nl->FindNodeByTicket(ticketToFind);
              if (ticketToDelete != NULL)
              {
              nl->deleteNode(ticketToDelete);
              cout << "Ticket deletion sucessful";
              }
              else
              cout << "unable to locate ticket";
                break;
            }

            case 3:
            {
                cout << "Checking a ticket\n\n";
                int ticketToFind;
                cout << "enter ticket";
                cin >> ticketToFind;
                list* foundTicket = nl->FindNodeByTicket(ticketToFind);
                if (foundTicket != NULL)
                {
                    cout << *foundTicket;
                }
                else
                {
                    cout << "no ticket found";
                }
                break;
            }

            case 4:
            {
                cout << "Displaying Passengers\n\n";
                nl->printList();
                break;
            }

            case 5:
            {
                cout << "Now exiting program\n\n";
                clear();
                return 0;
                break;
            }

            default:
            {
                cout << "Invalid Input\n\n";
                return 0;
            }

        }
    }

    return 0;
}

int randTicket(int low, int high)
{//randomizes ticket
    int num1;
    int range=(high-low);
    int num = rand() * range / RAND_MAX + low ;
    return(num1);
}

void clear()
{ //free up clutter
    int a = 1;
    int b = 100;
    do
    {
        printf("\n");
        a++;
    }
    while( a < b );

                            cout << "\t\t\tThe sky is the limit\n\n";


                        cout << "\t\t     \\__________( )__________/\n";
                        cout << "\t\t             o'     `o           ";

}
