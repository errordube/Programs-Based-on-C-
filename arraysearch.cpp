#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,num,n,count=0,pos; // i is for loop, num is element to be searched, n is size of the array, count is the variable, pos is position
    cout<<"\nEnter array size: ";
    cin>>n;
    cout<<"\nEnter Array Elements:  "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"\nEnter Element to be searched: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count=1;
            pos=i+1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"\nElement not found";
    }
    else
    {
        cout<<"\n Element \n"<<num<<"\n Found at position \n"<<pos;
    }
    return 0;

}
