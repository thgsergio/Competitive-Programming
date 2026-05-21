#include <iostream>

long long fat(long n){
    long long result = n;
    for(long i = n - 1; i > 1; i--){
        result *= i;
    }
    return result;
}

int main(){
    long n;
    std::cin >> n;

    long long result = fat(n);

    int pivot = 10;
    int count_zeros = 0;
    while(result % pivot == 0){
        pivot *= 10;
        count_zeros++;
    }
    std::cout << "[DEBUG] " << result << '\n';
    std::cout << count_zeros << '\n';

    return 0;
}