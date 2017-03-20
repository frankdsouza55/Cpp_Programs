#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream oc("file.dat",ios::out|ios::binary);
    int num;
    cout<<"\nEnter integer values to enter in file\n";
    cin>>num;
    oc<<num;
    oc.close();
    return 0;
}
