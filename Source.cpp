#include <Source.h>

Source::Source(string f_name) {
	source_file_name = f_name;
	source_stream.open(source_file_name.c_str(),ios::in);	
	line_no = -1;
}

Source::~Source() {
	file_data.clear();
	source_stream.close();
}	

vector<string> Source::read_file() {
	string single_line;
	if(source_stream.is_open()) {
		while(source_stream.good()) {
			getline(source_stream,single_line);
			file_data.push_back(single_line);
		}
	}	
	return file_data;
}
