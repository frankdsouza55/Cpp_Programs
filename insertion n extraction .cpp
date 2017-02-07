#include<iostream>
#include<iomanip>
using namespace std;
class phn_num
{
    friend ostream &operator <<(ostream&, const phn_num&);
    friend istream &operator >>(istream&, phn_num&);
    char areacode[4],exchange[4],line[5];
};
ostream & operator <<(ostream &output,const phn_num &num)
{
    output<<"("<<num.areacode<<") "<<num.exchange<<"-"<<num.line;
    return output;
}
istream & operator >>(istream &input,phn_num &num)
{
    input.ignore();
    input>>setw(4)>>num.areacode;
    input.ignore(2);
    input>>setw(4)>>num.exchange;
    input.ignore();
    input>>setw(5)>>num.line;
    return input;
}
int main()
{
    phn_num p;
    cout<<"\nEnter phone number in the form (123) 456-7890\n";
    cin>>p;
    cout<<p;
    return 0;
}
