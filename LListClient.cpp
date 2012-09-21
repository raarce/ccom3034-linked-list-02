#include "Llist.h"
#include <iostream>
using namespace std;
int main() {
    LList L;

    srand(77);
    unsigned int r, e, pos;

    r = rand() % 12;
    cout << "Inserting " << r << " elements to the list...." << endl;
    for (int i=0; i<r; i++) {
        e = rand()%100;
        cout << "Inserting " << e << " at position 0" << endl;
        L.insert(e,0);
    }
    cout << "Contents of the list: " << L << endl << endl;

    r = rand() % r;
    cout << "Now erasing elements from random positions ...." << endl;
    for (int i=0; i<r; i++) {
        pos = rand()% L.getSize();
        cout << "Erasing from position " << pos << endl;
        L.erase(pos);
        cout << "Contents of the list: " << L << endl;
    }

    cout << endl;


    /***** Uncomment after you have implemented the push function *

    e = rand()%100;
    cout << "Now lets push a " << e <<" into the list..." << endl;
    cout << "The list is " << L.push(e) << " long " << endl;
    cout << "And contains: " << L << endl << endl;

    ************************************************************/


    /***** Uncomment after you have implemented the shift function *

    cout << "I have removed the element from the front of the list: " 
         << L.shift() << endl;
    cout << "List now contains: " << L << endl << endl;

    ************************************************************/



    /***** Uncomment after you have implemented the pop function *

    cout << "Removing element from the front of the list using pop() " << endl; 
    cout << "The element is: " << L.pop() << endl;
    cout << "List now contains: " << L << endl << endl;

    pos = rand() % L.getSize();
    cout << "Removing element from pos " <<  pos 
         << " of the list using pop(" << pos << ")" << endl; 
    cout << "The element is: " << L.pop(pos) << endl;
    cout << "List now contains: " << L << endl << endl;

    ************************************************************/


    /***** Uncomment after you have implemented the splice function *
    
    r = rand() % (L.getSize()/2);
    r = 9;
    pos = rand() % (L.getSize()/2);
    cout << "Using the splice function to remove " << r 
         << " elements starting at position " << pos << endl; 
    cout << "The removed elements are: " << L.splice(pos, r) << endl;
    cout << "After splice, the List:" << L << endl << endl;

    ************************************************************/

    /***** Uncomment after you have implemented the join function

    cout << "The following is a string of all elements, using join:" << endl;
    cout << L.join("-") << endl << endl;
    
    ************************************************************/

    


    cout << endl;


    
    
}
