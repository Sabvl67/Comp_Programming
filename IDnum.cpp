#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <long long> SINs(n);
    for (int i = 0 ; i < n; i++){
        cin >> SINs[i];
    }

    long long m = n;

    while(true) {
        unordered_set<long long> seen;
        bool works = true;

        for (long long sin : SINs) {
            long long r = sin % m;
            if (seen.count(r)) {
                works = false;
                break;
            }
            seen.insert(r);
        }

        if (works) {
            cout << m << endl;
            break;
        }
        m++;
    }
        return 0;
}