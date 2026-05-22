/*
 * Competitive Programming - Beginners Class
 * Problem [H] - Take ABC
 * Author: Thiago Sergio
 *
 * May 21, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    
    string result;
    stringstream ss(S);
    char ch;
    while(ss >> ch){
        if(ch == 'C' && result.size() >= 2){
            if(result.back() == 'B' && result[result.size() - 2] == 'A'){
                result.pop_back();
                result.pop_back();
                continue;
            }
        }
        result.push_back(ch);
    }
    for(auto ch : result){
        cout << ch;
    }
    cout << '\n';
    return 0;
}