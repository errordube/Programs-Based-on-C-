#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],value=0,pos; //array, value is which is to be inserted and pos is position at which position the value to be inserted
    for(int i=0; i<5; i++)
    {
        cin>>arr[i]; //input the elements
    }
    cout<<"Enter value to be inserted: "<<endl;
    cin>>value;
    cout<<"Enter position: "<<endl;
    cin>>pos;
    for(int i=0; i<pos;i++)
    {
        arr[pos] = value;
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
