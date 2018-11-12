#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool open_parentheses(char c)
{
    bool check = false;

    if (c == '{') check = true;
    if (c == '(') check = true;
    if (c == '[') check = true;

    return check;
}

bool closing_parentheses(char c)
{
    bool check = false;

    if (c == '}') check = true;
    if (c == ')') check = true;
    if (c == ']') check = true;

    return check;
}


bool is_closing(char par1, char par2)
{
    bool check = false;

    if((par1 == '{') && par2 == '}') check = true;
    if((par1 == '[') && par2 == ']') check = true;
    if((par1 == '(') && par2 == ')') check = true;

    return check;

}


int main()
{
    stack<char> open_par;
    
    string expr;
    cin >> expr;

    for(char c : expr)
    {
        if (open_parentheses(c))
            open_par.push(c);
        
        if (closing_parentheses(c))
        {
            if (is_closing(open_par.top(), c))
                open_par.pop();
        }
    }
    if(open_par.empty())
        cout << "Good expr" << endl;
    else
        cout << "Bad expr" << endl;
}