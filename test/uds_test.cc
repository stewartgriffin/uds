#include <gtest/gtest.h>
#include <string>

#include "Uds.h"

TEST(HelloTest, BasicAssertions) {
    auto WriteDataById = new Uds::WriteDataByIdentifier();
    EXPECT_EQ(WriteDataById->getId(),0x22);
}
