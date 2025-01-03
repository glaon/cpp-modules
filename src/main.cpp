import math;
import factory;
#include <iostream>

int main() {
    // Using math module
    int a = 10;
    int b = 5;
    std::cout << "Math operations:\n";
    std::cout << "Addition: " << math::add(a, b) << '\n';
    std::cout << "Multiplication: " << math::multiply(a, b) << '\n';

    // Using factory module
    std::cout << "\nFactory pattern demo:\n";
    auto productA = Factory::createProduct(Factory::ProductType::A);
    auto productB = Factory::createProduct(Factory::ProductType::B);

    std::cout << "Created: " << productA->getName() << '\n';
    std::cout << "Created: " << productB->getName() << '\n';

    return 0;
}