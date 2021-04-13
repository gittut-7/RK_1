#include "sum.h"
#include <gtest/gtest.h>

TEST(sum, test) {
    EXPECT_EQ(sum(3, 5), 8);
}