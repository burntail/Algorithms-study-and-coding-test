#include<iostream>
#include<vector>

using namespace std;

vector<int> a[8];
bool visit[8]={0,};
 


void dfs(int i)
{
    if(visit[i])
    {
        return;
    }  
    else
    {
        visit[i]=true;
        
        if(a[i].empty())
        {
            return;
        }
        else
        {
            cout<<i<<" ";

            for (int j = 0; j < a[i].size(); j++)
            {
                int y=a[i][j];

                dfs(y);
            }
            
        }
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

    dfs(1);

}