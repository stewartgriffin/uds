#include <gtest/gtest.h>
#include <string>

#include "Uds.h"

TEST(UdsTest, ServiceIds) {
    auto WriteDataById = new Uds::WriteDataByIdentifier();
    EXPECT_EQ(WriteDataById->getId(),0x2E);

    auto ReadDataById = new Uds::ReadDataByIdentifier();
    EXPECT_EQ(ReadDataById->getId(),0x22);
}

TEST(UdsTest, DataProcessing) {
    auto WriteDataById = new Uds::WriteDataByIdentifier();
    auto feed1 = new std::vector<char>{'t', 'e', 's', 't', '1', ' '};
    auto feed2 = new std::vector<char>{'t', 'e', 's', 't', '2', ' '};
    auto feed3 = new std::vector<char>{'t', 'e', 's', 't', '3', ' '};
    WriteDataById->feedData(feed1);
    WriteDataById->feedData(feed2);
    WriteDataById->feedData(feed3);
}