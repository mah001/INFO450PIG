// pLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>
using namespace std;
string PigLatin(string word);
bool vowelWord(char charactor);
string word;
int main()
{

	do {
		cout << "To exit type 'Quit' or " << "Please enter a word to translate into Pig Latin: ";
		cin >> word;

		cout << "That translates to: "
			<< PigLatin(word) << endl;

	}

	while (word != "Quit");

	return 0;
}

string PigLatin(string word)

{
	if (vowelWord(word.at(0))) {
		return word + "ay";
	}
	else {
		return word.substr(1, word.length() - 1) +
			word.at(0) + "ay";
	}
}
bool vowelWord(char charactor)

{
	const string VOWELS = "aeiouAEIOU";
	return (VOWELS.find(charactor) != string::npos);
}


