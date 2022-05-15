#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    SqList L;
    InitList(L);
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListInsert(L, 3, 3);
    return 0;
}
