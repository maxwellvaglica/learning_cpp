#include <iostream>
#include <cmath>

int main() {
    double s12 = sqrt(12);
    std::cout << "You can do it this way..." << std::endl;
    std::cout << "Checking square root of twelve.." << std::endl;
    std::cout << "\nThe square root of twelve is: " << s12;
    if (s12 > 3) {
        std::cout << "\nThis is greater than 3";
    }
    else {
        std::cout << "\nThis is less than 3";
    }

    std::cout << "\nBut you can also do this way.. (see code)" << std::endl;
    std::string result = (s12 > 3) ? std::to_string(s12) + " is greater than 3" : std::to_string(s12) + " is less than 3";
    std::cout << result; 
    return 0;
}
