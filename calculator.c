#include <stdio.h>
#include <math.h>

int add ();
int sub ();
int mult ();
int div ();
int sqr ();
unsigned long factorial ();
int binaryToDecimal();
unsigned long decimalToBinary();
void dashes();

int main(){
    int choice;

    while(choice != 0){
        printf("Please choose an operator: [ add(1), subtract(2), multiply(3), divide(4), square(5), factorial(6), binary to decimal conversion(7), decimal to binary conversion(8), exit(9)]: \n");
        scanf("%d",&choice);
        getchar();
        if (choice == 1){
            add();
            dashes();
        }

        else if (choice == 2){
            sub();
            dashes();
        }

        else if (choice == 3){
            mult();
            dashes();
        }

        else if (choice == 4){
            div();
            dashes();
        }

        else if (choice == 5){
            sqr();
            dashes();
        }

        else if (choice == 6){
            factorial();
            dashes();
        }

        else if (choice == 7){
            binaryToDecimal();
            dashes();
        }

        else if (choice == 8){
            decimalToBinary();
            dashes();
        }

        else if (choice == 9){
            printf("Thank you for using this calculator!");
            break;
        }
    }
}

int add ()
{
    int a, b;

    printf("Enter first Number: \n");
    scanf("%d", &a);
    printf("Enter second Number: \n");
    scanf("%d", &b);
    int result = a + b;
    printf("Result = %d\n", result);


}

int sub ()
{
    int a, b;

    printf("Enter first Number: \n");
    scanf("%d", &a);
    printf("Enter second Number: \n");
    scanf("%d", &b);
    int result = a - b;
    printf("Result = %d\n" , result);
}

int mult ()
{
    int a, b, i;

    printf("Enter first Number: \n");
    scanf("%d", &a);
    printf("Enter second Number: \n");
    scanf("%d", &b);
    for (i = 0; i <= b; i++){
        printf("%d\n", i * a);
    }
    int result = a * b;
    printf("Result = %d\n", result);
}

int div ()
{
    int a, b, i;
    long c;

    printf("Enter first Number: \n");
    scanf("%d", &a);
    printf("Enter second Number: \n");
    scanf("%d", &b);
    for (i = 1; i <= b; i++){
        c = a / i;
        printf("%d\n", c);
    }
    int result = a / b;
    printf("Result = %d\n", result);
}

int sqr (){
    int exp, base, i;
    int result = 1;

    printf("Input base: \n");
    scanf("%d",&base);
    printf("Input exp: \n");
    scanf("%d",&exp);

    for (i = 0; i < exp; ++i){
        result *= base;
    }
    printf("%d^%d = %d\n", base, exp, result);
}

unsigned long factorial ()
{
    int a, b;
    unsigned long long sum = 1;

    printf("Input a number: \n");
    scanf("%d", &b);

    for (a = 1; a <= b; ++a){
        sum *= a;
    }
    printf("Result = %d%llu\n",b,sum);
}

int binaryToDecimal(){
	unsigned long binary = 0;
   	int decimal = 0, i = 0, rem;
	printf("Enter a binary:\n");
	scanf("%lu", &binary);

	while (binary != 0){
		rem = binary % 10;
        binary /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
	 printf("Result: ");
     printf("%d\n", decimal);
}

unsigned long decimalToBinary(){
	int decimal = 0;
	int rem, i = 1;
	unsigned long binary = 0;

	printf("Enter a decimal:\n");
	scanf("%d", &decimal);

    while (decimal != 0) {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * i;
        i *= 10;
    }
	  printf("Result: ");
      printf("%lu\n", binary);
}

void dashes()
{
	for (int i =0; i < 50; i++){
		printf("-");
    }
	printf("\n");
}