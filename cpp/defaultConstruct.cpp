#include <iostream>
using namespace std;

class A {
public:
    //A() {}
public:
    float a;
};

int main() {
    A * a = new A;
    cout << a->a << endl;
    delete a;
    A  a3;
    cout << a3.a <<endl;
    return 0;
}
