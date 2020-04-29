#include <iostream>
#include <cmath>
using namespace std;
int length(int a,int b)
{
    int ans=pow(a,2)+pow(b,2);
    int result=sqrt(ans);
    return result;
}
int main()
{
    int n,w,h,matchSticks;
    cin>>n>>w>>h;
    for(int i=0;i<n;i++)
    {
        cin>>matchSticks;
        if(matchSticks<=length(w,h))
    {
        cout<<"DA"<<endl;
    }else{
        cout<<"NE"<<endl;
    }
    }
    
    return 0;
}