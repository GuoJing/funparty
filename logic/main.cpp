#include <iostream>

using namespace std;

void solution1(int x){
    x = x & 0xFF;
    printf("result is 0x%x\n", x);
}


void solution2(int x){
    x = x ^ (~0xFF);
    printf("result is 0x%x\n", x);
}


void solution3(int x){
    x = x | 0xFF;
    printf("result is 0x%x\n", x);
}


int main() {
    // x = 0x87654321
    // 1. make sure low 2 be the same -> 0x00000021
    // 2. make low 2 the same, other be ^
    // 3. make low 2 all FF
    int x = 0x87654321;
    solution1(x);
    solution2(x);
    solution3(x);
    return 0;
}