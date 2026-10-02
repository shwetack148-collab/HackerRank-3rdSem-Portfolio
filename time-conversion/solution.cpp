#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12)
            hour = 0;
    } else {
        if (hour != 12)
            hour += 12;
    }

    stringstream ss;
    ss << setw(2) << setfill('0') << hour;

    return ss.str() + s.substr(2, 6);
}

int main() {
    string s;
    cin >> s;

    cout << timeConversion(s) << endl;

    return 0;
}