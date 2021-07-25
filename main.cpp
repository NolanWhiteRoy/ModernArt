#include <iostream>

using namespace std;

int main ()
{
  int M = 0, N = 0, K = 0, j = 0;
  cin >> M >> N >> K;
  bool g[M][N] = { 0 };		//m n
  char p;
  char pp[K];			//k
  int poopoo[K];		//k

  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
	{
	  g[i][j] = 0;
	}
      cout << endl;
    }

  for (int i = 0; i < K; i++)
    {
      cin >> pp[i] >> poopoo[i];
    }

  for (int i = 0; i < K; i++)
    {
      p = pp[i];
      j = poopoo[i] - 1;

      if (p == 'R')
	{

	  for (int m = 0; m < N; m++)
	    {
	      g[j][m] = !g[j][m];
	    }
	}
      else if (p == 'C')
	{
	  for (int n = 0; n < M; n++)
	    {
	      g[n][j] = !g[n][j];
	    }
	}
    }
  int cnt = 0;
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
	{
	  //cout << g[i][j];
	  if (g[i][j] == 1)
	    cnt++;
	}
      //cout << endl;
    }
  cout << cnt;
  return 0;
}