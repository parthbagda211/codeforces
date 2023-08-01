#include <iostream>
#include <vector>
using namespace std;

int solvelds(vector<int>& a, int prev, int curr, int count, vector<vector<vector<int>>>& dp) {
    if (count == 0) {
        return 1;
    }
    if (curr == a.size()) {
        return 0;
    }

    if (dp[prev + 1][curr][count] != -1) {
        return dp[prev + 1][curr][count];
    }

    int nottake = solvelds(a, prev, curr + 1, count, dp);
    int pick = 0;
    if (prev == -1 || a[curr] < a[prev]) {
        pick = solvelds(a, curr, curr + 1, count - 1, dp);
    }

    return dp[prev + 1][curr][count] = pick + nottake;
}

int numTeams(vector<int>& rating) {
    int n = rating.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n, vector<int>(4, -1)));

    int ans = solvelds(rating, -1, 0, 3, dp);

    return ans;
}

int main() {
    vector<int> rating = {2, 5, 3, 4, 1}; // Example input
    int len = rating.size();
      vector<int> dp(len, 0);
        int count = 0;

        // First r[i] < r[j] < r[k] order
        for (int i = 0; i < len; i++) {
            for (int j = i; j >= 0; j--) {
                if (rating[i] > rating[j]) {
                    dp[i]++;
                    count += dp[j];

                }
            }
        }

        for(auto it : dp){
            cout << it <<   " " ;
         }
         cout << endl;
         cout << count << endl;
     

    return 0;
}
