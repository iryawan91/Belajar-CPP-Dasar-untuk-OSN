#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        c = toupper(c);

        if (c == 'Z')
            c = 'A';
        else
            c++;

        cout << c;
    }

    cout << endl;

    return 0;
}
