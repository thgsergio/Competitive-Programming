/*
 * Competitive Programming - Beginners Class
 * Problem [G] - Ohana Cleans Up
 * Author: Thiago Sergio
 *
 * May 28, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    long n;
    cin >> n;
    cin.ignore();

    long max = 0;
    map<string, long> room;
    for(long i = 0; i < n; i++){
        string row;
        cin >> row;
        room[row]++;
    }
    for(auto row : room){
        max = (row.second > max) ? row.second : max;
    }
    cout << max << '\n';
    
    return 0;
}