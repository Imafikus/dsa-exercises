#include <iostream>
#include <queue>
#include <functional>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    priority_queue<int, vector<int>, less<int>> min_k;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(min_k.size() < k)
            min_k.push(a);
        else
        {
            min_k.push(a);
            min_k.pop();
        }
    }

    cout << "K min numbers are:" << endl;

    while(!min_k.empty())
    {
        cout << min_k.top() << " ";
        min_k.pop();
    }
}