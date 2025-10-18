#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> score(n);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (score[j]>0 && score[j] >= score[k-1])
        {
            result += 1;
        }
    }
    cout << result << endl;
    return 0;
}