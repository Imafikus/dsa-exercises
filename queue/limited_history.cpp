#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int max_pages = 4;
    string site;

    deque<string> history;

    int max_counter = 0;
    while(getline(cin, site))
    {
        if(site != "back")
        {
            if(history.size() != max_pages)
            {
                history.push_back(site);
            }
            else
            {
                history.pop_front();
                history.push_back(site);
            }
        }
        else
        {
            if(!history.empty())
            {   
                history.pop_back();
                cout << history.back() << endl;;
            }
            else
                cout << "-" << endl;
        }
    }
}
