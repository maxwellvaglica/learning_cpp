#include <iostream>

int main() {
    // This is a do while loop
    std::cout << "example of a timer using do while:\nCountdown!\n";
    int time = 5;
    do {
        std::cout << time << std::endl;
        time--;
    }
    while (time >=0);
    std::cout << "Done!" << std::endl;

    // This is a for loop
    std::cout << "example of a timer using for loop:\nCountdown!\n";
    for (int time = 5; time >= 0; time--){
        std::cout << time << std::endl;
    }
    std::cout << "Done!" << std::endl;
    return 0;
}
