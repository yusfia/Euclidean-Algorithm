// EuclieanAlgorithm.cpp : Defines the entry point for the console application.
// Yusfia Hafid Aristyagama TMDG 09 ITB

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int GCDEuclidean(int a, int b);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Find GCD's result using Euclidean Algorithm\n");
	while (true){
		printf("========Euclidean Algorithm========\n");
		int a;
		int b;
		char x;
		printf("Input a : ");
		cin>>a;
		if (!cin)break;
		printf("Input b : ");
		cin>>b;
		if (!cin)break;
		int result = GCDEuclidean(a,b);
		printf("Result : %d \n",result);
	
		printf("Do you want to exit? [Y/N]\n");
		cin>>x;
		if (!cin) break;
		if (x=='Y'||x=='y')break;
	}
	return 0;
}

int GCDEuclidean(int a, int b){
	int dividen,divisor;
	int gcdResult,remainder,quotient;
	if (a>b){
		divisor = b; dividen = a;
	}else{
		divisor = a; dividen = b;
	}
	quotient = dividen/divisor;
	remainder = dividen%divisor;
	gcdResult = divisor;
	while (remainder!=0){
		dividen = divisor;
		divisor = remainder;
		quotient = dividen/divisor;
		remainder = dividen%divisor;
		if (remainder==0) gcdResult = divisor;
	}
	return gcdResult;
}

