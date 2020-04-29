#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    
    double x1,y1,x2,y2,p;
    
    while(true)
    {  cin>>x1>>y1>>x2>>y2>>p;
        if(x1==0)break;
        double x=x1-x2;
        double y=y1-y2;
        double a=abs(x);
        double b=abs(y);
        double c=pow(a,p);
        double d=pow(b,p);
        double sum=c+d;
        double distance=pow(sum,1/p);
    
        cout<<fixed<<setprecision(10)<<distance<<endl;
        }
        

        
    
    return 0;
}