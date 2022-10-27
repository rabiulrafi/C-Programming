#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }


  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }
/*
    transpose[0][0]= a[0][0]
    transpose[1][0]= a[0][1]
    transpose[2][0]= a[0][2]
    transpose[0][1]= a[1][0]
    transpose[1][1]= a[1][1]
    transpose[2][1]= a[1][2]

*/

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i){
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);

  }
  printf("\n");
  }

  return 0;
}