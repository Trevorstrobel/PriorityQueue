// Program:    Priority Queue                                                                                                           
// Author:     Trevor Strobel                                                                                                               
// File:       testpq.cpp                                                                                                                      
// Tab stops:  2                                                                                                                   

// **Say what this program does here.  (replace this comment)**                                                                         

#include "pqueue.h"
#include <cstdio>
using namespace std;

typedef const char* CSTRING;

void printString(CSTRING s)
{
  printf("%s", s);
}

void printDouble(double x)
{
  printf("%lf", x);
}




int main()
{
  ItemType itemOut;
  PriorityType priorityOut;

  PriorityQueue queue;
  insert(queue, "string", 10.0);
  insert(queue, "is this here", 12.0);
  insert(queue, "butts", 5.0);
  insert(queue, "anus", 12.3);
  printPriorityQueue(queue, printString, printDouble);

  remove(queue, itemOut, priorityOut);
  printPriorityQueue(queue, printString, printDouble);
  return 0;
}
