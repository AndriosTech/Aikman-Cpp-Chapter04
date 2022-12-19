#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];
    int i,c,r;
    i=0;

    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            cout<<"Enter values in a table"<<endl;
            cin>>arr[r][c];
        }
    }
    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            if(arr[r][c]%2!=0)
            {
                i+=1;
            }
        }
    }
    cout<<"total number of odd values entered is = "<<i<<endl;
}