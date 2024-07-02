#include <iostream>
#include <string>
#include <algorithm> // For transform

using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1); // Use getline to handle spaces
    getline(cin, s2);

    // Convert both strings to lowercase for case-insensitive comparison
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 < s2) {
        cout << "-1" << endl;
    } else if (s1 > s2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
