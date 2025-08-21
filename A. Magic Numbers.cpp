#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool valid = true;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '1' && s[i] != '4') {
            valid = false;
            break;
        }
    }
    
    if (valid && s[0] != '4') {
        if (s.find("444") != string::npos) {
            valid = false;
        }
    } else {
        valid = false;
    }
    
    cout << (valid ? "YES" : "NO") << endl;
    return 0;
}
