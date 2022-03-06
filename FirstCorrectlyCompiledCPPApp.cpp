#include <iostream>
using namespace std;

string thanks () {
    return "Nice to meet you!";
}

int main () {
    string op;
    cout << "Helo, C++\n";
    cout << "~ Mafee\n";
    cout << "Any opinions on C++?\n";
    cin >> op;
    cout << "Your opinion is:\n" << op << "\n";
    cout << thanks();
    return 0;
}