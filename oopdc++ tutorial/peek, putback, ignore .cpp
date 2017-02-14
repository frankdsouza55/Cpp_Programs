
#include<iostream>
using namespace std;
int main()
{
    char ch,peekch;
    cout<<"\nEnter  a sentense : ";
    cin.get(ch);
    cout<<"\nOutput after 1st cin.get() : "<<ch;
    cin.get(ch);
    cout<<"\nOutput after 2nd cin.get() : "<<ch;
    cin.putback(ch);
    cin.get(ch);
    cout<<"\nOutput after 3rd cin.get() : "<<ch;
    peekch=cin.peek();
    cin.get(ch);
    cout<<"\nOutput after 4th cin.get() : "<<ch;
    cout<<peekch;
    return 0;
}
