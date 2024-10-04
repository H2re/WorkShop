#include <iostream>
#include <list>
int main() {
    std::cout << "Hello World :0" << std::endl;

int main(int argc, char* argv[]) {
    std::list<int> values;
    for (int i = 0; i < argc; i++) {
        values.push_back(std::atoi(argv[i]));
    }
    std::list<int>::iterator itr = values.begin();
    while (itr != values.end()) {
        std::cout << *itr << std::endl;
        itr++;
    }
    return 0;
}