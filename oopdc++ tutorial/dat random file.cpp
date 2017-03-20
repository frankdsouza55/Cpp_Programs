#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream oc("file_r.dat",ios::out|ios::binary);
    int num;
    cout<<"\nEnter integer values to enter in file\n";
    cin>>num;
    oc.write(reinterpret_cast<char *>(&num),sizeof(int));
    oc.close();
    ifstream in("file_r.dat",ios::in|ios::binary);
    cout<<"\nEntered data was : ";
    in.read(reinterpret_cast<char*>(&num),sizeof(int));
    cout<<num;
    in.close();
    return 0;
}
