#include<iostream>
using namespace std;

int main() {

   char str[20];

   cout<<"Enter string?"<<endl;
   cin>>str;

   int count = 0;

   while (str[count] != '\0')
   {
     count++;
   }

   cout<<"The string is "<<str<<endl;
   cout <<"The length of the string is "<<count<<endl;
   
   return 0;
}