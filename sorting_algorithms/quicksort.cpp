#include<iostream>

using namespace std;

void swap(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}

int partition(int arr[],int left,int right)
{
    int pivot = arr[right]; // suppose pivot is right side first  
    int i = left-1; 

    for (int j=left;j<=right-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[right]);
    return i+1;
}
void quicksort(int arr[],int left,int right)
{
    if(left<right) // if it is not used, stack overflow
    {
        int p=partition(arr,left,right);

        quicksort(arr,left,p-1);
        quicksort(arr,p+1,right); // not p but p+1
    }
    

}


int main()
{

    int arr[5]={5,3,6,1,9};
    
    quicksort(arr,0,4);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}