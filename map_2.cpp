#include<bits/stdc++.h>
using namespace std;
main()
{
    map<string,int>m;
    int a;
    string b;
    cin>>a>>b;
    m[b]=a;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

}
