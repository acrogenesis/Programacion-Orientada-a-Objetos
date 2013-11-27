#include <iostream>

class IntList {
  public:
    IntList();                         // constructor; initialize the list to be empty
    void AddToEnd(int k);              // add k to the end of the list
    void Print(ostream &output) const; // print the list to output

  private:
    static const int SIZE = 10;      // initial size of the array
    int *Items;                      // Items will point to the dynamically allocated array
    int numItems;                    // number of items currently in the list
    int arraySize;                   // the current size of the array
};