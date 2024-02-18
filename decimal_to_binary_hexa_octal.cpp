/* Serhat Kamilcelebi*/
#include <stdio.h>
#include <stdlib.h>

 // decimal sayiyi binary donduruyor
 
void binary(int sayi){
	int i=0,a=0,b=0;
	int *rakam;
	rakam=(int*)calloc(100,sizeof(int)); 
		for(i=0;i<100;i++){
			if(sayi>1){
				rakam[i]=sayi%2;
				sayi=sayi/2;
			}
			else if(sayi==1){
				rakam[i]=1;
				break;
			}
			else if(sayi==0){
				rakam[i]=0;
				break;
			}
			else break;
		}
		for(i=99;i>=0;i--){
			if(a==0){
			
			if(rakam[i]!=0){
				a++;
				b++;
				}
			}
			if(b==1){
				printf("%d",rakam[i]);
		}
}
 free(rakam);
}

// decimal sayiyi octala donduruyor

void octal(int sayi){
	int i=0,a=0,b=0;
	int *rakam;
	rakam=(int*)calloc(100,sizeof(int)); 
		for(i=0;i<100;i++){
			if(sayi>8){
				rakam[i]=sayi%8;
				sayi=sayi/8;
			}
			else if(sayi<=8 && sayi>=0){
			rakam[i]=sayi%8;	
			break;
			}
			
			else break;
		}
		for(i=99;i>=0;i--){
			if(a==0){
			
			if(rakam[i]!=0){
				a++;
				b++;
				}
			}
			if(b){
				printf("%d",rakam[i]);
		}
}
	

free(rakam);
}

// decimal sayiyi hex donduruyor

void hexadecimal(int sayi){
		int i=0,a=0,b=0,c=0;
	int *rakam;
	rakam=(int*)calloc(100,sizeof(int)); 
		for(i=0;i<100;i++){
			if(sayi>16){
				rakam[i]=sayi%16;
				sayi=sayi/16;
			}
			else if(sayi<=16 && sayi>=10){
			rakam[i]=sayi%16;	
			break;
			}
			else if(sayi<10 && sayi>=0){
			rakam[i]=sayi%16;	
			break;
			}
			
			else break;
		}
		for(i=99;i>=0;i--){
			if(a==0){
			
			if(rakam[i]!=0){
				a++;
				b++;
				}
			}
			if(b){
				if(rakam[i]>=0 && rakam[i]<10)
				printf("%d",rakam[i]);
				else if(rakam[i]<=16 && rakam[i]>=10){
					c=rakam[i]%10;
					printf("%c",'A'+c);
				}
		}
}
	

free(rakam);
	
	
}

int main(){
	int sayi,karar;
	printf("bir sayi girin:");
	scanf("%d",&sayi);
	printf("\ngirdiginiz sayinin binary gosterimi:");
	binary(sayi);
	printf("\ngirdiginiz sayinin octal gosterimi:");
	octal(sayi);
	printf("\ngirdiginiz sayinin hexadecimal gosterimi:");
	hexadecimal(sayi);
	printf("\n");
	while(1){
		printf("\nDevam edelim mi (e/E | h/H)?\n");
		scanf(" %c",&karar);
		if(karar=='e' || karar=='E'){
		printf("bir sayi girin:");
		scanf("%d",&sayi);
		printf("\ngirdiginiz sayinin binary gosterimi:");
		binary(sayi);
		printf("\ngirdiginiz sayinin octal gosterimi:");
		octal(sayi);
		printf("\ngirdiginiz sayinin hexadecimal gosterimi:");
		hexadecimal(sayi);
		printf("\n");
		}
		else if(karar=='h' || karar=='H'){
			printf("\nSeans sona erdi.\n");
			break;
		}
	}
	system("pause");
	return 0;
}
