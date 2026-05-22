/*
 * Competitive Programming - Beginners Class
 * Problem [G] - Postfix Notation
 * Author: Thiago Sergio
 *
 * May 21, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

void parser(string op, stack<int>& st){
    int n2 = st.top(); st.pop();
    int n1 = st.top(); st.pop();
    int r;
    if (op == "+"){
        r = n1 + n2;
    }
    else if (op == "-"){
        r = n1 - n2;
    }
    else if (op == "*"){
        r = n1 * n2;
    }
    else if (op == "/"){
        r = n1 / n2;
    }
    else if (op == "%"){
        r = n1 % n2;
    }
    else if (op == "^"){
        r = pow(n1, n2);
    }
    st.push(r);
}

int main(){
    stack<int> st;
    string data;
    getline(cin, data);
    stringstream ss(data);
    
    int first_num;
    ss >> first_num;
    st.push(first_num);

    int num;
    string op;
    while(ss >> num >> op){
        st.push(num);
        parser(op, st);
    }
    cout << st.top();
    return 0;
}