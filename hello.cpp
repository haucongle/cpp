#include </usr/local/Cellar/gcc/14.1.0_1/include/c++/14/bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
  time_t start, end;
  time(&start);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // WRITE YOUR CODE HERE
  freopen("HELLO.INP", "r", stdin);
  freopen("HELLO.OUT", "w", stdout);

  int n;
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  cout << sum;
  // END

  time(&end);
  double time_taken = double(end - start);
  cout << "\nTime taken by program is : " << fixed << time_taken << setprecision(5) << " sec";
  return 0;
}
