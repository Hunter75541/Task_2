#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class ControlSum
{
		char *input_pointer;
	public:
		virtual int get_hash(std::string input) const =0;
};


class Verification
{
	public:
		static bool verification (int x0, std::string input, ControlSum *cs)
		{
			return cs->get_hash(input) == x0;
		}
};

class DataFetcher
{
protected:
	std::string arr;
public:
	virtual void setter(std::string obj) =0;
	virtual std::string getter() =0;
};

class Get_Data_by_File : public DataFetcher
{
public:
	void setter(std::string obj) 
	{
		char tmp;
		std::string path = obj;
		std::fstream pf;
		pf.open(path, std::fstream::in);
		if (!pf.is_open())
			{
				std::cout << "Error of the opening File!" << std::endl;
				exit (0);
			}
		else
			{
				while(!pf.eof())
					{
						pf >> tmp; 
						arr.push_back(tmp);
					}
			}
		pf.close();
	}
	std::string getter() 
	{
		return arr;
	}
};



class Get_Data_by_Http : public DataFetcher
{
public:
	void setter(std::string obj) 
	{
		char tmp;
		std::string path = obj;
		std::fstream pf;
		pf.open(path, std::fstream::in);
		if (!pf.is_open())
			{
				std::cout << "Error of the opening File!" << std::endl;
				exit (0);
			}
		else
			{
				while(!pf.eof())
					{
						pf >> tmp; 
						arr.push_back(tmp);
					}
			}
		pf.close();
	}
	std::string getter() 
	{
		return arr;
	}
};



/*class Get_Data_by_Http : public DataFetcher
{
	void getter(std::string obj) 
	{
		std::cout << "Get data from IP" << std::endl;
	}
	
};*/




class CRH : public ControlSum {};

class CRH1 : public CRH
{
	public:
		int get_hash(std::string input) const;
};

class CRH2 : public CRH
{
	public:
		int get_hash(std::string input) const;
};

class SHA : public ControlSum {};

class SHA32 : public SHA 
{
	public:
		int get_hash(std::string input) const;
};

class SHA64 : public SHA 
{
	public:
		int get_hash(std::string input) const;
};