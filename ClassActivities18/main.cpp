#include <iostream>
#include "allFunctions.hpp"

using namespace initializing;
using namespace printing;
using namespace sorting;

int main() {
    const int size = 6;  
    int arr[size];      
    
    
    initializeArray(arr, size);

    std::cout << "Before sorting:" << std::endl;
    printArray(arr, size);

    sortArray(arr, size);

    std::cout << "After sorting:" << std::endl;
    printArray(arr, size);

    return 0;
}