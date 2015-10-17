#include <stdio.h>

int main()
{
  int p, q, i, j, n, max, a, b;
  
  while (scanf("%d %d", &p, &q) == 2)
  {
    if (p < q) {
      a = p; b = q;
    } else {
      a = q; b = p;
    }

    max = 0;
    j = 0;
    for (i = a; i <= b; i++)
    {
      j = 1;
      n = i;
      while (n > 1)
      {
        ++j;
        if (n % 2) {
          n = (3 * n) + 1;
        } else {
          n = n / 2;
        }
      } /* end while */

      if (max < j) { max = j; }
    } /* end for a to b */
    printf("%d %d %d\n", p, q, max);
  } /* end while scanf */
  return 0;
}

