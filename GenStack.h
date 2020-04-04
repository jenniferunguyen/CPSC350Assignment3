#include <iostream>
using namespace std;

template<typename T>
class GenStack{

public:
    GenStack();
    GenStack(int maxSize);
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
