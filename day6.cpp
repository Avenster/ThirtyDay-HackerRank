#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // to discard the newline character after n
    while (n--) {
        string s;
        getline(cin, s);
        string even = "", odd = "";
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                even += s[i];
            } else {
                odd += s[i];
            }
        }
        cout << even << " " << odd << endl;
    }
    return 0;
}
