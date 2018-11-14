/* find the closest bigger number which came before the current number*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void print_stack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    vector<int> nums = {3, 7, 4, 2, 6, 5};
    stack<int> heights;

    vector<int> sol;

    for(int number : nums)
    {
        while(!heights.empty() && heights.top() <= number)
            heights.pop();

        if(heights.empty())
            cout << "- ";
        else
            cout << heights.top() << " ";

        heights.push(number);
    }

}