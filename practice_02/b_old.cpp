/*
 * Competitive Programming - Beginners Class
 * Problem [B] - Good Sequence
 *
 * May 20, 2026 - Wednesday
 */

#include <bits/stdc++.h>

using namespace std;

long valueExists(vector<pair<long, long>>& a, long current_a){
    if(a.empty()){
        return -1;
    }
    for(long i = 0; i < a.size(); i++){
        if(current_a == a[i].first){
            return i;
        }
    }
    return -1;
}

int main(){
    long N;
    cin >> N;

    vector<pair<long, long>> a;
    for(long i = 0; i < N; i++){
        long current_a;
        cin >> current_a;
        long value_index = valueExists(a, current_a);
        if(value_index == -1){
            a.emplace_back(current_a, 1);
        }
        else{
            a[value_index].second++;
        }
    }
    
    long rm_nums = 0;
    
    for(auto p : a){
        rm_nums += (p.first > p.second) ? p.second : p.second - p.first;
    }
    
    cout << rm_nums << '\n';

    return 0;
}