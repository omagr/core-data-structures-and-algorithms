#include <bits/stdc++.h>
using namespace std;

bool isPali (string &s, int i) {
    if (i >= s.size()/2) return true;
    if (s[i] != s[s.size()-i-1]) return false;
    return isPali(s, i+1);
}

int main ()
{
    // string s = "Hello, World! 123";
    string s = "naman";
    // Remove non-alphanumeric characters
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        return !std::isalnum(c);
    }), s.end());
    // Convert to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;
    isPali(s, 0);
    cout << isPali(s, 0);

    return 0;
}
 