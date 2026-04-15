#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::sort
#include <functional>   // std::greater

using namespace std;

int main () {
  vector<int> myvector;

  myvector.push_back(3);
  myvector.push_back(1);
  myvector.push_back(2);

  // using default comparison (operator <):
  sort (myvector.begin(), myvector.end());

  cout << "using default comparison (operator <):";
  for (unsigned i=0; i<myvector.size(); i++)
    cout << ' ' << myvector[i];
  cout << '\n';

  // using function as comp
  sort (myvector.begin(), myvector.end(), greater<int>());

  cout << "using function as comp:";
  for (unsigned i=0; i<myvector.size(); i++)
    cout << ' ' << myvector[i];
  cout << '\n';

  return 0;
}   