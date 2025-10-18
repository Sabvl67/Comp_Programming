#include <iostream>
#include <vector>

using namespace std;

struct Point {
    double x, y;
    Point(double _x, double _y) : x(_x), y(_y) {}
    Point() : x(0), y(0) {}

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

double distance(const Point& a, const Point& b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
    vector<Point> Book;
    int test_cases;
    int num_candles;

    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        double x, y;
        cin >> x >> y;
        Book.push_back(Point(x, y));
        cin >> num_candles;
        vector<Point> candles;
        bool lightUp = false;
        
        for (int j = 0; j < num_candles; j++) {
            double x, y;
            cin >> x >> y;
            candles.push_back(Point(x, y));
            double dist = distance(Book[i], candles[j]);
            if (dist <= 64){
                lightUp = true;
            }
        }
        if (lightUp) {
            cout << "light a candle" << endl;
        } else {
            cout << "curse the darkness" << endl;
        }
    }
    return 0;
}
