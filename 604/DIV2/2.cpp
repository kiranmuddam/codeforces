#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int, int> > vp;
bool sortbysecasc(const pair<long long int,int> &a,
                   const pair<long long int,int> &b)
{
       return a.second<b.second;
}
bool sortbyfirstdesc(const pair<long long int,int> &a,
                   const pair<long long int,int> &b)
{
       return a.first>b.first;
}
void sortArr(vector<long long int> arr, int n)
{
	for (int i = 0; i < n; ++i) {
		vp.push_back(make_pair(arr[i], i));
	}
	sort(vp.begin(), vp.end(),sortbyfirstdesc);
}
void solve(){
    int n;
    long long int a;
    cin>>n;
    vector<long long int> Arr;
    for(int i=0;i<n;i++){
        cin>>a;
        Arr.push_back(a);
    }
    sortArr(Arr,n);
    vector<pair<long long int, int> >vp1;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vp1.push_back(make_pair(vp[j].first,(vp[j].second+1)));
            }
    }
    for(int i=0;i<n;i++){
        cout<<vp1[i].first<<"\t"<<vp1[i].second<<endl;
    }
    int maximum=vp1[0].second;
    int minimum=vp1[0].second;
    vp1[0].first=1;
    for(int i=0;i<n;i++){
        if(vp1[i].second<=minimum){
            minimum=vp1[i].second;
            vp1[minimum-1].first=1;
        }
        else if(vp1[i].second>=maximum){
            maximum=vp1[i].second;
            vp1[maximum-1].first=1;
        }
    }
     for(int i=0;i<n;i++){
         if(vp1[i].first!=1){
             //std::cout.flush();
             cout<<0<<endl;
             //std::cout.flush();
         }else{
             //std::cout.flush();
             cout<<1<<endl;
             //std::cout.flush();
         }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Tests;
    cin>>Tests;
    for(int i=0;i<Tests;i++){
        solve();
    }
}