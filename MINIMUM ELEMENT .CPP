#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[7] = {6, 8, 13, 14, 17, 33, 45};
    int min = INT_MAX;
    for (auto x : a) {
        if (x < min) {
            min = x;
        }
    }
    cout << "min: " << min << endl;
    return 0;
}
