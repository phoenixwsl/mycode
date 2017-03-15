#include <iostream>
#include <tr1/memory>
using namespace std;
class Foo {
public:
    Foo(){
        cout << "cons" <<endl;
    }
    ~Foo() {
        cout << "des" <<endl;
    }
};

typedef std::tr1::shared_ptr<Foo> FooPtr;
int main() {
    Foo *p = new Foo();
    {    
       FooPtr(p);
    }
    return 0;
}
