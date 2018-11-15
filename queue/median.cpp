#include <functional>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, less<int> >left_side;
    priority_queue<int, vector<int>, greater<int> >right_side;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(left_side.size() == right_side.size())
        {
            left_side.push(num);
            cout << "##left max num is: " << left_side.top() << endl;

        }
        else
        {
            
            if(!left_side.empty())        
                cout << "left max num is: " << left_side.top() << endl;

            left_side.push(num);
            int left_max_num = left_side.top();
            left_side.pop();
            
            right_side.push(left_max_num);

            if(!right_side.empty())
                cout << "right max num is: " << right_side.top() << endl;

        }

        double median;
        if(left_side.size() != right_side.size())
            median = left_side.top();
        else
            median = (left_side.top() + right_side.top()) / 2.0;
        
        cout << "Current median is " << median << endl;
        
    }
}