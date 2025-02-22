#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            cout << numbers[n - 1] << endl;
        } else if (n > 9 && n % 2 == 0) {
            cout << "even" << endl;
        } else if (n > 9 && n % 2 != 0) {
            cout << "odd" << endl;
        }
    }

    return 0;
}