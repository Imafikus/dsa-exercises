#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void dfs(int v, vector<vector<int> > neighbors)
{ 
    vector<bool> visited(neighbors.size(), false);

    stack<int> all;

    all.push(v);
    while(!all.empty())
    {
        int cur_ver = all.top();
        cout << cur_ver << endl;
        all.pop();
        if(!visited[cur_ver])
        {
            visited[cur_ver] = true;
            for (int cv : neighbors[cur_ver])
            {
                if(!visited[cv])
                    all.push(cv);
            }
        }
    }

}

int main()
{
    vector<vector<int> > neighbors = {{1, 2}, {3, 4}, {5}, {}, {6, 7}, {8}, {}, {}, {}};
    dfs(0, neighbors);

}