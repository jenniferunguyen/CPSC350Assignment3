//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#ifndef SYNTAXCHECKER_H
#define SYNTAXCHECKER_H
#include "GenStack.h"

class SyntaxChecker{
public:
    SyntaxChecker();
    ~SyntaxChecker();

    bool problem(int lineNum, char c);
    int lastLine();
    bool finalCheck();

private:
    GenStack<char> *myStack;
    int latestLine = 0;
};

#endif
