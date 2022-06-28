#include <iostream>
using namespace std;
// Write any include statements here

string getWrongAnswers(int N, string C) {
  string res = C;
  for (int i = 0; i < N; i++) {
    C[i] == 'A' ? res[i] = 'B' : res[i] = 'A';    
  }
  return res;
}

int main() {
    cout << getWrongAnswers(3, "ABA");
    return 0;
}