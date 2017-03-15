#include <iostream>
using namespace std;

int main() {
    string str = "";
    str.erase(str.find_last_not_of(' ') + 1);
    str.erase(0, str.find_first_not_of(' '));
    cout << str << endl;
    return 0;
}
