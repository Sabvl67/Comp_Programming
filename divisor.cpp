#include <iostream>
#include <set>

using namespace std;

int main() {
    int64_t N;
    cin >> N;
    set <int64_t> result;
    for (int64_t i = 1; i*i <= N; i++) {
        if(N%i == 0){
        result.insert(i);
        result.insert(N/i);
        }
    }
    for (auto x: result){
        cout << x << endl;
    }
    return 0;
}