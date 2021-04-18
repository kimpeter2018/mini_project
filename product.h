#include <stdio.h>

typedef struct {
	char prodName[20];
	int weight;
	int price;
	float rating;
	int numOfStars;
} Products;

int addProduct(Products *p);
void readProduct(Products p);
int updateProduct(Products *p);
int selectMenu();
int deleteProduct(Products *p);
