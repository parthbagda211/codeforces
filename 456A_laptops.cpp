#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (x != y) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}
