#include "vectorFunctions.hpp"
#include <iostream>

auto generate(int count) -> std::vector<std::shared_ptr<int>> {
    std::vector<std::shared_ptr<int>> result_vector;
    for (int i = 0; i < count; i++) {
        result_vector.push_back(std::make_shared<int>(i));
    }
    return result_vector;
}

auto print(std::vector<std::shared_ptr<int>> vector) -> void {
    for (auto element : vector) {
        std::cout << *element << ' ';
    }
    std::cout << '\n';
}

auto add10(std::vector<std::shared_ptr<int>> vector) -> void {
    for (size_t i = 0; i < vector.size(); i++) {
        *vector[i] += 10;
    }
}

auto sub10(const std::shared_ptr<int> pointer) -> void {
    *pointer -= 10;
}

auto sub10(std::vector<std::shared_ptr<int>> vector) -> void {
    for (auto element : vector) {
        sub10(element);
    }
}
