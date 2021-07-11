#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector <int> v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    v.push_back(0);
    for(int i=1;i<n;i++)
    {
        int mask=~a[i-1];
        int val=~(mask|a[i]);
        v.push_back(val);
        a[i]=a[i]|val;
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}