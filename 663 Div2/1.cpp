#include<bits/stdc++.h>

#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")

using namespace std;
void solveProblem() {
    int N;
    cin >> N;

    for (int i = N; i > 0; i--) {
       cout<<i<<' ';
       std::cout << std::flush;
    }
    cout<<endl;

    

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin >> testCasesCount;
    while(testCasesCount--) {
        solveProblem();
    }
}