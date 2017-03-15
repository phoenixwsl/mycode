#include<iostream>
using namespace std;
int main()
{ 
    uint64_t start = 300; 
    uint32_t end = 400;
    uint64_t time = (start<<32) + end;
    cout << "time is " << time <<endl;
	return 0;
} 
