#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0, maxCount = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
        n /= 2;
    }

    cout << maxCount << endl;

    return 0;
}
