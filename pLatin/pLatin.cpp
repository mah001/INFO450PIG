// pLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
string PigLatin(string word);
bool vowelWord(char charactor);

int main()
{
	string word;
	do {
		cout << "To exit type 'Q1' or " << "Please enter a word to translate into Pig Latin: ";
		cin >> word;

		cout << "That translates to: "
			<< PigLatin(word) << endl;



	}

	while (word != "Q1" && word != "q1");

	return 0;
}

string PigLatin(string word)

{
	if ((word == "for") || (word == "of") || (word == "to") || (word == "the")
		|| (word == "a") || (word == "and") || (word == "but") || (word == "nor") || (word == "so") || (word == "yet") || (word == "or"))
	{
		return word;
	}


	else if (vowelWord(word.at(0))) {
		return word + "ay";
	}
	else {
		return word.substr(1, word.length() - 1) +
			word.at(0) + "ay";
	}
}
bool vowelWord(char charactor)

{
	string isVowel = "aeiouAEIOU";
	return (isVowel.find(charactor) != string::npos);
}