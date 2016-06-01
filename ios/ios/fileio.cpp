#include <fstream>
#include <iostream>
#include <string>
#include "string.h"
using namespace std;

/*	read file by chars: used for file like text.digital .etc
	distinguish two simaliar method: get() and get(char&)
*/

void ReadFromChars(const std::string& filename)
{
	ifstream fin = ifstream(filename, std::ios::in);

	if (!fin.is_open())
	{
		std::cout << "open char file " << filename << " failed!" << std::endl;
		return;
	}

	char ch;
	int i = 1;

	while ((ch = fin.get()) != EOF)
	{
		std::cout << ch;
		if (ch == '\n')
		{
			i++;
		}
	}

	/*
	while (fin.get(ch))
	{
		std::cout << ch;
		if (ch == '\n')
		{
			i++;
		}
	}
	*/
	cout << endl << "line:" << i << endl;
	fin.close();

}

/*	read file by lines: used for line-oriented format file
	Distinguish two similar method: std::getline and basic_istream::getline
*/

void ReadFileByLines(const std::string& filename)
{
	ifstream fin = ifstream(filename, std::ios::in);

	if (!fin.is_open())
	{
		std::cout << "open char file " << filename << " failed!" << std::endl;
		return;
	}
	/*
	string strBuf;
	while (std::getline(fin, strBuf))
	{
		std::cout << strBuf << std::endl;
	}
	*/

	char buf[256];
	while (fin.getline(buf, 256))
	{
		std::cout << buf << std::endl;
	}
	
	
	fin.close();
}


/*	read file by Byte: often used for Binary/image/voice/vedio file .etc
	pay attention to methods:
	istream& read(char* buffer, int len);
	istream& seekg(long dis, seek_dir ref=ios::beg);
	ostream& write(const char* buffer, int len);
	ostream& seekp(long dis, seek_dir ref=ios::beg);
	std:::ios::beg  std::ios::cur  std::ios::end
*/

void ReadFromBytes(const std::string& filename)
{
	fstream fio = fstream(filename, std::ios::out | std::ios::in | std::ios::binary);

	if (!fio.is_open())
	{
		std::cout << "open binary file " << filename << " failed!" << std::endl;
		return;
	}
	
	//data to write
	int intData = 1;
	long longData = 100;
	char charData = 'c';
	char strData[] = "string";

	fio.write((char*)&intData, sizeof(int));
	fio.write((char*)&longData, sizeof(long));
	fio.write(&charData, sizeof(char));
	fio.write(strData, strlen(strData));

	std::cout << "write data to binary file :" << std::endl;
	std::cout << "intData : " << intData << std::endl;
	std::cout << "longData : " << longData << std::endl;
	std::cout << "charData : " << charData << std::endl;
	std::cout << "strData : " << strData << std::endl;

	int intData1;
	long longData1;
	char charData1;
	int len = strlen(strData);
	char *strData1 = new char(len + 1);
	
	fio.seekg(0, std::ios::beg);
	fio.read((char*)&intData1, sizeof(int));
	fio.read((char*)&longData1, sizeof(long));
	fio.read(&charData1, sizeof(char));
	fio.read(strData1, len);
	strData1[len] = '\0';



	std::cout << "read data from binary file :" << std::endl;
	std::cout << "intData1 : " << intData1 << std::endl;
	std::cout << "longData1 : " << longData1 << std::endl;
	std::cout << "charData1 : " << charData1 << std::endl;
	std::cout << "strData1 : " << strData1 << std::endl;


	fio.close();

}

int main(int argc, char* argv[]) 
{
	ReadFileByLines("tmp.txt");

	ReadFromChars("tmp.txt");

	ReadFromBytes("tmp.dat");
	
	return 0;
}