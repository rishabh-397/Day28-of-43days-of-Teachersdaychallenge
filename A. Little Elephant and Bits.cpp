#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    int index = -1;
    
    // Find the first '0' from the left
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        // If there's no '0', remove the last '1'
        cout << s.substr(0, n-1) << endl;
    } else {
        // Remove the first '0' found
        cout << s.substr(0, index) + s.substr(index+1) << endl;
    }
    
    return 0;
}
