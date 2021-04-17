#include "product.h"
#include "manager.h"
#include <stdlib.h>
int main(){
	int menu;
	int index = 0, count = 0;
	Products *p[100];
	while(1)
	{
		menu = selectMenu();
		if(menu == 0)
			break;

		if(menu == 2){
			p[index] = (Products *) malloc(sizeof(Products));
			count+= addProduct(p[index++]);
			}
		else if(menu == 1){
			if(count > 0)
				listProducts(p, index);
#ifdef DEBUG
			printf("DEBUG: %s  %d  %d  %.1f  %d\n", p.prodName, p.weight, p.price, p.rating, p.numOfStars);
#endif
			else
				printf("데이터가 없습니다\n");
		}
		else if(menu == 3){
			int no = selectDataNo(p, index);
			if(no == 0){
				printf("취소됨!\n");
				continue;
				}
			updateProduct(p[no-1]);
			}
		else if(menu == 4)
		{
			int no = selectDataNo(p, index);
			if(no == 0){
				printf("취소됨!\n");
				continue;
				}
			int deleteok;
			printf("정말로 삭제하시겠습니까?(삭제:1) ");
			scanf("%d", &deleteok);
			if(deleteok ==1)
			{
				if(p[no-1])
					free(p[no-1]);
				p[no-1] = NULL;
				count--;
			}
		}
	}
	printf("종료됨!\n");
	return 0;
}
