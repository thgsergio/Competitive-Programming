/*
 * Competitive Programming - Beginners Class
 * Problem [E] - gacha
 * Author: Thiago Sergio
 *
 * May 28, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    
    map<string, ll> items;
    string item;
    for(ll i = 0; i < N; i++){
        cin >> item;
        items[item]++;
    }
    cout << items.size() << '\n';
    return 0;
}