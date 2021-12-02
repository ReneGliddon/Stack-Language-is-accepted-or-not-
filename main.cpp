#include <iostream>
#include <stack>
#include <string>
using namespace std;

// program to test if a word belongs to the language of n+a a's, followed by n b's using a stack

//function header
bool isInLanguageL (string w);

int main()
{
    //string to hold the word to be tested
    string word;

    //request a word to be tested
    cout<<"Enter a word and this program will check if it belongs in the language of n+1 a's, followed by n b's."<<endl;

    //receive the word to be tested
    cin>>word;

    //call isInLanguageL, if it returns true, then the word is in the language
    if(isInLanguageL(word))
    {
        cout<<"The word is in the language."<<endl;
    }
    //if it returns false, then it is not in the language
    else
        cout<<"The word is not in the language."<<endl;


    return 0; //Line 21
}

bool isInLanguageL(string w)
{
    //initialize a new stack, myStack
    stack<char> myStack;

    //store the string as chars into the stack
     string str = w;
     char c[str.size() + 1];
     str.copy(c, str.size() + 1);
     for(int i = 0; i <str.size();i++)
         myStack.push(c[i]);

    //if the stack has an even number of chars, the word is not in the language
    if((myStack.size()%2)==0)
    {
        return false;
    }

    //declare halfsize, a variable to hold half the size of the stack
    int halfsize = myStack.size()/2;

    //check that half the stack is comprised of b's
    for(int i = 0; i < halfsize; i++)
    {
        if (myStack.top() == 'b')
            myStack.pop();
        else
            //if it is comprised of anything else, then the word is not in the language
            return false;
    }
    //check that the second half plus one more char, is comprised of a's
    for(int i = 0; i <halfsize+1; i++)
    {
        if(myStack.top()=='a')
            myStack.pop();
        //if it is comprised of anything else, then the word is not in the language
        else
            return false;
    }
    //if we made it through the checks without returning false, then the word is in the language
        return true;
}//end isInLanguageL
