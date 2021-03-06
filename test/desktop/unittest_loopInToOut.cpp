#include "gtest/gtest.h"

#include "mocks/hal_mock.h"

#include "loopInToOut.h"

using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;

class loopInToOut_Test : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        m_loopInToOut = new LoopInToOut(hal_mock);
    }

    virtual void TearDown()
    {
        delete m_loopInToOut;
    }

    NiceMock<Hal_mock> hal_mock{};
    LoopInToOut* m_loopInToOut{nullptr};
};

//     Test case name    Precondition_action_expectation
TEST_F(loopInToOut_Test, loop_readsInput)
{
    EXPECT_CALL(hal_mock, digitalRead(_)).WillOnce(Return(true));

    m_loopInToOut->loopThrough(1, 2);
}

TEST_F(loopInToOut_Test, loop_inputHigh_returnsHigh)
{
    ON_CALL(hal_mock, digitalRead(_)).WillByDefault(Return(true));

    ASSERT_TRUE(m_loopInToOut->loopThrough(1, 2));
}

TEST_F(loopInToOut_Test, loop_inputHigh_writesCorrectOutputHigh)
{
    ON_CALL(hal_mock, digitalRead(_)).WillByDefault(Return(true));

    EXPECT_CALL(hal_mock, digitalWrite(2, true));

    m_loopInToOut->loopThrough(1, 2);
}

// More tests, e.g. low state etc.
