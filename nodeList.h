#ifndef NODELIST_H
#define NODELIST_H

#include "list.h"

using namespace std;

class nodeList
{
    public:
    nodeList();
    void addToHead(list* newOne);
    void deleteNode(list* toDelete);
    list* FindNodeByTicket(int ticketNumber);
    void printList();

    private:
    list* head;
    list* tail;
    int size;


};

#endif // NODELIST_H
