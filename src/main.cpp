import math;
import factory;
import std.compat;
import std;

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

    // Using nan / NAN  does not work with modules
    const double nanValue = std::nan("nan");
    const double nonNanValue = 1.0;
    std::cout << "Nan value: " << nanValue << '\n';
    std::cout << "Non-nan value: " << nonNanValue << '\n';

    return 0;
}