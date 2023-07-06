#include <string>

using namespace std;

class SimilarityChecker
{
public:
	int getScore(string str1, string str2)
	{
		if (str1.empty() || str2.empty())
		{
			return 0;
		}

		return checkLenght(str1, str2) + checkCharacter(str1, str2);
	}

private:
	int checkLenght(string str1, string str2)
	{
		int A = str1.length();
		int B = str2.length();

		if (A < B)
		{
			int temp = B;
			B = A;
			A = temp;
		}

		double GAP = A - B;
		if (GAP > B)
		{
			return 0;
		}

		return MAX_SCORE_LENGTH * (1 - GAP / B);
	}

	int checkCharacter(string str1, string str2)
	{
		return 0;
	}

	const int MAX_SCORE_LENGTH = 60;
};