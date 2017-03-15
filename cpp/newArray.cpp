#include<iostream>
using namespace std;
int main()
{ 
    
    int * p = new int[10];
    p[9] = 10;
    cout << "p9 is " <<p[9] <<endl;
	return 0;
} 
