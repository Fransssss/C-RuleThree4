// Title: Rule of Three
// Purpose: dynamically create block of memory, set value to object type of class, deallocate block of allocated memory
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make fun

#include <iostream>
#include "MyClass.h"

using std::cout;
using std::endl;

int TestCoyConstructor(MyClass locOjb)                              // to test copy constructor
{
    int sqrt = 0;
    sqrt = locOjb.GetVal() * 2;
    return sqrt;
}

int main()
{
    cout << endl;
    MyClass fClass;                                                 // call default constructor
    MyClass sClass;
    MyClass tClass;
    int sqrtVal = 0;                                                // later work with copy constructor
    cout << endl;
    cout << "// Default Constructor" << endl;
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "2ne object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;
    // copy constructor
    cout << "// Copy Constructor" << endl;
    fClass.SetVal(10);
    sqrtVal = TestCoyConstructor(fClass);
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "1st object of class - sqrt^2 val: " << fClass.GetVal() << endl;
    cout << endl;
    //copy Assignment Operator=
    cout << "//copy Assignment Operator=" << endl;
    sClass.SetVal(20);
    tClass = sClass;                                              // call copy assignment operator=
    cout << "2ne object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;
    sClass.SetVal(40);                                         // here to see that chainging the value won't affect the value of other' object
    cout << "2ne object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;

    cout << endl;
    cout << "// Updated Value of three objects of class" << endl;
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "2ne object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
  
    cout << endl;
  return 0;
}
