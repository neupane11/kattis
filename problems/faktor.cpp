#include <iostream>
using namespace std;
int main()
{
    int article,factor;
    cin>>article>>factor;
    int citation=article*factor;
    //cout<<citation;
    int bribe=article-1;
    int scientist=citation-bribe;
    cout<<scientist<<endl;
    return 0;
}