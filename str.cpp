/*
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    string word;

    while (getline(ss, word, ' ')) {
        cout << word << endl;
    }

    return 0;
}

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    string max_word = "";

    while (getline(ss, word, ' ')) {
        if (word > max_word) {
            max_word = word;
        }
    }

    cout << "The lexicographically maximum word is: " << max_word << endl;

    return 0;
}
*/
