#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> reverse_order;
    string entry;


    while(cin >> entry)
        reverse_order.push(entry);

    while(!reverse_order.empty())
    {
        cout << reverse_order.top() << endl;
        reverse_order.pop();
    }
    return 0;
}
