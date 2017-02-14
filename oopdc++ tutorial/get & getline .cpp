#include<iostream>
using namespace std;
int main()
{
    const int size=100;
    char b1[size];
    cout<<"\nEnter  a sentense : ";
    cin>>b1;
    cout<<"\nOutput with cin : "<<b1;
    cin.get(b1,size);
    cout<<"\nOutput with cin.get() : "<<b1;
    return 0;
}
