#include <iostream>

using namespace std;

bool checkIfPowerOf2(uint64_t n) {
    //turn off right most bit
    //if x is 0 then, power of two, because power of two has only one one-bit
    return (n > 0 && (n&(n-1))==0);
}

int main() {
    uint64_t n = 10;
    bool result = checkIfPowerOf2(n);
    cout << result << endl;
    return 0;
}