#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<string> names = { "Dylan", "Bob", "Fred", "Barney" };

    vector<string>::iterator it;

    for(it = names.begin(); it != names.end(); ++it) {
        cout << *it << endl;
    }

    names.push_back("Tim");

    for(it = names.begin(); it != names.end(); ++it) {
        cout << *it << endl;
    }
}