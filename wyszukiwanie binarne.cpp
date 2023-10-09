#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;
    bool found = false;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Element " << target << " został znaleziony w tablicy."
    } else {
        std::cout << "Element " << target << " nie został znaleziony w tablicy." 
    }

    return 0;
}
