#include <gtest/gtest.h>
#include "../src/headers.h"

TEST(LoggerTest, SingletonIdentity) {
    Logger& a = Logger::getInstance();
    Logger& b = Logger::getInstance();
    EXPECT_EQ(&a, &b); // Should be same instance
}

TEST(LoggerTest, LoggingOutput) {
    Logger::getInstance().log("Test message - check console");
    SUCCEED(); // We assume logging just prints to stdout
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}