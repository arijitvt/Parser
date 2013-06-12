#ifndef SOURCE_H_
#define SOURCE_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


class Source {
	
public:
	Source(string);
	vector<string>  read_file();
	~Source();
private:
	int line_no;
	string source_file_name;
	fstream source_stream;	
	vector<string> file_data;
};

#endif
