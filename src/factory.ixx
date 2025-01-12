module;

#include <string>
#include <memory>

export module factory;

export class Product {
public:
    virtual ~Product() = default;
    virtual std::string getName() const = 0;
};

class ConcreteProductA : public Product {
public:
    std::string getName() const override {
        return "Product A";
    }
};

class ConcreteProductB : public Product {
public:
    std::string getName() const override {
        return "Product B";
    }
};

export class Factory {
public:
    enum class ProductType {
        A,
        B
    };

    static std::unique_ptr<Product> createProduct(ProductType type) {
        switch (type) {
            case ProductType::A:
                return std::make_unique<ConcreteProductA>();
            case ProductType::B:
                return std::make_unique<ConcreteProductB>();
            default:
                return nullptr;
        }
    }
}; 