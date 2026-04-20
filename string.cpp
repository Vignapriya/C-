#include <iostream>
using namespace std;

class StringOp {
public:
    char str[100];
    int getlength() {
        int l = 0;
        while (str[l] != '\0') {
            l++;
        }
        return l;
    }
    void reverse() {
        int n = getlength();
        for (int i = 0; i < n / 2; i++) {
            char temp = str[i];
            str[i] = str[n - 1 - i];
            str[n - 1 - i] = temp;
        }
    }
    void check() {
        int n = getlength();
        bool match = true;
        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - 1 - i]) {
                match = false;
                break;
            }
        }
        if (match)
            cout << "palindrome" << endl;
        else
            cout << "not palindrome" << endl;
    }
};
int main() {
    StringOp obj;
    cout << "Enter a string: ";
    cin >> obj.str;
    cout << "Length: " << obj.getlength() << endl;
    obj.reverse();
    cout << "Reversed string: " << obj.str << endl;
    obj.check();
    return 0;
}
