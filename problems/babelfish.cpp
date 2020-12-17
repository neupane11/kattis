/**
 Kattis problem : Babelfish
 language:c++

 **/
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
void solve()
{
    unordered_map<string,string>languages;
    string words;
    
    while(getline(cin,words) && words!="")
    {
        string eng,noteng;
        int pos=words.find(' ');
        eng=words.substr(0,pos);
        noteng=words.substr(pos+1,words.size()-1);
        languages.insert({noteng,eng});
    }
    while(getline(cin,words))
    {
        auto search=languages.find(words);
        if(search!=languages.end())
            {cout<<search->second<<endl;}
        else
        {
            cout<<"eh" << endl;
        }
        // if(languages.count(words)>0)
        // {
        //     cout<<languages.find(words)->second<<endl;

        // }
        // else
        // {
        //     {cout<<"egh"<<endl;}
        // }
    


    }
}   
int main()
{
    solve();
    return 0;

}