/*
 * Competitive Programming - Beginners Class
 * Problem [C] - Deque
 * Author: Thiago Sergio
 *
 * May 28, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    deque<ll> A;
    int query;
    bool d;
    ll x, p, n;

    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> query;
        if(query == 0){
            cin >> d >> x;
            if(d){
                A.push_back(x);
            }
            else{
                A.push_front(x);
            }
        }
        else if(query == 1){
            cin >> p;
            cout << A[p] << '\n';
        }
        else{
            cin >> d;
            if(d){
                A.pop_back();
            }
            else{
                A.pop_front();
            }
        }
    }
    return 0;
}