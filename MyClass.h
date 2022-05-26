// Declaration of MyClass

#ifndef C_RULETHREE4_MYCLASS_H
#define C_RULETHREE4_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();                                              // default constructor
    MyClass(const MyClass& oriObj);                         // copy constructor
    MyClass& operator=(const MyClass& oriObj);              // copy assignment operator=
    void SetVal(const int& v);
    int GetVal()const;
    ~MyClass();                                             // destructor
};


#endif //C_RULETHREE4_MYCLASS_H
