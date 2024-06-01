/**
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                       *
 *       Created by: Reinier Garcia Ramos                *
 *       reymillenium@gmail.com                          *
 *                                                       *
 *       https://www.linkedin.com/in/reiniergarcia       *
 *       https://github.com/reymillenium                 *
 *       https://www.reiniergarcia.dev                   *
 *                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 **/

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

template<typename T>
void printl(const T &item) {
    std::cout << item << std::endl;
}

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    std::cin.ignore();
    return value;
}

std::string humanize_integer(int const integer_value) {
    std::string integer_as_string = std::to_string(integer_value);
    // We insert commas into the string every three digits, fromm right to left.
    for (int j = integer_as_string.length() - 3; j > 0; j -= 3) {
        integer_as_string.insert(j, ",");
    }
    return integer_as_string;
}

std::string humanize_double(const double double_value, const int precision = 2) {
    const int integer_value = static_cast<int>(double_value);
    const double decimals = double_value - integer_value;
    // Extracts into a string the decimal part, rounded to two significant digits
    std::stringstream stream;
    // Places the decimals into the stream, rounded to two significant digits (by default)
    stream << std::fixed << std::setprecision(precision) << decimals;
    // Extracts the decimals from the stream, as a string, still rounded to two significant digits (by default)
    const std::string decimals_as_string = stream.str(); // It still includeds the zero & the dot. Ex: 0.34 (the dot must be removed next)
    return humanize_integer(integer_value) + decimals_as_string.substr(1, precision + 1);
}

int main() {
speed_input:
    const auto speed = get_value<double>("What is the speed of the vehicle in mph? ");
    if (speed < 0) {
        printl("You must type a number greater or equal to 0. Please try again.");
        goto speed_input;
    }

hours_input:
    const auto hours = get_value<int>("How many hours has it traveled? ");
    if (hours < 1) {
        printl("You must type a number greater or equal to 1. Please try again.");
        goto hours_input;
    }

    // Distance Traveled Breakdown Table
    printl("");
    printl("* * * * * * * * * * * * * *");
    printl("*    Distance Traveled    *");
    printl("* * * * * * * * * * * * * *");
    printl("");
    printl("---------------------");
    printl("| Hour |  Distance  |");
    printl("---------------------");
    for (int i = 1; i <= hours; i++) {
        const double distance = speed * i;
        std::cout << std::fixed << std::setprecision(2) << "| " << std::setw(4) << i << " | " << std::setw(7) << humanize_double(distance) << " mi |" << std::endl;
        printl("---------------------");
    }

    return 0;
}
