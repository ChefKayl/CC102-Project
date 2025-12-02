#include <iostream>
#include <string>
#include <limits> 

bool get_numbers(double& n1, double& n2) {
    std::cout << "Enter first number: ";
    if (!(std::cin >> n1)) {
        std::cout << "Error: Invalid number input.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }

    std::cout << "Enter second number: ";
    if (!(std::cin >> n2)) {
        std::cout << "Error: Invalid number input.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}


void handle_add() {
    double num1, num2;
    if (get_numbers(num1, num2)) {
        std::cout << "Result: " << num1 + num2 << "\n";
    }
}

void handle_sub() {
    double num1, num2;
    if (get_numbers(num1, num2)) {
        std::cout << "Result: " << num1 - num2 << "\n";
    }
}

void handle_mul() {
    double num1, num2;
    if (get_numbers(num1, num2)) {
        std::cout << "Result: " << num1 * num2 << "\n";
    }
}

void handle_div() {
    double num1, num2;
    if (get_numbers(num1, num2)) {
        
        if (num2 == 0) {
            std::cout << "Error: Cannot divide by zero.\n";
        }
        else {
            std::cout << "Result: " << num1 / num2 << "\n";
        }
    }
}



int main() {
    std::string command;

    std::cout << "//////////////////////" << std::endl;
    std::cout << "/// C++ Calculator ///" << std::endl;
    std::cout << "//////////////////////" << std::endl;
    std::cout << "//Type:'help'       //" << std::endl;
    std::cout << "//////////////////////" << std::endl;
    std::cout << "// 7 // 8 // 9 // x //" << std::endl;
    std::cout << "//////////////////////" << std::endl;
    std::cout << "// 4 // 5 // 6 // ÷ //" << std::endl;
    std::cout << "//////////////////////" << std::endl;
    std::cout << "// 1 // 2 // 3 // - //" << std::endl;
    std::cout << "//////////////////////" << std::endl;
    std::cout << "// 0 // C // = // + //" << std::endl;
    std::cout << "//////////////////////" << std::endl;

    while (true) {
        std::cout << "\n> ";

        if (!(std::cin >> command)) {
            break;
        }

        if (command == "exit") {
            std::cout << "Goodbye!\n";
            break;
        }
        else if (command == "help") {
            std::cout << "=== AVAILABLE COMMANDS ===\n";
            std::cout << "add  : Addition (+)\n";
            std::cout << "sub  : Subtraction (-)\n";
            std::cout << "mul  : Multiplication (*)\n";
            std::cout << "div  : Division (/)\n";
            std::cout << "exit : Quit the program\n";
        }
        else if (command == "add") {
            handle_add();
        }
        else if (command == "sub") {
            handle_sub();
        }
        else if (command == "mul") {
            handle_mul();
        }
        else if (command == "div") {
            handle_div();
        }
        else {
            std::cout << "Unknown command: '" << command << "'. Type 'help' for commands.\n";
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return 0;
}
