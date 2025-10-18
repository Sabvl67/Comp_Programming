#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++){
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    vector <int> result(q);
    for (int i=0; i<q; i++){
        int a;
        cin >> a;
        int l = 0;
        int h = n;
        while (l < h){
            int mid = (l+h)/2;
            if(prices[mid] <= a) l= mid+1;
            else h= mid;
        }
        result[i]=l;
    }
    for (auto a : result){
        cout << a << endl;
    }
    return 0;
}
