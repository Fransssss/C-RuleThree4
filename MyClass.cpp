// Implementation of MyClass

#include "MyClass.h"
#include <iostream>
using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor called]" << endl;
    _value = new int;                         // dynamically create space/memory before assign a value
    *_value = 0;                              // set default value to zero
}

MyClass::MyClass(const MyClass &oriObj)
{
    cout << "[Copy Constructor called]" << endl;
    _value = new int;                        // dynamically create space/memory before assign a value
    *_value = *(oriObj._value);              // set value to the value of the object type class in parameter
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator=]" << endl;
            if(this != &oriObj)               // make sure the value from data member the orginial  value (in parameter) are different
            {
                delete _value;                // delete old value and its pointer/address
                _value = new int;             // dynamically create space/memory before assign a value
                *_value = *(oriObj._value);   // set value to the value of the object type class in parameter
            }
            return *this;
        }

void MyClass::SetVal(const int &v)
{
    cout << "[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}

MyClass::~MyClass()
{
    cout << "[Destructor called]" << endl;
    delete _value;                          // clean allocared memory of the value and its pointer
}