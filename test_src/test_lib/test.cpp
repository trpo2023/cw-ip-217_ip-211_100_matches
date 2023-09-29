#include <ctest.h>

#include <logic.h>

CTEST(GameLogicTest_Suite, Not_End_Of_Game)
{
    const int mc = 1;
    const int mx = 100;

    const int result = EndOfGame(mc, mx);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(GameLogicTest_Suite, End_Of_Game)
{
    const int mc = 100;
    const int mx = 100;

    const int result = EndOfGame(mc, mx);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(GameLogicTest_Suite, Sum_Of_Nums)
{
    const int x = 100;
    const int y = 100;

    const int result= Addition(x, y);

    const int expected = 200;
    ASSERT_EQUAL(expected, result);
}

CTEST(GameLogicTest_Suite, Compliance_With_The_Rules)
{
    const int input = 1;
    const int mc = 99;
    const int mx = 100;

    const int result= ComplianceWithTheRules(input, mc, mx);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(GameLogicTest_Suite, Incongruity_With_The_Rules)
{
    const int input = 2;
    const int mc = 99;
    const int mx = 100;

    const int result= ComplianceWithTheRules(input, mc, mx);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}