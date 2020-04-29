#include <iostream>
#include <vector>
#include <iomanip>
#include <cstring>
#include <cassert>
#include <cmath>
using namespace std;

double solve(int n,vector<int>&vec)
{
    double sum=0;
    double count=0;
    for(int i=0;i<vec.size();i++)
        {
            sum+=vec[i];
        }//cout<<sum<<endl;
        double avg=sum/n;
        //cout<<avg<<"hi"<<endl;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]>avg)
            {
                count++;
            }
        }
        double aboveAvg=(count/n)*100;
        //cout<<aboveAvg<<endl;
        aboveAvg=aboveAvg*1000;
        //cout<<aboveAvg<<endl;
        aboveAvg=round(aboveAvg);
        //cout<<aboveAvg<<endl;
        aboveAvg=aboveAvg/1000;
        
        return aboveAvg;
        
}
void getdata()
{
    
    int c,n,g;
    cin>>c;
    while(c--)
    {
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            vec.push_back(g);
        }
        
        cout<<fixed<<setprecision(3)<<solve(n,vec)<<"%"<<endl;
    }      
}
void test()
{
    vector<int>v1={50,70,60,90};
    vector<int>v2={80,70,90,90,100};
    vector<int>v3={50,90,81};
    assert(solve(4,v1)==50.000);
    assert(solve(5,v2)==60.000);
    assert(solve(3,v3)==66.667);

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