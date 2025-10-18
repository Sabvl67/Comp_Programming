#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t, s, n;
    cin >> t >> s >> n;
    vector<int> flip(n);

    for (int i = 0; i < n; i++)
    {
        cin >> flip[i];
    }

    pair<int, int> position;
    int last_time = 0;
    int top = 0, bot = s;
    bool normal = true;

    for (int i = 0; i < n; i++)
    {
        int cur = flip[i];
        int diff = cur - last_time;

        int flow = min<int>(top, diff);

        top -= flow;
        bot += flow;

        swap(top, bot);
        normal = !normal;
        last_time = cur;
    }

    int diff = t - last_time;
    int flow = min<int>(top, diff);
    top -= flow;
    bot += flow;
    cout << top << endl;
    return 0;
}
