//integral stream base
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter a number : ";
    cin>>n;
    cout<<dec<<n<<" in octal is : "<<oct<<n<<endl;
    cout<<dec<<n<<" in hex is : "<<hex<<n<<endl;
    cout<<"Using stebase manipulator : "<<setbase(10)<<n;
    return 0;
}
