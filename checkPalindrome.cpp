#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

bool checkPalindrome(std::string inputString) {
	int length = inputString.size();
	for (int i = 0; i < length/2; ++i)
	{
		if (inputString[i]!=inputString[length-1-i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	cout << checkPalindrome("aabaa") << endl;
	 cout << checkPalindrome("aabb") << endl; 
	
}



