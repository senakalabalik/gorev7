#include <iostream>
#include <stdlib.h>
#include <vector>
int main(int argc, char** argv)
{

int rows=atoi(argv[2]);
int cols= (argc-3)/rows;
std::vector<int>invector;
std::vector< std::vector<int> > matrix ;
int newline=0;
for (int i = 0; i < rows; i++) {
	invector.clear();		
	for (int j = 0; j < cols; j++) {	
		if (newline==0 ){
			invector.push_back(atoi(argv[1])*atoi(argv[3+j+newline]));
		}
		else {
			invector.push_back(atoi(argv[3+j+newline]));
		}			
	}
	newline=newline+cols;
	matrix.push_back(invector);
}
	
for (int i=0; i<matrix.size(); i++) {
	for (int j=0; j<matrix[i].size(); j++) {
		std::cout << matrix[i][j] << " ";
	}
	std::cout << "\n" ;
	}
}

