#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    vector<int> val = {1, 4, 2, 3, 3};

    vector<int> index(val.size());
    stack<int> s;

    for(int i = 0; i < val.size(); i++)
    {
        while(!s.empty() && val[i] > val[s.top()])
        {
            index[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        index[s.top()] = val.size();
        s.pop();
    }
    for(int i : index)
        cout << i << " ";
    cout << endl;
}
