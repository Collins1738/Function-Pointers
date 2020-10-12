#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int end();


int main (void)
{
  int (*ops[5]) (int d, int e);
	/* IMPLEMENT ME: Insert your algorithm here */
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  ops[0] = add;
  ops[1] = subtract;
  ops[2] = multiply;
  ops[3] = divide;
  ops[4] = end;
  
  int ans = (*ops[c])(a, b);
  printf("%d \n", ans);
	return ans;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int end () { exit(0); }