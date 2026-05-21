/*
 * Competitive Programming - Beginners Class
 * Problem [F] - Stacks: Balanced Brackets
 *
 * May 15, 2026 - Friday
 */

#include <bits/stdc++.h>

using namespace std;

stack<char> st;

bool isBalanced(string exp){
    for (auto c : exp){
        switch (c){
        case '(':
        case '[':
        case '{':
            st.push(c);
            break;
        case ')':
        case ']':
        case '}':
            if(st.empty()){
                return false;
            }
            char prev = st.top();
            if(prev == '(' && c == ')'
            || prev == '[' && c == ']'
            || prev == '{' && c == '}'){
                st.pop();
                break;
            }
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    string data[n];
    bool result[n];

    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    for(int i = 0; i < n; i++){
        result[i] = isBalanced(data[i]);
    }

    for(int i = 0; i < n; i++){
        cout << ((result[i]) ? "YES\n" : "NO\n");
    }

    return 0;
}