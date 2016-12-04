#include <iostream>

using namespace std;

bool checkIfPowerOf2(uint64_t n) {
    if (n<=0) {
        return false;
    }
    //turn off right most bit
    uint64_t x = n & (n-1);
    //if x is 0 then, power of two, because power of two has only one one-bit
    if (!x) {
        return true;
    }
    return false;
}

int main() {
    uint64_t n = 100;
    bool result = checkIfPowerOf2(n);
    cout << result << endl;
    return 0;
}