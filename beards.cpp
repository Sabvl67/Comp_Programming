#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Store all inputs first
    vector<vector<int>> all_beards(N, vector<int>(3));
    for (int m = 0; m < N; m++) {
        cin >> all_beards[m][0] >> all_beards[m][1] >> all_beards[m][2];
    }

    // Print title after input is done
    cout << "Gnomes:" << endl;

    // Process and print results
    for (int m = 0; m < N; m++) {
        int a = all_beards[m][0];
        int b = all_beards[m][1];
        int c = all_beards[m][2];

        if ((a < b && b < c) || (a > b && b > c)) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }

    return 0;
}
