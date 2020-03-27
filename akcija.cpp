#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector<int>vec;
    int n,c;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        vec.push_back(c);

    }
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<vec.size();i++)
    {
        if(i%3!=2)
        {
            sum+=vec[i];
        }
        
    }cout<<sum;
    

    return 0;

}