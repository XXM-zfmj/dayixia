#include <iostream>
#include <string>
using namespace std;
void print(string s, int n = 10) {
    if (s.length() > n) {
        cout << s.substr(0, n) << endl;
    } else {
        cout << s << endl;
    }
}
int main() {
    int choice;
    string s;
    int n;
  do {
        cout << "1. Prints\n";
        cout << "2. Printsn\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
     switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore(); 
                getline(cin, s);
                print(s);
                break;
            case 2:
                cout << "Enter a string: ";
                cin.ignore(); 
                getline(cin, s);
                cout << "Enter an integer (n): ";
                cin >> n;
                print(s, n);
                break;
            case 3:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);
      return 0;
}
