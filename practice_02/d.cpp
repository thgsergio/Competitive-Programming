/*
* Competitive Programming - Beginners Class
* Problem [D] - Indian Summer
* Author: Thiago Sergio
*
* May 21, 2026 - Thrusday
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    int index = 0;
    string current_leaf;
    map<string, int> leaves;

    for(int i = 0; i < n; i++){
        getline(cin, current_leaf);

        // cout << "[DEBUG] " << current_leaf << '\n';

        if(leaves.empty()){
            leaves[current_leaf] = index++;
            continue;
        }

        if(leaves.find(current_leaf) != leaves.end()){
            continue;    
        }
        leaves[current_leaf] = index++;
    }

    cout << leaves.size() << '\n';

    return 0;
}