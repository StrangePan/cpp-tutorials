#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
  if (argc != 4)
  {
    cerr << "Usage: " << argv[0] << " <num lines> <lower> <upper>" << endl;
    return 1;
  }

  int numbers = atoi(argv[1]);
  int lower = atoi(argv[2]);
  int upper = atoi(argv[3]);

  if (lower >= upper)
  {
    cerr << "Bad input: !(" << lower << " < " << upper << ")" << endl;
    return 1;
  }

  srand(time(nullptr));

  for (int i = 0; i < numbers; ++i)
  {
    cout << (lower + rand() % (upper - lower + 1)) << "\n";
  }
  cout.flush();
}

