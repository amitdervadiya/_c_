#include <stdio.h>

int main() {
  int arr[5][5] = {
    {2, 4, 1, 6, 3},
    {9, 5, 4, 6, 7},
    {8, 2, 6, 3, 5},
    {3, 4, 8, 5, 1},
    {2, 3, 9, 5, 7}
  };

  int sum = 0;

  for (int i = 0; i < 5; i++) {
    printf("%d", arr[i][0]);
    sum += arr[i][0];
 
    printf("%d", arr[i][4]); 
    sum += arr[i][4];
    printf("\n");
  }


  for (int i = 1; i < 4; i++) {
    printf("%d", arr[0][i]); 
    sum += arr[0][i];
    printf("%d", arr[4][i]); 
    sum += arr[4][i];
      printf("\n");
  }



  printf("Sum of boundary elements is: %d\n",sum);

}
