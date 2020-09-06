#include <iostream>
#include "LinkedList.cpp"

int main() {
    LinkedList<int> LL;
    LL.append(4);
    LL.append(3);
    LL.append(420);
    LL.append(69);

    LL.remove(4);
    std::cout << LL << std::endl;
    LL.remove(420);
    std::cout << LL << std::endl;
    LL.remove(69);
    std::cout << LL << std::endl;
    return 0;

}
