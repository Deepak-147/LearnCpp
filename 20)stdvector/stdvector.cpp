/*
Introduced in C++03, std::vector provides dynamic array functionality that handles its own memory management.
This means you can create arrays that have their length set at runtime, without having to explicitly allocate
and deallocate memory using new and delete.
*/

#include<iostream>
#include<vector>
int main(void) {
    // no need to specify length at initialization
    std::vector<int> array1;//Takes 0 by default
    std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array
    std::vector<int> array3 { 9, 7, 5, 3, 1 }; // use uniform initialization to initialize array (C++11 onward)

    std::cout << array2[4] << "\n";
    std::cout << array2.at(4) << "\n";

    std::cout << array1.size() << "\n";
    std::cout << array2.size() << "\n";

    for (auto const &element: array2)
        std::cout << element << ' ';

    std::cout << "\n";

    /*
    Resize the array with new size 7. The existing elements values are preserved.
    New elements are initialized to the default value 0 (for integer type).
    */
    array2.resize(7);
    std::cout << array2.size() << "\n";

    for (auto const &element: array2)
        std::cout << element << ' ';

    std::cout << "\n";

    return 0;
}
