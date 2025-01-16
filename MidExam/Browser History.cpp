#include <bits/stdc++.h>

using namespace std;

int main() {
    list<string> l;
    string input;

    while (cin >> input && input != "end") {
        l.push_back(input);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    auto c = l.begin();

    while (Q--) {
        string co;
        getline(cin, co);

        stringstream ss(co);
        string co;
        ss >> co;

        if (co == "visit") {
            string add;
            ss >> add;

            auto it = find(l.begin(), l.end(), add);
            if (it != l.end()) {
                c = it;
                cout << *c << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (co == "next") {
            if (c != l.end() && next(c) != l.end()) {
                ++c;
                cout << *c << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (co == "prev") {
            if (c != l.begin()) {
                --c;
                cout << *c << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}