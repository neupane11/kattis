#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cstring>
using namespace std;


int solve(vector<int>vec,int wgt)
{
    
    vector<int>ans;
    // int wgt;
    // cin>>wgt;
    for(int i=0;i<vec.size();i++)
    {
        int count=0;
        int weight=0;
        int j=i;
        for(int j=i;j<vec.size();j++)
        {
            int can_eat=weight+vec[j];
            if(can_eat<=wgt&&can_eat!=0)
            {
                count++;
                weight+=vec[j];
                ans.push_back(count);
            }    
        }
    }
    // if(*min_element(vec.begin(),vec.end())>wgt){
    //     cout<<0<<endl;
    // }
    // else{
    return *max_element(ans.begin(),ans.end());
    //}
}
void input()
{
    
    vector<int>vec;
    int fruit,num,wgt;
    cin>>num>>wgt;
    for(int i=0;i<num;i++)
    {
        cin>>fruit;
        vec.push_back(fruit);}
        cout<<solve(vec,wgt)<<endl;
}
void test()
{
    vector<int>test1={3,1,2,1,1};
   
    vector<int>test3={6000,5000000};
    
    int weight1={5};
    
    int weight3={1000000};

    assert(solve(test1,weight1)==4);
    
    assert(solve(test3,weight3)==1);

    cout<<"all test cases passed"<<endl;
}
int main(int argc, char* argv[])
{
    
    if (argc > 1 && (strncmp(argv[1], "test", 4) == 0))
        test();
    else
        input();
    return 0;
}