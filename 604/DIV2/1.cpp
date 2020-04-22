/*
 * Created: 2019-12-05 19:58:39
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabu-muddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/Kiranbabu-Muddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
using namespace std;
int solve(){
    std::string::iterator it; 
    string str;
    getline(cin,str);
	for(std::string::size_type i = 0; i < str.size(); i++) {
        vector<char> Arr;
        Arr.push_back('a');
        Arr.push_back('b');
        Arr.push_back('c');
        if((i!=0) and ((str[i]==str[i-1]) or (str[i]==str[i+1] and str[i]!='?'))){
            cout<<-1<<endl;
            return 1;
        }
        else if(str[i]=='?'){
            char prev=str[i-1];
            char next=str[i+1];
            Arr.erase(std::remove(Arr.begin(), Arr.end(),prev), Arr.end());
            Arr.erase(std::remove(Arr.begin(), Arr.end(),next), Arr.end());
            str[i]=Arr[0];
        }
	}
    cout<<str<<endl;
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int T;
cin>>T;
for(int j=0;j<=T;j++){
solve();
}
}