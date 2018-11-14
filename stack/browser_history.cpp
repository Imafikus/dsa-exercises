#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> history;

    string entry;
    while(getline(cin, entry))
    {
        if(entry == "back")
        {
            if (history.empty())
                cout << "-" << endl;
            else
            {
                cout << history.top() << endl;
                history.pop();
            }
        }      
        else
            history.push(entry);
    }
}