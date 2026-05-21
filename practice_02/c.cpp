/*
 * Competitive Programming - Beginners Class
 * Problem [C] - Cards
 *
 * May 15, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

ull minFreq(ull o, ull n, ull e){
    if(o < n && o < e){
        return o;
    }
    if(n < e){
        return n;
    }
    return e;
}

ull minFreq(ull z, ull e, ull r, ull o){
    if(z <= e && z <= e && z <= o){
        return z;
    }
    if(e < r && e < o){
        return e;
    }
    if(r < o){
        return r;
    }
    return o;
}

int main(){
    ull N;
    cin >> N;

    string str;
    cin >> str;
    
    vector<int> freq(26, 0);
    
    ull qtd_ones = 0, qtd_zeros = 0;

    for(ull i = 0; i < N; i++){
        freq[str[i] - 'a']++;
    }
    // // DEBUG
    // for(ull i = 0; i < 26; i++){
    //     cout << freq[i] << ' ';
    // }

    qtd_ones = minFreq(freq['o' - 'a'], freq['n' - 'a'], freq['e' - 'a']);

    for(ull i = 0; i < qtd_ones; i++){
        cout << "1 ";
        freq['o' - 'a']--;
        freq['n' - 'a']--;
        freq['e' - 'a']--;
    }
    qtd_zeros = minFreq(freq['z' - 'a'], freq['e' - 'a'], freq['r' - 'a'], freq['o' - 'a']);
    for (ull i = 0; i < qtd_zeros; i++){
        cout << "0 ";
    }
    return 0;
}