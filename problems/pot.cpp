#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec;
    int sum=0;
    int n,p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        int last=p%10;
        //cout<<last;
        int num=p/=10;
        //cout<<num;
        int ans=pow(num,last);
        vec.push_back(ans);
        


    }
    for(int i=0;i<vec.size();i++)
    {
        sum+=vec[i];
        
    }cout<<sum<<endl;
    return 0;
}