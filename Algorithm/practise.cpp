
#include <iostream>
#include <string>

int main() {
    std::string userInput = "Hello, World!";

    // Using a for loop to iterate through the string
    for (int i = 0; i < userInput.length(); ++i) {
        std::cout << userInput[i] << std::endl;
    }

    return 0;
}
