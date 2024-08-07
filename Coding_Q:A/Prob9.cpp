//STONE PAPER SCISSOR
#include <iostream>
using namespace std;

int main() {
    string A;
    cin >> A;

    // Determine the winning move
    if (A == "rock") {
        cout << "paper";
    } else if (A == "paper") {
        cout << "scissor";
    } else {
        cout << "rock";
    }

    return 0;
}
