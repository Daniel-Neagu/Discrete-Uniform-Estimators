#include "MapEstimator.h"

void print() { cout << "baeg;ba;gkbag" << endl; }

double calculateHarmonicSeries(int start, int end) {
  double sum = 0;
  cout << "Calculating.... ";
  for (int i = start; i <= end; i++) {
    sum += double(1.0 / i);
    if (i != end) {
      cout << to_string(sum) + ", ";
    } else {
      cout << to_string(sum) << endl;
    }
  }
  return sum;
}