#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] , b[9];
    int i,j,k,temp;
    k=0;
    temp;

    cout<<"Enter the elements of an array"<<endl;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The entered elements are:"<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            b[k++] = arr[i][j];
        }
    }

    cout<<"1D matrix is:"<<endl;

    for(k=0; k<9; k++)
    {
        cout<<b[k]<<endl;
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<(8-i); j++)
        {
            if(b[j]>b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    cout<<"Sorted array is:"<<endl;

    for(i=0; i<9; i++)
    {
        cout<<b[i];
    }

    k=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr[i][j] = b[k];
            k++;
        }
    }

    cout<<"2D sorted array is:"<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}