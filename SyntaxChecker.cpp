//Jennifer Nguyen
//2320560
//jenguyen@chapman.edu
//CPSC 350-02
//Assignment 3: Syntax Checker

#include "SyntaxChecker.h"

SyntaxChecker::SyntaxChecker(){
    GenStack<char> *myStack = new GenStack<char>();
    latestLine = 0;
}

SyntaxChecker::~SyntaxChecker(){
    delete myStack;
}

bool SyntaxChecker::problem(int lineNum, char c){
    if(c == '(' || c == '{' || c == '['){
        myStack->push(c);
        latestLine = lineNum;
    }
    else if(c == ')' || c == '}' || c == ']'){
        if(myStack->isEmpty()){
            cout << "Line " << lineNum << ": you have an extra " << c << endl;
            return true;
        }
        else{
            char partner = myStack->peek();
            if(c == ')'){
                if(partner == '('){
                    myStack->pop();
                }
                else{
                    cout << "Line " << lineNum << ": expected different delimiter, got " << c << endl;
                    return true;
                }
            }
            else if(c == '}'){
                if(partner == '}'){
                    myStack->pop();
                }
                else{
                    cout << "Line " << lineNum << ": expected different delimiter, got " << c << endl;
                    return true;
                }
            }
            else{
                if(partner == ']'){
                    myStack->pop();
                }
                else{
                    cout << "Line " << lineNum << ": expected different delimiter, got " << c << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int SyntaxChecker::lastLine(){
    return latestLine;
}

bool SyntaxChecker::finalCheck(){
    if(myStack->isEmpty()){
        return true;
    }
    return false;
}
