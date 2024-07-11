#include <iostream>
#include <map>

// Comparator functor for decreasing order
struct DecreasingOrder {
    bool operator()(const int& lhs, const int& rhs) const {
        return lhs > rhs;
    }
};

int main() {
    // Define a map with custom comparator for decreasing order
    std::map<int, int, DecreasingOrder> myMap;

    // Insert elements
    myMap[1] = 100;
    myMap[3] = 300;
    myMap[2] = 200;
    myMap[4] = 400;

    // Print elements using a range-based for loop
    for (const auto &pair : myMap) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    return 0;
}
