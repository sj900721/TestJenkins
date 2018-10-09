//
// Created by shaojian on 18-10-9.
//

#include <gtest/gtest.h>
#include "src/Queue.h"

class QueueTest : public ::testing::Test {
protected:
    void SetUp() override {
        q1.Enqueue(1);
        q2.Enqueue(2);
        q2.Enqueue(3);
    }

    Queue<int> q0;
    Queue<int> q1;
    Queue<int> q2;
};

TEST_F(QueueTest, IsEmptyInitially)
{
    EXPECT_EQ(q0.size(), 0);
}