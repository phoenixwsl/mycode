#include<iostream>
#include <tr1/memory>

using namespace std;
int main()
{ 
    tr1::shared_ptr<int> p;
    int * s = new int(5);
    int * t = NULL;
    p.reset(t);
    if (p) {
        cout << *p <<endl;
    } else {
        cout << "p is null" << endl;
    }
    for (size_t i = 0; i < 10; i++) {
        cout << time(NULL) <<endl;
        sleep(1);
    }
    return 0;
} 
