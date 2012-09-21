//
// Implementation of the LList class.
//


#include "Llist.h"


void LList::insert(ElementType val, int pos) {
    
    // Validate position
    if ( (pos < 0) || (pos > mySize) ) { 
        cerr << "Attempting insert at illegal position " << pos << endl;
        exit(1);
    }
    
    // create the new node to insert
    Node *n = new Node(val);
    
    if (pos == 0) { 
        // inserting at the first position
        n->next = first;
        first = n;
    } else {
        Node *curr = first;
        // move to the position
        for (int i=1; i<pos; i++) curr = curr->next;  
        n->next = curr->next;
        curr->next = n;
    }
    mySize++;    
}
    
void LList::erase(int pos) {

    // Validate position
    if ( (pos < 0) || (pos > mySize - 1) ) { 
        cerr << "Attempting delete at illegal position " << pos << endl;
        exit(1);
    }
    
    Node* tmp;
    if (pos == 0) { 
        // erasing the node at the first position
        tmp = first;
        first = first->next;
    } else {
        Node *curr = first;
        // move to the position before the node to be erased
        for (int i=1; i<pos; i++)   curr = curr->next;  
        tmp = curr->next;
        curr->next = curr->next->next;
    }
    delete tmp;

    mySize--; 
}
    
void LList::display(ostream &out) const {
    Node *curr = first;
    while (curr != NULL) {
        out << curr->data << " ";
        curr = curr->next;
    }
    //out << "\n";
}

const LList& LList::operator = (const LList& L) {
    
    //verify that left-list and right-list are NOT the same object! 
    if (this != &L) {
        // erase all elements from the left-side list     
        while(first != NULL) erase(0); 
        
        Node *ptr = L.first; 
        int i = 0; 
        while(ptr != NULL) { //traverse right obj
            insert(ptr->data,i); 
            ptr = ptr->next; i++;
        } 
    return *this;
    }
}


ostream & operator<< (ostream &out, const LList & L) {
    L.display(out);
    return out;
}

