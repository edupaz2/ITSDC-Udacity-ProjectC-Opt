#include "headers/zeros.h"

using namespace std;

void zeros(vector < vector <float> > & newGrid, int height, int width) {
	vector <float> newRow;
  	newGrid.reserve(height*width);
  	newRow.reserve(width);
  	newRow.assign(width, 0);
	for (int i=0; i<height; i++) {
		newGrid.push_back(newRow);
	}
}