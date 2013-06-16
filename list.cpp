#include "list.h"

using namespace std;

list::list(string n,int t):name(n),ticket(t), next(NULL), prev(NULL)
{}

ostream& operator<<(ostream& os, const list& l)
{
    return os << "Name: " << l.name << "\tTicket Number: " << l.ticket << "\n";
}
