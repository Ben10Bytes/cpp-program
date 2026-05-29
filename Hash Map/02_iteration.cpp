#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<int, string> map;

    map[101] = "Rahul";
    map[102] = "Priya";
    map[103] = "Amit";
    map[104] = "Sneha";

    cout << "==== Student Data Using KeySet() ====" << endl;
    for (auto const& [rollNo, name] : map) {
        cout << "Roll No : " << rollNo << endl;
    }

    cout << "==== Student Data Using Values() ====" << endl;
    for (auto const& [rollNo, name] : map) {
        cout << name << endl;
    }

    return 0;
}