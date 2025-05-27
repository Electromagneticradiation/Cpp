#include<iostream>

// check if all digits pf spec completely divide num

bool is_special(int spec, int inp) {
    while (spec>0) {
        // do with TRY CATCH later
        if (spec % 10 == 0) {
            return false;
        } else if (inp % (spec%10) == 0) {
            spec /= 10;
        } else {
            return false;
        }
    }
    return true;
}

// take an int input and print all special num from 111-999

int main() {
    int n;
    std::cout << "What's the number?  ";
    std::cin >> n;
    for (int i=111; i<1000; i++) {
        if (is_special(i,n)) {
            std::cout << i << " ";
        }
    }
}
