#include<iostream>
using namespace std;
int i,j,p,r;
int alloc[10][10]={0},Max[10][10]={0},avail[10]={0},need[10][10]={0};
int safe[10],finish[10]={0},work[10],s=0;
bool flag=false;
void check()
{
    bool temp=true;
    for(j=0;j<p;j++)
        temp=temp&&finish[j];
    flag=temp;
}
void compute()
{
    if(!finish[i])
    {
        for(j=0;j<r;j++)
            if(need[i][j]>work[j])
            {
                i++;
                return;
            }
        finish[i]=1;
        safe[s]=i;
        s++;
        for(j=0;j<r;j++)
            work[j]+=alloc[i][j];
    }
    i++;
}
int main()
{
    int c=0;
    cout<<"\nEnter no. of processes and resources: ";
    cin>>p>>r;
    cout<<"\nEnter Allocation matrix\n";
    for(i=0;i<p;i++)
        for(j=0;j<r;j++)
            cin>>alloc[i][j];
    cout<<"\nEnter Max matrix\n";
    for(i=0;i<p;i++)
        for(j=0;j<r;j++)
            cin>>Max[i][j];
    cout<<"\nEnter the available resources: ";
    for(i=0;i<r;i++)
        cin>>avail[i];
    for(i=0;i<p;i++)
        for(j=0;j<r;j++)
            need[i][j]=Max[i][j]-alloc[i][j];
    for(i=0;i<r;i++)
        work[i]=avail[i];
    i=0;
    while(!flag)
    {
        compute();
        check();
        if(i==p && !flag)
            i=0;
        c++;
        if(c>p+10)
        {
            cout<<"\n\nSafe sequence doesn't exists";
            return 0;
        }
    }
    cout<<"\nSafe sequence is : ";
    for(j=0;j<p;j++)
        cout<<"P"<<safe[j]<<"  ";
    return 0;
}
