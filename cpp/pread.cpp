#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
using namespace std;

int main() {
    int fd;
    fd = open("1", O_RDONLY);
    char c[100];
    int ret = pread(fd, c, 10, -2);
    cout << strerror(errno) << endl;
    return 0;
}
