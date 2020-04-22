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
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m,k,pos;
    long long int a;
    cin>>n;
    vector<long long int> Arr;
    for(int i=0;i<n;i++){
        cin>>a;
        Arr.push_back(a);
    }
    sortArr(Arr,n);
    cin>>m;
    for(int i=0;i<m;i++){
    vector<pair<long long int, int> >vp1;
            cin>>k;
            cin>>pos;
            for(int j=0;j<k;j++){
                vp1.push_back(make_pair(vp[j].first,vp[j].second));
            }
            sort(vp1.begin(),vp1.end(),sortbysecasc);
            cout<<vp1[pos-1].first<<endl;
    }
}
