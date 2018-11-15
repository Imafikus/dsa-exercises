#include <vector>
#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int main()
{
    int k = 2;
    vector<int> vals = {3, 8, 6, 5, 6, 3};
    deque<int> max;
    queue<int> segment;

    for(int i = 0; i < vals.size(); i++)
    {
        if(i <= k)
        {
            segment.push(vals[i]);

        }
        else
        {
            cout << "Max value of segment is: " << max.front() << endl;

            if(max.front() == segment.front())
            {
                max.pop_front();
                segment.pop();
                segment.push(vals[i]);
            }
            else
                segment.pop();
        }
        while(!max.empty() && max.back() < vals[i])
            max.pop_back();
        max.push_back(vals[i]);
    }

}