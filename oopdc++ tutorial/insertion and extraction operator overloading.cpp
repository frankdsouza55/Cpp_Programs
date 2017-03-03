#include<iostream>
using namespace std;
class abc
{
    public: int a,b;
            friend ostream& operator <<(ostream&, abc &);
            friend istream& operator >>(istream&, abc &);
};
ostream& operator <<(ostream & output, abc &obj)
{
    output<<obj.a<<"  "<<obj.b;
}
istream& operator >>(istream & input, abc &obj)
{
    input>>obj.a>>obj.b;
}
int main()
{
    abc a;
    cout<<"\nEnter 2 numbers : ";
    cin>>a;
    cout<<a;
    return 0;
}
