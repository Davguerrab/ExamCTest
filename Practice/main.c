/*
 * main.c
 *
 *  Created on: Apr 18, 2017
 *      Author: davidgue
 */

/*
void bigger(void) {
  int a = 6;
  int b = -20;
  (a+b > 6) ? printf("> 6") : printf("<= 6");
}

int sum(int a){
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}

int main(){
  int a = 2;
  int i = 0;

  for(i = 0; i < 5; i++)
  {
    printf("%d,", sum(a));
  }
  printf("\n");
  bigger();

  return 0;
}
*/

/*
#define SIZE 7

void foo(void *array, int size){
  char *begining = array;
  char *end = begining + size;
  char aux;

  while(begining < end) {
	aux = *--end;
    *end = *begining;
    *begining++ = aux;
  }
}

int main()
{
  char array[SIZE] = {1, 2, 3, 4, 5, 6, 7};
  foo(array,SIZE);
  for (int i = 0; i < SIZE ; i++){
	  printf("%ld", array[i]);
  }
  return 0;
}
*/


//@file question4.cpp

/////////////////////////////Programa de numeros primos ///////////////////////////////
/*
#define FINALNUM 68

void primeNumbers(int maxval){
	int flag = 0;
	for(int i = 1; i <= maxval; i++){
		for(int j = 1; j <= i; j++){
			if(i%j == 0){
				flag++;
			}
		}
		if(flag == 2){
			printf("Numero primo ");
			printf("%ld\n",i);
		}
		flag = 0;
	}
}

int main(){
	primeNumbers(FINALNUM);
	return 0;
}
*/

int main(){
	int num = 1255;
	printf("Modulo de X1 numero: ");
	printf("%ld\n", num%10);
	printf("Division de X1 numero: ");
	printf("%ld\n", num=num/10);
	printf("Modulo de X2 numero: ");
	printf("%ld\n", num%10);
	printf("Division de X2 numero: ");
	printf("%ld\n", num=num/10);
	printf("Modulo de X3 numero: ");
	printf("%ld\n", num%10);
	printf("Division de X3 numero: ");
	printf("%ld\n", num=num/10);
}
