/*
 * Competitive Programming - Beginners Class
 * Problem [I] - Easy Queue
 * Author: Thiago Sergio
 *
 * May 21, 2026 - Thursday
 */

#include <iostream>
#include <queue>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long T;
    cin >> T;

    queue<ll> q;
    for(ll i = 0; i < T; i++){
        int op;
        cin >> op;
        if(op == 1){
            ll num;
            cin >> num;
            q.push(num);
            continue;
        }
        if(op == 2){
            if(!q.empty()){
                q.pop();
            }
            continue;
        } 
        if(op == 3){
            if(q.empty()){
                cout << "Empty!\n";
            }
            else{
                cout << q.front() << '\n';
            }
            continue;
        }
    }
    return 0;
}