#include "pch.h"
#include <iostream>
#include <string>
#include <string.h>
//using namespace std;

int main() {

	std::string str1 = "Hello";
	std::string str5 = "Hello";

	std::string str2 = "World";
	std::string str3;
	bool flag1 = (str1 == str2);
	bool flag5 = (str1 == str5);
	std::cout << "flag5 : " << flag5 << std::endl;

	std::cout << "flag1 : " << flag1 << std::endl;
	int  len;
	std::string s1("abc");
	std::string s2("def");
	std::string s3;
	s1.swap(s2);
	std::cout << "s1.swap : " << s1 << std::endl;
	std::cout << "s2.swap : " << s2 << std::endl;

	s3 = s1 + s2;
	s1 += s2;
	s1[0] = s1[1];
	std::cout << "s1 += s2: " << s1 << std::endl;
	std::cout << "s1 = " << s1[0] << std::endl;
	std::cout << "s3 = " << s3 << std::endl;



	
	// copy str1 into str3
	str3 = str1;
	//std::cout << "str3 : " << str3 << std::endl;

	// concatenates str1 and str2
	str3 = str1 + str2;
	//std::cout << "str1 + str2 : " << str3 << std::endl;

	// total length of str3 after concatenation
	len = str3.size();
	//std::cout << "str3.size() :  " << len << "\n";
	//std::cout << "str3.deneme() : " << str3.back() << std::endl;

	return 0;
}