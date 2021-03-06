#include "product.h"
#include "manager.h"
#include <stdlib.h>
int main(){
	int menu;
	int index = 0, count = 0;
	Products p[100];

	FILE *fp;
	if (fopen("products.txt", "r")){
		count = loadData(p);
		index = count;
	}
	else{
		printf("=> 파일 없음\n");
		fp = fopen("products.txt","w");
		fclose(fp);
	}

	while(1)
	{
		menu = selectMenu();
		if(menu == 0)
			break;

		if(menu == 2){
			count+= addProduct(&p[index++]);
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
			updateProduct(&p[no-1]);
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
				if(deleteProduct(&p[no-1]))
					count--;
			}
		}
		else if(menu == 5){
			saveData(p, index);
		}
		else if(menu == 6){
			searchData(p, index);
		}

	}
	printf("종료됨!\n");
	return 0;
}
