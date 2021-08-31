#include<iostream>
#include<queue>
#include<vector>

using namespace std;

queue<int> wait;

vector<int> a[8];

bool v[8]={0,};

void bfs(int i)
{
    wait.push(i);
    v[i]=true;

    while(!wait.empty())
    {
        int x=wait.front();

        for (int j = 0; j < a[x].size(); j++)
        {
            if(!v[a[x][j]])
            {
                v[a[x][j]]=true;
                wait.push(a[x][j]);
            }
        }

        wait.pop();

        cout<<x<<" ";
        
    }
    
}

int main()
{

    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    bfs(1);

}