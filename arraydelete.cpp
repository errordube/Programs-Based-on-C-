#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[5],num,pos;
    cout<<"Enter Data in array: ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Stored data in array: ";
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<"\n Enter position of Element to delete: ";
    cin>>pos;
    if(pos>5)
    {
        cout<<"Error ";
    }
    else{
        pos--;
        for(i=pos;i<=4;i++)
        {
            a[i]=a[i+1];
        }
        cout<<"\n New Data in Array ";
        for(i=0;i<4;i++)
        {
            cout<<a[i];
        }
    }

}
