#include "headers.h"
//this is main
int main() {
    Logger& logger1 = Logger::getInstance();
    Logger& logger2 = Logger::getInstance();

    logger1.log("Logger 1: Starting up");
    logger2.log("Logger 2: Processing data");

    if (&logger1 == &logger2) {
        std::cout << "Same logger instance (singleton working)." << std::endl;
    }

    return 0;
}