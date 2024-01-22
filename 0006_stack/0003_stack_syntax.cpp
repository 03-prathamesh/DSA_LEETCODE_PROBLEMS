#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s = "babcc";

    stack<pair<char, int>> s1;

    for (int i = 0; i < s.size(); i++) {
        if (!s1.empty() && s1.top().first == s[i]) { //this checks weather element is already present in stack or not
            s1.top().second++; // Increment count if the element is already in the stack
        } else {
            s1.push({s[i], 1}); // Push a new element with count 1
        }
    }

    // Print the counts
    while (!s1.empty()) {
        cout << "Element: " << s1.top().first << ", Count: " << s1.top().second << endl;
        s1.pop();
    }

    return 0;
}
