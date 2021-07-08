#include <iostream>

struct Data {
    int id;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data d;
    Data *ptr = &d;
    std::cout << "raw ptr: " << ptr << std::endl;
    uintptr_t addr_ptr  = serialize(ptr);
    std::cout << "uintptr_t address of ptr: " << addr_ptr << std::endl;
    std::cout << "uint_ptr_t adress to raw:" << deserialize(addr_ptr) << std::endl;
    return (0);
}