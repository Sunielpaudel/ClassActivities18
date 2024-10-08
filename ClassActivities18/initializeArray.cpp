#include "allFunctions.hpp"

namespace initializing {
    void initializeArray(int arr[], int size) {
        int temp[] = { 3, 2, 9, 10, 5, 6 };
        for (int i = 0; i < size; ++i) {
            arr[i] = temp[i];
        }
    }
}