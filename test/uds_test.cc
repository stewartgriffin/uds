#include <gtest/gtest.h>
#include "Uds.h"

TEST(UdsTest, ServiceIds) {
    auto WriteDataById = new Uds::WriteDataByIdentifier();
    EXPECT_EQ(WriteDataById->GetId(),0x2E);

    auto ReadDataById = new Uds::ReadDataByIdentifier();
    EXPECT_EQ(ReadDataById->GetId(),0x22);
}

TEST(UdsTest, DataProcessing) {
    auto WriteDataById = new Uds::WriteDataByIdentifier();
    auto feed1 = new std::vector<char>{'t', 'e', 's', 't', '1', ' '};
    auto feed2 = new std::vector<char>{'t', 'e', 's', 't', '2', ' '};
    auto feed3 = new std::vector<char>{'t', 'e', 's', 't', '3', ' '};
    WriteDataById->FeedData(feed1);
    WriteDataById->FeedData(feed2);
    WriteDataById->FeedData(feed3);
}