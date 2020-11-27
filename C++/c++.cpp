#include <iostream>
#include <sstream>

#define delim '_'

int main() {
    std::string input = "Ana_are_mere";
    std::istringstream stream(input);
    std::string token;
    int length = 3;
    int count = 0;

    while (std::getline(stream, token, delim)) {
        if (token.size() == count) 
            count++;
    }

    std::cout << "The string is " << input << '\n';
    std::cout << "Target words: " << count << '\n';

    return 0;
}