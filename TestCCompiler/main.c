/*
 * main.c
 *
 *  Created on: Apr 11, 2017
 *      Author: davidgue
 */

#include <stdio.h>

int arr[3] = {5,3,7};
int *ptr = arr;

int eval(int *coeff, int x,int n){
	int pos = 0;
	int res = 0;
	printf("TEST DE COEFF\n");
	printf("%x\n",*coeff);
	while (n > 0){
		int xPow = x;
		int nT = n;
		while(nT > 1){
			xPow *= xPow;
			nT--;
		}
		printf("This is x: ");
		printf("%d\n",xPow);
		res += (*coeff++) * xPow;
		printf("This is res: ");
		printf("%d\n",res);
		n--;
		pos++;
	}
	if(n==0){
		res += *coeff;
	}
	printf("This is res: ");
	printf("%d\n",res);
	return res;
}

void evenlyDiv(int max){
	int num = 2520;
	int i = 1;
	int flag = 1;
	int numFinal;

	while(flag == 1){
		if((num % i) == 0){
			i++;
			if(i==max){
				flag=0;
			}
		}
		else{
			num = num + 2;
			i = 1;
		}
	}
	printf("Numero final; ");
	printf("%ld",num);
}

int main(){
	//int resFinal = eval(ptr,3,2);
	//printf("%ld",resFinal);
	evenlyDiv(21);

}
