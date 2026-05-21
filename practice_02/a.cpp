/*
 * Competitive Programming - Beginners Class
 * Problem [A] - Vector-Sort
 *
 * May 15, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    vector<ll> v;
    for(ll i = 0; i < N; i++){
        ll input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(ll i = 0; i < N; i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
}