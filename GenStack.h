//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#ifndef GENSTACK_H
#define GENSTACK_H
#include <iostream>
using namespace std;

template<class T>
class GenStack{

public:
    GenStack<T>();
    GenStack<T>(int maxSize);
    ~GenStack();

    void push(T data);
    T pop();

    T peek();
    bool isEmpty();
    bool isFull();

private:
    int top = -1;
    int mSize = 0;

    T* myArray;
    void clearArray();

};

#endif
