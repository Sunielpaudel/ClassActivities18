#include <iostream>
#include "allFunctions.hpp"

namespace printing {
    void printArray(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}