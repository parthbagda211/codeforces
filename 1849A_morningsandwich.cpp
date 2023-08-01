#include <iostream>
#include <algorithm>

using namespace std;

int main() {
int t;cin>>t;
while(t--){
 int b, c, h;
    cin >> b >> c >> h;

    int layers = 2 * min(c, h) + 1;

   
    if (b > layers) {
        layers += min(b - layers, b - layers / 2);
    }

    cout << layers << endl;
}
   

    return 0;
}
