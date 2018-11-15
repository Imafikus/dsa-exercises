#include <iostream>
#include <functional>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> q;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        q.push(a);
    }

    cout << "Sortiranje" << endl;

    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;
    
}