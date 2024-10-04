#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    std::list<int> values;
    for (int i = 0; i < argc; i++) {
        values.push_back(std::atoi(argv[i]));
    }
    std::list<int>::iterator itr = --values.end();
    while (itr != values.begin()) {
        std::cout << *itr << std::endl;
        itr--;
    }

    return 0;
}