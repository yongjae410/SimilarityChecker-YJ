#include "pch.h"
#include "../TDD_string_similarity/SimilarityChecker.cpp"

using namespace std;

class SimilarityFixture : public testing::Test
{
public:
	SimilarityChecker sc;
};

TEST_F(SimilarityFixture, Test1)
{
	EXPECT_EQ(sc.getScore("ASD", "DSA"), 60);
	EXPECT_EQ(sc.getScore("A", "BB"), 0);
	EXPECT_EQ(sc.getScore("AAABB", "BAA"), 20);
}