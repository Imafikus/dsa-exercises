#include <iostream>
#include <queue>


using namespace std;

int main()
{
    int n = 7;
    int k = 3;

    queue<int> segment;

    int cur_max = 0;
    for(int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        segment.push(num);
        cur_max += num;
    }

    for(int i = k; i < n; i++)
    {
        int new_num;
        cin >> new_num;

        int cur_segment = cur_max - segment.front() + new_num;
        if (cur_segment > cur_max)
            cur_max = cur_segment;
        segment.pop();
        segment.push(new_num);
    }

    cout << "Maximum is: " << cur_max << endl;
}