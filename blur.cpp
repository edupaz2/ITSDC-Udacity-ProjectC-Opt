#include "headers/blur.h"

using namespace std;

void blur(vector < vector < float> > & grid) {

    // The const and/or static operator could be useful.
  	// Define and declare window, DX, and DY using the
    // bracket syntax: vector<int> foo = {1, 2, 3, 4} 
    // instead of calculating these vectors with for loops 
    // and push back
  
	const int height = grid.size();
	const int width = grid[0].size();
	static const float blurring = .12;
	static const float center = 1.0 - blurring;
	static const float corner = blurring / 12.0;
	static const float adjacent = blurring / 6.0;
  	static const vector < vector <float> > window = {{corner, adjacent, corner}, {adjacent, center, adjacent}, {corner, adjacent, corner}};

	static const vector <int> DX = {-1, 0, 1};
	static const vector <int> DY = {-1, 0, 1};// Eliminar?

	for (int i=0; i<height; ++i) {
		for (int j=0; j<width; ++j) {
			for (int ii=0; ii<3; ++ii) {
              	int new_i = (i + DY[ii] + height) % height;
				for (int jj=0; jj<3; ++jj) {
					int new_j = (j + DX[jj] + width) % width;
					grid[new_i][new_j] += grid[i][j] * window[ii][jj];
				}
			}
		}
	}
}
