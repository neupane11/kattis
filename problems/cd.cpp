#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <cassert>
#include <vector>
using namespace std;

int solve(vector<int>vec,unordered_set<int>cd)
{

    
    int count=0;
    //int value;

    for(auto itr=vec.begin();itr!=vec.end();itr++)
    {
        //cin>>num;
        //cd.insert(value);
        if(cd.count(*itr)){
        count++;}
        
    }

    // for(auto iterator = cd.begin(); iterator != cd.end(); iterator++)
    // cout << *iterator << " "<<"hi";

    return count;

    
}
void getdata()
{
    int n1,n2;
    int value1;
    int value2;
    
    while(cin >> n1>>n2 && n1!=0 && n2!=0 )
    { 
        unordered_set<int>cd;
        vector<int>vec;
        for(int i=0;i<n1;i++)
        {
            cin>>value1;
            cd.insert(value1);
        }
        for(int i=0;i<n2;i++)
        {
            cin>>value2;
            vec.push_back(value2);
        }
    cout<<solve(vec,cd)<<endl;
    }
    // while(n2!=0)
    // {
    //     cin>>n2;
    //     cout<<solve(n2,cd)<<endl;
    // }
}
void test()
{
    unordered_set<int>test={1,2,3};
    
    

    // assert(solve({1},{1,2,3}==))
}


int main()
{   getdata();
    //solve();
    return 0;
}
