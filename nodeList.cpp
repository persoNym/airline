#include "nodeList.h"

nodeList::nodeList():head(NULL),tail(NULL), size(0)
{
}


void nodeList::addToHead(list* newOne)
{
    if(head == NULL)
    {
        head = newOne;
        tail = newOne;
    }
    else
    {
        newOne->next = head;
        head->prev = newOne;
        head = newOne;
    }

    size++;
}

void nodeList::deleteNode(list* toDelete)
{
    // prevNode <-> toDelete <-> nextNode
    // we want prevNode's next to point to nextNode
    // and nextNode's prev to point to prevNode
    if (toDelete->prev != NULL)
    {
        toDelete->prev->next = toDelete->next;
    }
    if (toDelete->next != NULL)
    {
        toDelete->next->prev = toDelete->prev;
    }

    // We need to update our head and tail pointers
    if (head == toDelete)
    {
        head = toDelete->next;
    }
    if (tail == toDelete)
    {
        tail = toDelete->prev;
    }

    size--;

    delete(toDelete); // Can't remember the syntax for this
}


list* nodeList::FindNodeByTicket(int ticketNumber)
{
    // Loop backwards through the list to find a node with some ticket number

    list* foundNode = this->tail;
    while (foundNode != NULL)
    {
        if (foundNode->ticket == ticketNumber)
        {
            break;
        }
        foundNode = foundNode->prev;
    }
    return foundNode;
}

void nodeList::printList()
{
    // Get a pointer to the head of the list
    // Do this stuff for as long as that pointer isn't NULL:
    //    1. Print the ticket which the pointer points to
    //    2. Set the pointer to the next object

    list* node = this->head;
    while (node != NULL)  // while has a lowercase w
    {
       cout << node;
       cout << *node;
       node = node->next;
    }

}

