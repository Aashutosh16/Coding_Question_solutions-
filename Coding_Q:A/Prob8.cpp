//REARRANGE BITS
#include <iostream>
#include <cmath> // Include cmath for pow function, though not needed here
using namespace std;

int main() {
    int n;
    cin >> n;

    // Count the set bits
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }

    // Calculate 2^count - 1 using bitwise shift
    int ans = (1 << count) - 1;
    cout << ans;

    return 0;
}
