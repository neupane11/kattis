#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void duplicates(vector<int>vec)
{
    int count=0;
    int max=0;
    int result=0;
    vector<int>dupli;
    sort(vec.begin(),vec.end());
   
    for(int i=1;i<vec.size();i++)
    {
        cout<<vec[5];
        if(vec[i]>max)
        {
            max=vec[i];
            result=vec[i];
            //.push_back(vec[i]);
        }
        
    }//cout<<result;
    // for(int i=0;i<dupli.size();i++)
    // {
    //     cout<<dupli[i];
    // }
}
int main()
{
    vector<int>vec;
    int dice1,dice2;
    cin>>dice1>>dice2;
    int sum=0;
    for(int i=1;i<=dice1;i++)
    {   
        
        for(int j=1;j<=dice2;j++)
        {
            sum=i+j;
            
            vec.push_back(sum);
            //cout<<sum;
        }
    }
duplicates(vec);
    
    
    return 0;
}