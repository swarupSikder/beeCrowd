#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Function to determine if string a can grow into string b (i.e., a is a substring of b)
bool canGrow(const string& a, const string& b) {
    return b.find(a) != string::npos;
}

// Function to find the size of the longest sequence using dynamic programming
int findLongestSequence(vector<string>& strings) {
    int n = strings.size();
    vector<int> dp(n, 1); // dp[i] will store the length of the longest sequence ending with strings[i]

    // Sort strings by length to ensure we build up from smaller to larger strings
    sort(strings.begin(), strings.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    int maxLength = 1;

    // Build up the dp array
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (canGrow(strings[j], strings[i]) && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        vector<string> strings(N);
        for (int i = 0; i < N; ++i) {
            cin >> strings[i];
        }
        cout << findLongestSequence(strings) << endl;
    }
    return 0;
}
