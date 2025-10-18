#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int dimension = m *n ;
    int avail =  dimension / 2;
    cout << avail << endl;
    return avail;
}