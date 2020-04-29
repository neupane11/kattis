#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N,b;
    double p;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>b>>p;
        //cout<<b<<p<<'h'<<endl;
        double ABPM=60/p;
        //cout<<ABPM<<endl;
        double BPM=(60*b)/p;
        //cout<<BPM<<endl;
        double min_ABPM=BPM-ABPM;
        //cout<<min_ABPM<<endl;

        double max_ABPM=BPM+ABPM;
        //cout<<max_ABPM<<endl;
        cout<<fixed<<setprecision(4)<<min_ABPM<<' '<<BPM<<' '<<max_ABPM<<endl;
    }
    return 0;
}