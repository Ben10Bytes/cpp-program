#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main() {
    unordered_map<string, int>  map;

    map["Apple"] = 10;
    map["Banana"] = 20;
    map["Mango"] = 30;
    map["Orange"] = 15;

    cout << "Value for Apple: " << (map.find("Apple") != map.end() ? to_string(map["Apple"]) : "null") << endl;
    cout << "Value for Banana: " << (map.find("Banana") != map.end() ? to_string(map["Banana"]) : "null") << endl;
    cout << "Value for Mango: " << (map.find("Mango") != map.end() ? to_string(map["Mango"]) : "null") << endl;
    cout << "Value for Orange: " << (map.find("Orange") != map.end() ? to_string(map["Orange"]) : "null") << endl;
    cout << "Value for KIWI: " << (map.find("KIWI") != map.end() ? to_string(map["KIWI"]) : "null") << endl;

    return 0;
}
