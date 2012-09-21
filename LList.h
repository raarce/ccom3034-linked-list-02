//
// Declarations of the Node and LList classes.
//


#ifndef LLIST_H
#define LLIST_H

#include <iostream>

using namespace std;

typedef int ElementType;


class Node {
public:
    ElementType data;
    Node* next;
    // Constructor, can call with 0, 1, or 2 params.
    Node(int d = 0, Node* n = NULL) : data(d), next(n)  {}
};

class LList {
private:
    Node* first;
    int   mySize;
public:
    // Constructor.
    LList(): first(NULL), mySize(0) {}
    
    int getSize() const {return mySize;}

    void insert(ElementType val, int pos);
    
    // erase the node at position pos.
    void erase(int pos); 

    const LList& operator = (const LList& L);
    
    void display(ostream &out) const;

};

ostream & operator<< (ostream &, const LList &);

#endif
