#include <stdio.h>
#include <time.h>
 
void merge(int [], int, int [], int, int []);
 
main() {
  int a[100], b[100], m, n, c, sorted[200];
     
 double cpu_time_used;
     
     start = clock();
  printf("input in first array\n");
  scanf("%d", &m);
 
  printf("input %d integers\n", m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }
 
  printf("inpus in second array\n");
  scanf("%d", &n);
 
  printf("input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }
 
  merge(a, m, b, n, sorted);
 
  printf("sorted array:\n");
 
  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }
 
  return 0;
}
 
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
 
  j = k = 0;
   for (i = 0; i < m + n;) {
   if (j < m && k < n) {
   if (a[j] < b[k]) {
      sorted[i] = a[j];
     j++;
     }
      else {
      sorted[i] = b[k];
      k++;
      }
      i++;
    }
    else if (j == m) {
   for (; i < m + n;) {
   sorted[i] = b[k];
   k++;
   i++;
   }
   }
   else {
   for (; i < m + n;) {
   sorted[i] = a[j];
   j++;
   i++;
    }
    }
} 



    end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

printf("time used is %f",cpu_time_used);


}
