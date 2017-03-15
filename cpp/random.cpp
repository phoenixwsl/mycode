#include<iostream>
using namespace std;
int main()
{ 
    uint32_t s = rand();
    cout << "s is " << s <<endl;
    srand(s);
    s = rand();
    cout << "s is " << s <<endl;
    srand(123);
    s = rand();
    cout << "s is " << s <<endl;
    srand(123);
    s = rand()^1^time(NULL);
    cout << "s is " << s <<endl;
    cout << "time is " << time(NULL);
	return 0;
} 
