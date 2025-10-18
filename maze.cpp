#include <bits/stdc++.h>

using namespace std;

int dr[4] ={0,1,0,-1};
int dc[4]= {1,0,-1,0};

int main() {
    int r,c;
    cin >> r >> c;
    int iS, jS;
    cin >> iS >> jS;
    iS--; jS--;
    int iE, jE;
    cin >> iE >> jE;
    iE--; jE--;

    vector<vector<int>> maze(r, vector<int>(c));
    for (int i = 0; i < r; i++){
        string line;
        cin >> line;
        for (int j = 0; j < c; j++){
            maze[i][j] = (line[j] == '1') ? 1 : 0;
        }
    }

    // visted[r][c][direction]
    vector<vector<vector<bool>>>visited(
        r, vector<vector<bool>>(c,vector<bool>(4,false))
    );

    int row = iS;
    int col = jS;
    int dir = 0;

    auto canMove = [&](int nr, int nc){
        return (nr >= 0 && nr< r && nc >=0 and nc < c && maze[nr][nc]== 0);
    }

    while(true){
        if(row == iE && col == jE){
            cout << 1 << endl;
            return 0;
        }
        if (visited[row][col][dir]) {
            cout << 0 << endl;
            return 0;
        }
        visited[row][col][dir] = true;

        int left = (dir + 3) % 4;
        int leftRow = row + dr[left];
        int leftCol = col + dc[left];

        int fwdR = row + dr[dir];
        int fwdC = col + dc[dir];


        if (canMove(leftRow, leftCol)) {
            dir = left;
            row = leftRow;
            col = leftcol;
        } else if (canMove(fwdRow, fwdCol)) {
            row = fwdRow;
            col = fwdCol;
        } else {
            dir = (dir + 1) % 4;
        }
    }
    return 0;
}