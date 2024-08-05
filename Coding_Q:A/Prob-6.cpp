//pick not pick 
// The code is designed to find the 
// longest subsequence from an array
// where the difference between consecutive
// elements is divisible by a given integer k
#include <iostream>
#include <vector>

using namespace std;

int maxi = 0;

void solve(int idx, vector<int>& arr, vector<int>& aux, int k) {
    if (idx == arr.size()) {
        if (maxi < aux.size()) maxi = aux.size();
        return;
    }
    if (aux.size() == 0 || (arr[idx] - aux[aux.size() - 1]) % k == 0) {
        aux.push_back(arr[idx]);
        solve(idx + 1, arr, aux, k);
        aux.pop_back();
    }
    solve(idx + 1, arr, aux, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> aux;
    int idx = 0;
    solve(idx, arr, aux, k);
    cout << maxi;
    return 0;
}
