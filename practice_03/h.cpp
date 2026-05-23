/*
 * Competitive Programming - Beginners Class
 * Problem [H] - Boxes Packing
 * Author: Thiago Sergio
 *
 * May 22, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    queue<ll> q;
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        pq.push(num);
    }
    ll result = n;
    q.push(pq.top());
    pq.pop();
    for(ll i = 1; i < n; i++){
        if(q.front() < pq.top()){
            q.pop();
            result--;
        }
        q.push(pq.top());
        pq.pop();
    }
    cout << result << '\n';
    return 0;
}
