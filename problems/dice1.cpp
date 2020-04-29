#include <iostream>
using namespace std;
int main()
{
    int i;
    int dice1,dice2;
    cin>>dice1>>dice2;
    if (dice1==dice2)
    {
        cout<<dice1+1<<endl;
    }
    if(dice1>dice2)
    {
        for(i=dice2+1;i<dice1+2;i++)
            cout<<i<<endl;
    }
    if(dice2>dice1)
    {
        for(i=dice1+1;i<dice2+2;i++)
            cout<<i<<endl;
    }
    return 0;
}