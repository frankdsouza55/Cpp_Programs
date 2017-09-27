#include<iostream>
using namespace std;
#define size 5
int buffer[size],n=0,p=0;
void produce(int a)
{
        n++;
        buffer[p++]=a;
        cout<<"\tItem added to the buffer successfully !";
}
void consume()
{
    if(n==0)
    {
        cout<<"\tBUFFER IS EMPTY !";
        return;
    }
    else
    {
        cout<<"\tConsumed item is: "<<buffer[0];
        n--;
        for(int i=0;i<n;i++)
            buffer[i]=buffer[i+1];
        p--;
    }
}
void display()
{
    cout<<"\nThe buffer is: ";
    if(n==0)
        cout<<" ---EMPTY---";
    for(int i=0;i<n;i++)
        cout<<buffer[i]<<"  ";
}
int main()
{
    int x,c;
    cout<<"Size of buffer is "<<size;
    do
    {
        cout<<"\n\n1: Produce\n2: Consume\n0: Exit\nChoice: ";
        cin>>c;
        switch(c)
        {
            case 1: if(n==size)
                    {
                        cout<<"\tBUFFER IS FULL !";
                        break;
                    }
                    cout<<"\nEnter integer data: ";
                    cin>>x;
                    produce(x);
                    display();
                    break;
            case 2: consume();
                    display();
                    break;
            case 0: return 0;
            default:cout<<"\n\t INVALID INPUT ! ";
        }
    }while(c);
}
