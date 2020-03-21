#include <iostream>
#include <vector>
using namespace std;
int area(int a,int b)
{
    int area=a*b;
    return area;
}
int main()
{
    int W,L,N,w,l;
    vector<int>vec;
    int sum=0;
    cin>>W>>N;
    for(int i=0;i<N;i++)
    {
        cin>>w>>l;
        int smallPiece=area(w,l);
        vec.push_back(smallPiece);
    }
    for(int i=0;i<vec.size();i++)
    {
        //cout<<vec[i];
        sum+=vec[i];
        
    }//cout<<sum;
    L=sum/W;
    cout<<L<<endl;
    
    return 0;
}