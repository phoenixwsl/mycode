#include<iostream>
//#include <unistd.h>

using namespace std;
int main()
{ 
    int pid = getpid();
    cout << "pid is " << pid <<endl;
    clock_t t = clock();
    cout << "clock is " << t << endl;
    sleep(1); 
    t = clock();
    cout << "clock is " << double(t)/CLOCKS_PER_SEC << endl;
	return 0;
} 
