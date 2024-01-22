#include "hash.h"

int CRH1::get_hash(std::string input) const
{
	std::cout << "This is crh1\n";
	return 1;
}

int CRH2::get_hash(std::string input) const
{
	std::cout << "This is crh2\n";
	return 2;
}

int SHA32::get_hash(std::string input) const
{
	std::cout << "This is sha32\n";
	return 3;
}

int SHA64::get_hash(std::string input) const
{
	std::cout << "This is sha64\n";
	return 4;
}