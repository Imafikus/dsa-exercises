#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int do_operation(stack<int> &calc, char c)
{
    int op1 = calc.top();
    calc.pop();

    int op2 = calc.top();
    calc.pop();

    if(c == '+') return op1 + op2;
    if(c == '-') return op1 - op2;
    if(c == '/') return op1 / op2;
    if(c == '*') return op1 * op2;

    
}


int main()
{
    stack<int> calc;

    string expr;
    cin >> expr;

    for(char c : expr)
    {
        if(isdigit(c))
            calc.push(c - '0');
        else
            calc.push(do_operation(calc, c));
        
        cout << "Result: " << calc.top() << endl;
    }
}