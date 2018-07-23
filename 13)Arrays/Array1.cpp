#include<iostream>
int main(void) {
    int a[5];
    a[0] = 20;
    a[1] = 50;
    a[2] = 10;
    a[3] = 80;
    a[4] = 40;

    /*
    Or initialize entire arrays via use of an initializer list:
    int a[5] = {20, 50, 10, 80, 40};

    To Initialize all elements to 0:
    int a[5] = {};

    Use C++11 uniform initialization syntax:
    int a[5] {20, 50, 10, 80, 40};

    */

    std::cout << "Average is: " << (a[0]+a[1]+a[2]+a[3]+a[4])/5 << "\n";
    std::cout << "The array has: " << sizeof(a) / sizeof(a[0]) << " elements\n";
    return 0;
}
