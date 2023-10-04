#include <iostream>
#include <string>
#include <vector>
using namespace std;




string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

int countWordInString(string str, string delim)
{
	int pos = 0;
	int counter = 0;
	string word = "";

	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			counter++;
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		counter++;
	}
	return counter;
}
 
vector <string>splitString(string str, string delimiter)
{
	int pos = 0;
	string word = "";
	vector <string> vWords;

	while ((pos = str.find(delimiter)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			vWords.push_back(word);
		}
		str.erase(0, pos + delimiter.length());
	}
	if (str != "")
	{
		vWords.push_back(word);
	}
	return vWords;
}

void printVectorTokens(string str, string delim, vector<string>vWords)
{
	cout << "\n Tokens = " << countWordInString(str, delim) << endl;
	for (string& word : vWords)
	{
		cout << word << endl;
	}
}

int main()
{
	//       Mohammad   Abu-Hadhoud     Programming           Advices          
	string str = readString();
	string delim = " ";
	vector<string>vWords = splitString(str, delim);

	printVectorTokens(str, delim, vWords);


	system("pause>0");
	return main();

}