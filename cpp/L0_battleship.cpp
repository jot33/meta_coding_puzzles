#include <iostream>
#include <vector>
using namespace std;
// Write any include statements here

double getHitProbability(int R, int C, vector<vector<int>> G) {
  float hit_count = 0;
  float count = 0;
  for (int r = 0; r < R; r++) {
    for (int c = 0; c < C; c++) {
        // G[r][c] ? hit_count++ : 0;
        if (G[r][c]) hit_count++;
        count++;
    }
  }
  return hit_count / count;
}

int main() {
    vector<vector<int>> G = {{0,0,1,1},{1,0,1,1}};
    cout << getHitProbability(2,4,G);
}