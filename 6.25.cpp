#include<iostream>
using namespace std;
int main()
{
    int tab,len,c;
    cout<<"Enter number of table: ";
    cin>>tab;
    cout<<"Enter length of table: ";
    cin>>len;
    c=len;

    for(int c=1; c<=len; c++)
        cout<<tab<<" * "<<c<<" = "<<tab*c<<endl;
    return 0;
}
