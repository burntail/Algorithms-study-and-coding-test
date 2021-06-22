#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}


int main()
{
    vector<int> v;

    int n;

    for (int i = 0; i < 5; i++)
    {
        cin>>n;

        v.push_back(n);
    }

    sort(v.begin(),v.end(),compare);

    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<"\n";

    
}

