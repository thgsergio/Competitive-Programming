/*
 * Competitive Programming - Beginners Class
 * Problem [E] - Simple Stack
 * Author: Thiago Sergio
 *
 * May 21, 2026 - Thursday
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Stack{
    private:
        vector<int> m;
        int _size;
    public:
        Stack(): _size(0){}
        void push(int v){
            m.push_back(v);
            _size++;
            cout << "ok\n";
        }
        int pop(){
            int v = m.back();
            m.pop_back();
            _size--;
            return v;
        }
        int back(){
            return m.back();
        }
        int size(){
            return _size;
        }
        void clear(){
            while(_size != 0){
                m.pop_back();
                _size--;
            }
            cout << "ok\n";
        }
        void exit(){
            cout << "bye\n";
        }
};

typedef enum{
    PUSH,
    POP,
    BACK,
    SIZE,
    CLEAR,
    EXIT,
    UNKNOWN
} Token;

Token lexer(string str){
    if (str == "push"){
        return PUSH;
    }
    if (str == "pop"){
        return POP;
    }
    if (str == "back"){
        return BACK;
    }
    if (str == "size"){
        return SIZE;
    }
    if (str == "clear"){
        return CLEAR;
    }
    if (str == "exit"){
        return EXIT;
    }
    return UNKNOWN;
}

void parser(Token tk, Stack& st){
    switch(tk){
        case PUSH:
            int num;
            cin >> num;
            st.push(num);
            break;
        case POP:
            cout << st.pop() << '\n';
            break;
        case BACK:
            cout << st.back() << '\n';
            break;
        case SIZE:
            cout << st.size() << '\n';
            break;
        case CLEAR:
            st.clear();
            break;
        case EXIT:
            st.exit();
            break;
        case UNKNOWN:
            break;
    }
}

int main(){
    Stack st;
    Token current_cmd;
    do{
        string data;
        cin >> data;
        current_cmd = lexer(data);
        parser(current_cmd, st);
    } while (current_cmd != EXIT);
    
    return 0;
}