#include "headers/initialize_beliefs.h"

using namespace std;

vector< vector <float> > initialize_beliefs(const int height, const int width) {

	vector< vector <float> > newGrid;
	vector<float> newRow;

  	const float size = height * width;
  	newGrid.reserve(size);
  	newRow.reserve(width);

  	const float prob_per_cell = 1.0 / size;

  	newRow.assign(width, prob_per_cell);
	for (int i=0; i<height; ++i) {		
		newGrid.push_back(newRow);
	}
	return newGrid;
}