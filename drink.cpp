#include <bits.stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n >> endl;
    vector<int> drinks (n);
    for (int i =0; i<n; i++){
        cin >> drinks[i];
    }
    int low = 0;
    int high = n+1;
    int mid = (low+high)/2;
    int q;
    cin >> q >> endl;
    vector<int> result(q);
    for (int j = 0; i <= q; j++){
        int money;
        cin >> money >> endl;
        while (low <= high){
            if(drinks[mid] >= money){
                cout << mid + 1 << endl;
                return 0;
            }
            else if (drinks[mid] < money){
                high -= mid;
            }
        }
        ;


        results.push_back(avail);
    }




    return 0;
}