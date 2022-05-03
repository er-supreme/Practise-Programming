#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    set<int> save;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      save.emplace(a[i]);
    }

    cout << save.size() << endl;
  }
  return 0;
}
