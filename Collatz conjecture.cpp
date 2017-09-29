#include<iostream>
using namespace std;
int main()
{
    int steps=0;
    long int n,high=1;
    cout<<"\nEnter a positive number : ";
    cin>>n;
    do
    {
        if(n>high)
            high=n;
        steps++;
        cout<<"\n"<<steps<<"> \t"<<n;
        if(n%2==0)                          //n is even
            n=n/2;
        else
            n=3*n+1;                        //n is odd
    }while(n!=1);
    cout<<"\n\nTotal steps = "<<steps;
    cout<<"\nHighest number reached = "<<high<<endl;
    return 0;
}
