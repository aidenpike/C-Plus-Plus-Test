#include <iostream>

using namespace std;

int main() {
    int repeat;
    cout << "Enter the number of siblings you have: ";
    cin >> repeat;
    
    string siblings[repeat];

    for (int i = 0; i < repeat; i++) {
        cout << "Enter a name of a sibling: ";
        cin >> siblings[i];
    }

    for (int i = 0; i < siblings->length(); i++) {
        cout << endl << siblings[i];
    }
}
