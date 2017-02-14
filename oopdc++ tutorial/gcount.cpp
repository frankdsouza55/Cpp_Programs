//unformatted i/o using read, write and gcount func
#include<iostream>
using namespace std;
int main()
{
    char b1[20];
    cout<<"\nEnter  a sentense : ";
    cin.read(b1,5);
    cout.write(b1,cin.gcount());
    return 0;
}
