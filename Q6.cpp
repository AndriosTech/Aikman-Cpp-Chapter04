#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int i,odd,even;
    odd=0;
    even=0;
    for(i=0; i<5; i++)
    {
        cout<<"Enter values in array"<<endl;
        cin>>a[i];
    }
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
            odd+=1;
        }
        else
        {
            even+=1;
        }
    }
    cout<<"Total Odd numbers are:"<<odd<<endl;
    cout<<"Total Even numbers are:"<<even<<endl;
}