#include "product.h"

int addProduct(Products *p){
	printf("상품 이름은? ");
	scanf("%s", p->prodName);
	printf("중량은? ");
	scanf("%d", &p->weight);
	printf("가격은?? ");
	scanf("%d", &p->price);
	printf("별점은? ");
	scanf("%f", &p->rating);
	printf("별점 개수는? ");
	scanf("%d", &p->numOfStars);
	printf("추가 성공!\n");
	return 1;
}
void readProduct(Products p){
	printf("%s  %d  %d  %.1f  %d\n", p.prodName, p.weight, p.price, p.rating, p.numOfStars);
}

int updateProduct(Products *p){
	printf("상품 이름은? ");
	scanf("%s", p->prodName);
	printf("중량은? ");
	scanf("%d", &p->weight);
	printf("가격은? ");
	scanf("%d", &p->price);
	printf("별점은? ");
	scanf("%f", &p->rating);
	printf("별점 개수는? ");
	scanf("%d", &p->numOfStars);
	printf("수정 성공!\n");
	return 1;
}


int selectMenu(){
	int menu;
	printf("\n*** 쇼핑몰 만들기***\n");
	printf("1. 조회\n");
	printf("2. 상품 추가\n");
	printf("3. 상품 수정\n");
	printf("4. 상품 삭제\n");
	printf("5. 상품 저장\n");
	printf("6.상품 찾기\n");
	printf("0. 종료\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}


#if 0
int main(){
	int menu;
	Products p;
	while(1)
	{
		menu = selectMenu();
		if(menu == 0)
			break;

		if(menu == 2){
			addProduct(&p);
			}
		else if(menu == 1){
				readProduct(p);
		}
		else if(menu == 3){
			updateProduct(&p);
			}
		else if(menu == 4)
			deleteProduct(&p);
	}
}
#endif
