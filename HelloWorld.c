#include <stdio.h>
int main() {
  int x, y, z, temp;
  // �����������������մӴ�С��� 
  scanf("%d %d %d", &x, &y, &z); 
  if ( y < z ) {
  	temp = y;
	y = z;
	z = temp; 
  }
  else if ( x < y ) {
  	temp = x;
	x = y;
	y = temp; 
  }
  else if ( y < z ) {
  	temp = y;
	y = z;
	z = temp; 
  }
  printf("%d, %d, %d\n", x, y, z);
  return 0;
  
  
  
  
}
