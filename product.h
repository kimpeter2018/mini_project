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
int listProduct(Products *p[], int count);
void searchProduct(Products *p[], int count);
int updateProduct(Products *p);
int loadProducts(Products *p[]);
int selectMenu();
void saveProducts(Products *p[], int count);
