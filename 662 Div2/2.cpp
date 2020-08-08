#include<bits/stdc++.h>

using namespace std;
void solveProblem() {
    unordered_map<long long int, int> frequency;
    set<long long int> squares;
    set<long long int> rectangles;
    set<long long int> storage;
    long long int N;
    cin >> N;
    vector<long long int> stock;
    for (int i = 0; i < N; i++) {
       long long int currentStock;
       cin >> currentStock;
       frequency[currentStock]++;
       stock.push_back(currentStock);
    }
    long long int events;
    cin >> events;
    
    unordered_map<long long int, int>::iterator it;

    for (it = frequency.begin(); it != frequency.end(); it++) {
        if(it->second >= 6){
            storage.insert(it->first);
            continue;
        }
        else if (it->second >= 4) {
            squares.insert(it->first);
            continue;
        } else if (it-> second >= 2) {
            rectangles.insert(it->first);
        }
    }    

    for (int i = 0; i < events; i++) {
        long long int currentEvent;
        char storeSymbol;
        cin >> storeSymbol;
        cin >> currentEvent;
        
        if(storeSymbol == '+') {
            frequency[currentEvent]++;
            //cout<<"CurrentChar Frequency:"<<frequency[currentEvent]<<endl;
            if(frequency[currentEvent] >=6 ){
                storage.insert(currentEvent);
                squares.erase(currentEvent);
            }
            else if(frequency[currentEvent] >= 4) {
                squares.insert(currentEvent);
                rectangles.erase(currentEvent);
            } else if(frequency[currentEvent] >= 2) {
                rectangles.insert(currentEvent);
            }
        } else {
            if(frequency[currentEvent] == 6){
                storage.erase(currentEvent);
                squares.insert(currentEvent);
            }
            else if(frequency[currentEvent] == 4) {
                squares.erase(currentEvent);
                rectangles.insert(currentEvent);
            } else if(frequency[currentEvent] == 2) {
                rectangles.erase(currentEvent);
            }
            frequency[currentEvent]--;
        }
        int finalSquaresSize = squares.size();
        int rectangleSize = rectangles.size();
        int finalStorageSize = storage.size();
        if(finalStorageSize >= 1 and rectangleSize >= 1){
            cout<<"YES"<<endl;
        }
        else if (finalSquaresSize >= 2) {
            cout<<"YES"<<endl;
        } else if(finalSquaresSize >= 1 and rectangleSize >= 2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

        }
    }
    
    
int main(){
        solveProblem();
}