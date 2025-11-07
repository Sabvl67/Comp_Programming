#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, x,y;
    vector <int> r;
    cin >> n >> x >> y;
    while (n--){
        int a;
        cin >> a;
        long long result = (long long)a * y/x;
        r.push_back(result);
    }
    for (auto &x: r) {
    cout << x << "\n";
    }
    return 0;
}