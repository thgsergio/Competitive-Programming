/*
 * Competitive Programming - Beginners Class
 * Problem [D] - pushpush
 * Author: Thiago Sergio
 *
 * May 28, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;

    deque<ll> b, b_aux;
    for(ll i = 0; i < n; i++){
        ll new_int;
        cin >> new_int;
        if(i % 2 == 0){
            b.push_back(new_int);
            b_aux.push_front(new_int);
        }
        else{
            b.push_front(new_int);
            b_aux.push_back(new_int);
        }
    }
    if(n % 2 == 0){
        for(ll i = 0; i < n; i++){
            cout << b.front() << ' ';
            b.pop_front();
        }
    }
    else{
        for (ll i = 0; i < n; i++){
            cout << b_aux.front() << ' ';
            b_aux.pop_front();
        }
    }
    cout << '\n';

    return 0;
}