/*
 * Competitive Programming - Beginners Class
 * Problem [I] - The Department of Redundancy Department
 * Author: Thiago Sergio
 *
 * May 29, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    map<ll, ll> pairs;
    queue<ll> q;
    ll num;
    while(cin >> num){
        if(pairs[num] == 0){
            q.push(num);
        }
        pairs[num]++;
    }
    while(!q.empty()){
        cout << q.front() << ' ' << pairs[q.front()] << '\n';
        q.pop();
    }
    
    return 0;
}