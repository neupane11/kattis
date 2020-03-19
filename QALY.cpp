#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    vector<double>qaly1;
    vector<double>qaly2;
    int n;
    double q,y;
    cin>>n;
    double total=0;
    for(int i=0;i<n;i++){
        cin>>q>>y;
        total+=q*y;
        
    }cout<<setprecision(3)<<fixed<<total<<endl;;

    return 0;
}

