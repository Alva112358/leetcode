#include <iostream>

int f() {
    std::cout << "1" << std::endl;
    return 1;
}

int g() {
    std::cout << "2" << std::endl;
    return 2;
}

int h() {
    std::cout << "3" << std::endl;
    return 3;
}

int main(int argc, char* argv[]) {
    f() + g() + h();

    return 0;
}