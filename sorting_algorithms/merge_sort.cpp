#include<iostream>

using namespace std;

int number=8;
int sorted[8];//sorted array should be global variable

void merge(int a[],int start,int middle,int end)
{
    
    int i=start;
    int j=middle+1;
    int k= start;//for "sorted" array

    //ancending order

    while(i<=middle && j<=end)
    {
        if(a[i]<=a[j])
        {
            sorted[k]=a[i];
            i++;
        }
        else
        {
            sorted[k]=a[j];
            j++;
        }

        k++;
    }

    // rested data should be inserted in a[]

    if(i>middle)
    {
        for (int t = j ; t <= end; t++)
        {
            sorted[k]=a[t];
            k++;
        }
        
    }
    else
    {
        for (int t = i ; t <= middle; t++)
        {
            sorted[k]=a[t];
            k++;
        }
    }

    // for (int t = start; t < end; t++)
    // {
    //     cout<<sorted[t]<<" ";
    // }
    // cout<<"\n";
    

    // sorted a[] inserted in "sorted"
    for(int t=start;t<=end;t++)
    {
        a[t]=sorted[t];
        
    }

    
}

void mergesort(int a[],int start,int end)
{
    //size is bigger than 1

    if(start<end)
    {
        int middle=(start+end)/2;
        mergesort(a,start,middle);
        mergesort(a,middle+1,end);
        merge(a,start,middle,end);
    }
}

int main()
{
    int array[8]={7,6,2,5,3,4,3,1};

    mergesort(array,0,7);

    for (int i = 0; i < 8; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
