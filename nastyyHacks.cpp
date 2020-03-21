#include <iostream>
using namespace std;
int main()
{
    int n,nadv,adv,cost;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nadv>>adv>>cost;
        int profit=adv-cost;
        if(profit>nadv)
        {
            cout<<"advertise"<<endl;
        }else if(profit==nadv){
            cout<<"does not matter"<<endl;
        }else{
            cout<<"do not advertise"<<endl;
        }
    }
    return 0;
}