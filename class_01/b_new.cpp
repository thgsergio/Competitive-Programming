#include <iostream>

long trailing_zeros(long n){
    int count = 0;
    while(n >= 1){
        if(n % 5 != 0){
            n -= 1;
            continue;
        }
        long pivot = n;
        while(pivot % 5 == 0){
            count++;
            pivot /= 5;
        }
        n -= 5;
    }
    return count;
}

int main(){
    long n;
    std::cin >> n;

    std::cout << trailing_zeros(n);
    return 0;
}