#include <iostream>
#include <cctype>

using namespace std;

string RemovePunctuation(string UserString)
{
	
	string RemovedPunctString = "";

	for (short i = 0 ; i < UserString.length() ; i++)
	{
		if (!ispunct(UserString[i]))
		{
			RemovedPunctString += UserString[i];
		}
	}
	
	return RemovedPunctString;
}

int main()
{
	string UserString = "Hello, I'm Mahmoud; from, @ProgrammingAdvices";

	cout << "String before removing punc\n";
	cout << UserString << "\n\n";

	cout << "String after removing punc\n";
	cout << RemovePunctuation(UserString) << "\n\n";

	return 0;
}


