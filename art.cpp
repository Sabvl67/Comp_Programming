#include <iostream>
#include <vector>

using namespace std;

int main () {
    int r,g,b;
    cin >> r >> g >> b;
    int cr,cg,cb;
    cin >> cr >> cg >> cb;
    int crg, cgb;
    cin >> crg >> cgb;

    int needR = max(0, r-cr);
    int needG = max(0, g-cg);
    int needB = max(0, b-cb);

    // check if we have enough need compare to available
    if (needR > crg || needB > cgb){
        cout << -1 << endl;
        return 0;
    }

    crg -= needR;
    cgb -= needB;

    if(needG > (crg+cgb)){
        cout << -1 << endl;
        return 0;
    }
    cout << needR + needG + needB << endl;
    return 0;
}