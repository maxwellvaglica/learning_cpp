#include <iostream>

int main() {
    std::string user_input;
    std::cout << "Enter a statement" << std::endl;
    std::getline (std::cin, user_input);
    std::cout << "You entered: " << user_input << std::endl;
    return 0;
}
