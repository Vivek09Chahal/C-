#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <functional>
#include <sstream>
#include "lambdaExpression.cpp" // Assuming the above code is in this file

class ATest : public ::testing::Test {
protected:
    A obj; // An instance of A to be used in the tests
};

TEST_F(ATest, TestMethodPrintsExpectedOutput) {
    std::stringstream buffer;
    std::streambuf* sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());
    obj.test();
    std::string testOutput = buffer.str();
    std::cout.rdbuf(sbuf);
    ASSERT_EQ(testOutput, "it is working till here\n");
}

TEST_F(ATest, Greet1MethodPrintsExpectedOutput) {
    std::stringstream buffer;
    std::streambuf* sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());
    obj.greet1();
    std::string greet1Output = buffer.str();
    std::cout.rdbuf(sbuf);
    ASSERT_EQ(greet1Output, "Hello World\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
