# The-second-or-The-third-largest-element#include <iostream>

int main() {
    int arr[] = {12, 45, 1, 10, 34, 99, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int second = -1, third = -1;

    // Loop to find the second and third largest numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > second) {
            third = second; // Update third largest
            second = arr[i]; // Update second largest
        } else if (arr[i] > third && arr[i] != second) {
            third = arr[i]; // Update third largest if it's distinct from second
        }
    }

    // Output the results
    std::cout << "Second largest: " << second << std::endl;
    std::cout << "Third largest: " << third << std::endl;

    return 0;
}