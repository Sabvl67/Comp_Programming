#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int modulo = 1e9 + 7;
int main()
{
    int T;
    cin >> T;
    vector<long long> result;


    for (int i = 0; i < T; i++)
    {
        string name;
        cin >> name;
        int n = name.size();

        // 2d matrix n*n
        vector<vector<long long> > dp(n, vector<long long>(n, 0));

        // base case
        for (int j = 0; j < n; j++){
            dp[j][j] = 1;
        }

        for (int len = 2; len <= n; len++)
        {
            for (int l = 0; l + len - 1 < n; l++)
            {
                int r = l + len - 1;

                if (name[l] == name[r])
                {
                    dp[l][r] = (dp[l][r - 1] + dp[l + 1][r] + 1) % modulo;
                }
                else
                {
                    dp[l][r] = (dp[l][r - 1] + dp[l + 1][r] - dp[l + 1][r - 1]) % modulo;
                }
            }
        }
        result.push_back(dp[0][n-1]);
    }
    for (auto num: result){
        cout << num << endl;
    }
    return 0;
}
