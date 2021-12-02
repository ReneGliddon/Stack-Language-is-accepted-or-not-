#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;


template <class Type>
class stackType
{
    public:
        void initializeStack();
        bool isEmptyStack() const;
        bool isFullStack() const;
        void push(const Type& newItem);
        Type top() const;
        void pop();
     private:
        int maxStackSize; //variable to store the maximum stack size
        int stackTop; //variable to point to the top of the stack
        Type *list; //pointer to the array that holds the stack elements
};

template <class Type>
void stackType<Type>::initializeStack()
{
    stackTop = 0;
}//end initializeStack

template <class Type>
bool stackType<Type>::isEmptyStack() const
{
    return(stackTop == 0);
}//end isEmptyStack

template <class Type>
bool stackType<Type>::isFullStack() const
{
    return(stackTop==maxStackSize);
}

template <class Type>
void stackType<Type>::push(const Type& newItem)
{
    if(!isFullStack())
    {
        list[stackTop]= newItem;
        stackTop++;
    }
    else
        cout<<"Cannot add to a full stack."<<endl;
}//end ppush

template <class Type>
Type stackType<Type>::top() const
{
    assert(stackTop!=0);
    return list[stackTop-1];
}//end top

template <class Type>
void stackType<Type>::pop()
{
    if(stackTop!=0)
    {
        stackTop--;
    }
    else
        cout<<"Cannot remove from an empty stack."<<endl;
}//end pop

#endif // MYSTACK_H
