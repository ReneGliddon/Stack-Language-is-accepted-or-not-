#include <iostream>
#include "myStack.h"
#include <string>
using namespace std;
bool isInLanguageL(string w)
{
    cout<<"here";
    stackType<char> s;
    int index = 0;
   // bool inLang;

    if(w[index]=='a')
    {
        index++;
        cout<<endl<<"a";
    }


    while(w[index]=='a')
    {
        s.push('X');
        index++;
        cout<<endl<<"more a";
    }

    while(w[index]=='b')
    {
       // cout<<endl<<"b";
        if (!s.isEmptyStack())
        {
            if(s.top()=='X')
            {
                s.pop();
            }
        }
        else
        {

            return false;
        }
        index++;
    }

    cout<<"end";
    return(index==w.size()&&s.isEmptyStack());

}


int main()
{

 string a="aaaabbbbb";
 string b="aaababbbbb";
 string c="aaaabbbbba";

 string s1, s2, s3;
 bool one = isInLanguageL(a);
 cout<<one;
 if(one)
    s1 = " is ACCEPTED";
 else
    s1= " is REJECTED";

bool two = isInLanguageL(b);
 if(two)
    s2 =" is ACCEPTED";
 else
    s2 =" is REJECTED";

  bool three = isInLanguageL(c);
 if(three)
    s3 =" is ACCEPTED";
 else
    s3 =" is REJECTED";

 cout << a + s1 <<endl;
 cout << b + s2 <<endl;
 cout << c + s3 <<endl;
 return 0;
}
