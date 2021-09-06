#include <gtest/gtest.h>
#include <string>

#include "Uds.h"

TEST(HelloTest, BasicAssertions) {

    auto wejscie = new std::istringstream("22\n0");

    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
    auto obiekt = new Uds::Service();
    obiekt->getId();
    *wejscie >> *obiekt;
    EXPECT_EQ(obiekt->getId(),0x22);
}
