//
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter n : ";
    cin>>n;
    cout<<"\nNUMBER\tSQUARE\tSQUARE ROOT\n";
    for(int i=1;i<=n;i++)
    {
        cout<<left<<setfill('*')<<setw(10);
        cout<<i<<left<<setfill('*')<<setw(10);
        cout<<i*i;
        cout<<left<<setfill('*')<<sqrt(i);
        cout<<endl;
    }
    return 0;
}
