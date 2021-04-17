#include "product.h"
#include "manager.h"

void listProducts(Products *p[], int count){
		printf("상품명 중량 가격 별점 별점개수\n");
		printf("==================================\n");
		for(int i=0;i<count;i++){
			if(p[i]==NULL) continue;
			printf("%2d. ", i + 1);
			readProduct(*p[i]);
		}
		printf("\n");
}

int selectDataNo(Products *p[], int count){
	int no;
	listProducts(p,count);
	printf("번호는(취소:0)? ");
	scanf("%d", &no);
	return no;
}

#if 0
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
			scanf("%d", &deleteof);
			if(deleteok ==1)
			{
				if(sp[no-1])
					free(sp[no-1]);
				sp[no-1] = NULL;
				count--;
			}
		}
	}
	printf("종료됨!\n");
	return 0;
}
#endif
