#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> v;

    // Add elements to the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Access elements
    std::cout << "First element: " << v[0] << std::endl;
    std::cout << "Second element: " << v.at(1) << std::endl;

    // Size of the vector
    std::cout << "Size of vector: " << v.size() << std::endl;

    // Iterate over the vector using a range-based for loop
    for (const int& value : v) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    v.pop_back();

    // Check if the vector is empty
    if (v.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    // Clear all elements
    v.clear();
    std::cout << "Size after clearing: " << v.size() << std::endl;

    return 0;
}
