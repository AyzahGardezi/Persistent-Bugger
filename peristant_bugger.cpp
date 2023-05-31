int persistence(long long n){
  int count = 0;
  while (n > 9)
    {
    long long m = n, res = 1;
    while (m)
      {
      res*= (m % 10);
      m /= 10;
      }
    n = res;
    count++;
    }
  return count;
  }
