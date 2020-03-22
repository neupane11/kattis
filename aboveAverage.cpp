#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   
    int c,n,g;
    
    cin>>c;
    while(c--)
    {
        double sum=0;
        double count=0;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            vec.push_back(g);
                
            }
        
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
        
        //cout<<aboveAvg<<endl;
        cout<<fixed<<setprecision(3)<<aboveAvg<<"%"<<endl;
    }
    return 0;
}