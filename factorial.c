unsigned long factorial(unsigned n) {
  unsigned long fac = 1;
  for (unsigned int i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
}
