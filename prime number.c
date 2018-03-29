#include <stdio.h> 

main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

 for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

 if (c == 2) {
  printf("n Yes");
  }
  else {
  printf("n No");
  }
  return 0;    
}
