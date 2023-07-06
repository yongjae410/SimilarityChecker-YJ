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
		int len1 = str1.length();
		int len2 = str2.length();
		int small = len2;

		double gap = len1 - len2;
		if (gap < 0)
		{
			gap = gap * -1;
			small = len1;
		}

		return 60 * (1 - gap / small);
	}

	int checkCharacter(string str1, string str2)
	{
		return 0;
	}
};