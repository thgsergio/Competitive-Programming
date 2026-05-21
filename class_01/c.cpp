#include <iostream>

int main(){
    int n, t;
    std::cin >> n >> t;

    int k[n];
    int kt[n];

    for(int i = 0; i < n; i++){
        std::cin >> k[i];
        kt[i] = 1;
    }
    for(int i = 0; i < n; i++){
        int exp = t / k[i];
        if(exp == 0){
            kt[i] = 0;
        }
        for(int j = 1; j < exp; j++){
            kt[i] *= 2;
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        // std::cout << k[i] << ": " << kt[i] << '\n';
        result = (result > k[i] * kt[i]) ? result : k[i] * kt[i];
    }
    
    std::cout << result << '\n';

    return 0;
}