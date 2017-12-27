#include "headers/sense.h"

using namespace std;

void sense(char color, const vector< vector <char> > & grid, vector< vector <float> > & beliefs,  float p_hit, float p_miss) 
{
	const int height = grid.size();
	const int width = grid.size();

	for (int i=0; i<height; ++i) {
		for (int j=0; j<width; ++j) {
          	if ( grid[i][j] == color ) {
				beliefs[i][j] *= p_hit;
			} else {
            	beliefs[i][j] *= p_miss;
            }
		}
	}
}
