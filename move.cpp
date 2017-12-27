#include "headers/move.h"
#include "headers/zeros.h"

using namespace std;

void move(int dy, int dx, vector < vector <float> > & beliefs) 
{
	const int height = beliefs.size();
	const int width = beliefs[0].size();
	
  	for (int i=0; i<height; ++i) {
      	int new_i = (i + dy + height) % height;
		for (int j=0; j<width; ++j) {
			int new_j = (j + dx + width) % width;
			beliefs[new_i][new_j] = beliefs[i][j];
		}
	}
}
