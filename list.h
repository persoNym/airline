#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>

using namespace std;

class list
{
    friend ostream& operator<<(ostream& os, const list& l);
    friend class airline;
    friend class nodeList;

    public:
    list(string name = "none",int ticket = 0);

    private:

    string name;
    int ticket;
    list* next;
    list* prev;
};


#endif // LIST_H
