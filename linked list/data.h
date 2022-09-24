#include "list.h"
#include <stdio.h>

struct Node
{
    ElementType Element;
    Position    Next;
};

// Return True if L is empty
int IsLast(Position P, List L)
{
    return P -> Next == NULL;
}