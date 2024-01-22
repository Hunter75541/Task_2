#include "hash.h"

int main()
{
	Get_Data_by_File data;
	data.setter("test.txt");
	SHA32 test_hash;
	int hash_res = test_hash.get_hash(data.getter());
	bool is_valid = Verification::verification(100, "Hello World!", &test_hash);
	
	Get_Data_by_Http data1;
	data1.setter("test.txt");
	CRH1 test_hash1;
	int hash_res1 = test_hash1.get_hash(data1.getter());
	bool is_valid1 = Verification::verification(100, "Hello World!", &test_hash1);
	
	
/*	CRH1 one;
	SHA32 two;
	SHA64 three;
	std::string str = "Test text";
	int hash;
	hash = one.get_hash(str);
	hash = two.get_hash(str);
	hash = three.get_hash(str);
	bool valid_result;
	valid_result = Verification::verification(100, str, &one);
	valid_result = Verification::verification(200, str, &two);
	valid_result = Verification::verification(100, str, &three);*/
}

