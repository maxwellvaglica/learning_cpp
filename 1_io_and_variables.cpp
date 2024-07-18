#include <iostream>
//^^ need that

int main() { //initiates the process
    //int queued = 5;
    //int line_count = 3;
    //const line_count = 3; <-- const means constant, value cannot be overwritten
    int queued, line_count, multiple;
    queued = 5, line_count = 3, multiple = queued * line_count;
    std::cout << "There are currently " << queued << " people in each line." << std::endl; //endl == end line
    std::cout << "There are " << line_count << " lines" << std::endl;
    std::cout << "That means there are " << multiple << " people waiting in line." << std::endl;
    std::cout << "Thank you for waiting!" << std::endl;
    return 0; //end the process
}

