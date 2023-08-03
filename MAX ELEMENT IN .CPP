#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[7] = {6, 8, 13, 14, 17, 33, 45};
    int max = INT_MIN;
    for (auto x : a) {
        if (x > max) {
            max = x;
        }
    }
    cout << "max: " << max << endl;
    return 0;
}
