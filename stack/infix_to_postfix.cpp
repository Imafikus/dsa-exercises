#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool is_operator(char c)
{
    bool check = false;

    if(c == '*') check = true;
    if(c == '+') check = true;
    if(c == '/') check = true;
    if(c == '-') check = true;

    return check;
}

int main()
{
    string infix;
    cin >> infix;

    stack<char> operators;

    string postfix = "";
    
    for(char c : infix)
    {
        if(isdigit(c))
            postfix += c;
        
        if(is_operator(c))
            operators.push(c);
        
        if(c == ')')
        {
            postfix += operators.top();
            operators.pop();
        }
    }

    cout << "Postfix expression is: " << postfix << endl;
}