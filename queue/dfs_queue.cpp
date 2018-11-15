#include <queue>
#include <iostream>
#include <vector>

using namespace std;

void dfs(int v, vector<vector<int> > negh)
{
    int negh_size = negh.size();

    queue<int> q;
    vector<bool> visited(negh_size, false);

    q.push(v);
    while(!q.empty())
    {
        //take the first node from the queue
        v = q.front();
        q.pop();

        if(!visited[v])
        {
            visited[v] = true;
            cout << v << endl;
        }
        for(int child : negh[v])
        {
            if(!visited[child])
                q.push(child);
        }
    }

}

int main()
{
    vector<vector<int> > negh = {{1, 2}, {3, 4}, {5}, {}, {6, 7}, {8}, {}, {}, {}};
    dfs(0, negh);
    return 0;

}