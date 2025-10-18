// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<string> > lists(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            string item;
            cin >> item;
            if (!item.empty()) {
                lists[i].insert(item);
            }
        }
    }
    
    set<string> result = lists[0];
    
    for (int i = 1; i < n; i++){
        set<string> temp;
        set_intersection(result.begin(),result.end(), lists[i].begin(),lists[i].end(), inserter(temp, temp.begin()));
        result.swap(temp);
    }
    cout << result.size() << endl;
    
    for(auto &x : result){
        cout << x << endl;
    }

    return 0;
}