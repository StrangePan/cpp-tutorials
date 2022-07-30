#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  cout << "File name: ";
  string filename;
  cin >> filename;

  ifstream fin(filename);

  if (!fin)
  {
    cerr << "Missing or empty file: " << filename << endl;
    return 1;
  }

  long long total = 0;
  int positive_count = 0;
  int negative_count = 0;

  for (int n; fin >> n;)
  {
    if (n < 0)
      negative_count++;
    else
      positive_count++;

    total += n;
  }

  fin.close();

  cout << "Sum: " << total << endl;
  cout << "Average: " << ((double) total / (double) (positive_count + negative_count)) << endl;
  cout << "Positive: " << positive_count << endl;
  cout << "Negative: " << negative_count << endl;
  cout << "Total: " << (positive_count + negative_count) << endl;
  return 0;
}

