#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> fruits = {"Apple", "Banana", "Apple", "Orange", "Apple", "Grapes", "Banana"};
    unordered_map<string, int> fruitsCount;

    for (const string& fruit : fruits) {
        fruitsCount[fruit]++;
    }

    for (const auto& [fruit, count] : fruitsCount) {
        cout << fruit << " = " << count << endl;
    }
    return 0;
}