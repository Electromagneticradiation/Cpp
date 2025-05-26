#include <iostream>

void whatever(int) {}
int main() {
    unsigned int b {19};
    whatever(b);
    return 0;
}

// gives error in place of warning due to -Werror and -Wsign-conversion flags
