#include "main.hpp"

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data d;
    d.id = 5;
    Data *ptr = &d;
    std::cout << "raw ptr: " << ptr << std::endl;
    uintptr_t addr_ptr  = serialize(ptr);
    std::cout << "uintptr_t address of ptr: " << std::hex << addr_ptr << std::endl;
    Data *new_ptr = deserialize(addr_ptr);
    std::cout << "uint_ptr_t adress to raw: " << new_ptr << std::endl;
    std::cout << "raw id: " << new_ptr->id << std::endl;
    return (0);
}