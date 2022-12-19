#include<iostream>
using namespace std;

int main()
{
    char array[20], delet;
    int i, size, pos;
    size = sizeof(array)/sizeof(array[0]);

    cout<<"Enter string"<<endl;
    cin>>array;

    cout<<"Enter character you want to delete"<<endl;
    cin>>delet;

    cout<<"Enter index"<<endl;
    cin>>pos;

    cout<<"The array string before deletion is : "<<array<<endl;

    for(i=pos; i<size; i++)
    {
        array[i] = array[i+1];
        size = size-1;

    }

    cout<<"The array string after the deletion of character is = "<<array<<endl;

    

}