#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://www.geeksforgeeks.org/sorting-a-vector-in-c/

long long getMaxAdditionalDinersCount(long long N, long long K, int M, vector<long long> S) {
    sort(S.begin(), S.end());
    long long count = (S[0] - 1) / (K + 1);
    count += (N - S[M - 1]) / (K + 1);
    for (int i = 1; i < M; i++) {
        count += (S[i] - S[i-1] - K - 1) / (K + 1);
    }
    return count;
}

int main() {
    long long N = 15;
    long long K = 2;
    int M = 3;
    vector<long long> S = {11, 6, 14};
    cout << getMaxAdditionalDinersCount(N, K, M, S) << endl;
    // cout << 0 / 1;
}