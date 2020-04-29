#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m,a,b,c;
    //cin>>m>>a>>b>>c;
    cin>>m;
    //vector<int>food;
    
        cin>>a>>b>>c;
       
    int sum=a+b+c;
    int item=2*m;

    //int ans=m-max;
    if(sum<=item)
    {
        cout<<"possible";
    }
    else
    {
        cout<<"impossible";
    }
    
    
    


    return 0;
}