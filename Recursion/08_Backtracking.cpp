#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void permute(string s, int left, int right) {
    if (left == right) {
        cout << s << endl;
        return;
    }

    for (int i = left; i<= right; i++) {
        swap(s[left], s[i]);
        permute(s, left + 1, right);
        swap(s[left], s[i]);
    }
}

int main() {
    string s = "ABC";
    int n = s.length();
    permute(s, 0, n - 1);
    return 0;
}