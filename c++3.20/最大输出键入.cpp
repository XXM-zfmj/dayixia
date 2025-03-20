#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, max;
    int flag = 1;

    do {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (flag == 1) {
            max = n;
            flag = 0;
        } else {
            if (n > max) {
                max = n;
            }
        }
    } while (true);

    cout << max << endl;
    return 0;
}