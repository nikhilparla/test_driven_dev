#include <gtest/gtest.h>

bool f(){
    return false;
}

TEST(ExampleTests, DemonstrateGTestMacros)
{
    EXPECT_TRUE(true);
    const bool result = f();
    EXPECT_EQ(false, result);
}