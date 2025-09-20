#include "gtest/gtest.h"
#include "growingTree.h"


TEST(GrowingTreeTest, BasicCases) {
    EXPECT_EQ(growingTree(10, 1, 10), 1);
    EXPECT_EQ(growingTree(3, 1, 5), 2);
}


TEST(GrowingTreeTest, OneDayCompletion) {
    EXPECT_EQ(growingTree(10, 5, 5), 1);
    EXPECT_EQ(growingTree(8, 3, 8), 1);
    EXPECT_EQ(growingTree(15, 2, 10), 1);
}


TEST(GrowingTreeTest, MultipleDays) {
    EXPECT_EQ(growingTree(2, 1, 5), 4);
    EXPECT_EQ(growingTree(3, 1, 7), 3);
    EXPECT_EQ(growingTree(5, 3, 10), 4);
}


TEST(GrowingTreeTest, ImpossibleCases) {
    EXPECT_EQ(growingTree(1, 1, 5), -1);
    EXPECT_EQ(growingTree(0, 1, 5), -1);
    EXPECT_EQ(growingTree(5, 2, 0), -1);
    EXPECT_EQ(growingTree(5, 2, -1), -1);
    EXPECT_EQ(growingTree(-1, 2, 10), -1);
}


TEST(GrowingTreeTest, ExactHeightCases) {
    EXPECT_EQ(growingTree(4, 2, 6), 2);
    EXPECT_EQ(growingTree(6, 3, 9), 2);
    EXPECT_EQ(growingTree(7, 2, 15), 3);
}


TEST(GrowingTreeTest, EdgeCases) {
    EXPECT_EQ(growingTree(1, 0, 1), 1);
    EXPECT_EQ(growingTree(1, 0, 2), 2);
    EXPECT_EQ(growingTree(1, 1, 1), 1);
    EXPECT_EQ(growingTree(100, 50, 250), 4);
}