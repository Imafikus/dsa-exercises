/* Find all segments which are >= 2 and where all numbers inside the segment
are < that members on the edges*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    vector<int> vals = {8, 4, 6, 3, 7, 2, 5};
    
    stack<int> s;

    int number_of_segments = 0;

    for(int i = 0; i < vals.size(); i++)
    {
        //as long as there are elements on stack which are < that s, we know that we have segments
        while(!s.empty() && s.top() < vals[i])
        {
            number_of_segments++;
            s.pop();
        }
        //this means that we have one final segment we haven't covered
        //if stack is empty, that means that we had situation similar to 4 5 7, and we were inputing
        //for example 8, what means that our whole stack is cleared
        //stack is cleared because we know that we cannot have bigger that 4 8, because 8 
        // is not going to satisfy the rule no matter what we do. 
        if(!s.empty())
            number_of_segments++;

        s.push(vals[i]);
    }
    cout << "Number of segments is: " << number_of_segments << endl;

}
