#include<bits/stdc++.h>
using namespace std;
main()
{
    map<string,int>m;
    int a;
    cin>>a;
    string v;
    for(int i=0;i<a;i++)
    {
        cin>>v;
        m[v]++;
    }
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

}
