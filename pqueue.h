// Program:    Priority Queue                                                                                                            
// Author:     Trevor Strobel                                                                                                           
// File:       pqueue.h                                                                                                                 
// Tab stops:  2                                                                                                                        



#include <cstdio>
//Type Definitions                                                                                                                      
typedef const char* ItemType;
typedef double      PriorityType;
typedef void        (*ItemPrinter)(ItemType);
typedef void        (*PriorityPrinter)(PriorityType);

// forward declaration for type PQCell as described in                                                                                  
// pqueue.cpp                                                                                                                           

struct PQCell;

// An object of type PriorityQueue represents a priority                                                                                
// queue. A priority queue is a linked list in which each                                                                               
// element, along with an item and a pointer to the next cell,                                                                          
// is given a priority. In this case, the cells will be arranged                                                                        
// in a nondecreasing order by priority.                                                                                                
//                                                                                                                                      
// The fields are:                                                                                                                      
//                                                                                                                                      
// head           A pointer to the first PQCell in the priority                                                                         
//                queue.                                                                                                                

struct PriorityQueue
{
  PQCell* head;

  PriorityQueue()
  {
    head = NULL;
  }
};

//Public functions                                                                                                                      

bool isEmpty (const PriorityQueue& q);
void insert  (PriorityQueue& q, ItemType x, PriorityType p);
void remove  (PriorityQueue& q, ItemType& x, PriorityType& p);

// for debugging                                                                                                                        

void printPriorityQueue(const PriorityQueue& q, ItemPrinter pi,
                        PriorityPrinter pp);

