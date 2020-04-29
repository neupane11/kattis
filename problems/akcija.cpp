#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#include <cstring>
using namespace std;

int solve(int n,vector<int>&vec)
{
    
    int sum=0;
     
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<vec.size();i++)
    {
        if(i%3!=2)
        {
            sum+=vec[i];
        }
        
    }return sum;
    
}
void getdata()
{
    vector<int>vec;
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        vec.push_back(c);

    }
    cout<<solve(n,vec);
}
void test()
{
    vector<int>v1={6,2,3,5};
    vector<int>v2={6,3,2,3};
    vector<int>v3={9,5,2,3,7};
    assert(solve(4,v1)==13);
    assert(solve(4,v2)==11);
    assert(solve(5,v3)==21);

    cout<<"all test cases passed"<<endl;
}
int main(int argc,char*argv[])
{
    if (argc > 1 && (strncmp(argv[1], "test", 4) == 0))
        test();
    else{
        getdata();
    }
    return 0;
}