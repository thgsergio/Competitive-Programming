/*
 * Competitive Programming - Beginners Class
 * Problem [A] - Priority Queue
 * Author: Thiago Sergio
 *
 * May 22, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    priority_queue<ll> pq;
    string cmd;
    do{
        cin >> cmd;
        if(cmd == "insert"){
            ll num;
            cin >> num;
            pq.push(num);
        }
        else if(cmd == "extract"){
            cout << pq.top() << '\n';
            pq.pop();
        }
    } while(cmd != "end");
    return 0;
}