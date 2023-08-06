#include <stdio.h>

int main() {
  // Declare variables to store the two numbers and the operator.
  int num1, num2;
  char operator;

  // Get the two numbers and the operator from the user.
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  // Switch on the operator to perform the appropriate operation.
  switch (operator) {
    case '+':
      // Addition
      printf("%d + %d = %d\n", num1, num2, num1 + num2);
      break;
    case '-':
      // Subtraction
      printf("%d - %d = %d\n", num1, num2, num1 - num2);
      break;
    case '*':
      // Multiplication
      printf("%d * %d = %d\n", num1, num2, num1 * num2);
      break;
    case '/':
      // Division
      if (num2 == 0) {
        printf("Error: Division by zero.\n");
      } else {
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
      }
      break;
    default:
      // Invalid operator
      printf("Error: Invalid operator.\n");
      break;
  }

  return 0;
}

