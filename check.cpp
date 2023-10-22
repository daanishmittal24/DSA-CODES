#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;
    int result;
    if (input >= 'A' && input <= 'Z') {
        result = 1;
    } else if (input >= 'a' && input <= 'z') {
        result = 0;
    } else {
        result = -1;
    }

    cout << "Result: " << result << endl;
    return 0;
}