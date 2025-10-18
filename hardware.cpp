#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int h ,w;
    cin >> h >> w;

    vector <string> grid(h);
    
    for (int i = 0; i < h; i++){
        cin >> grid[i];
    }

    vector<vector<int> > field(h, vector<int>(w, 0));

    field[0][0] = 0;

    for (int i=0; i < h; i++){
        for (int j=0; j < w; j++){
            if (i == 0 && j == 0) { continue; };
            int topDown = (i > 0) ? field[i-1][j] : -1;
            int leftRight = (j > 0)? field[i][j-1] : -1;
            int best = max(topDown, leftRight);

            field[i][j] = best + (grid[i][j] == 'I' ? 1 : 0);
        }
    }
    cout << field[h-1][w-1] << endl;
    return 0;
}