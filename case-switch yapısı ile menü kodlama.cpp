//Fatih Şen
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	printf(" Lutfen menuden birini seciniz.\n\n 0'dan N'e kadar olan cift sayilari toplama = 1\n\n 0'dan N'e kadar X'in katlarini toplama = 2\n\n N faktoriyel hesaplama = 3\n\n Cikmak icin = 0\n\n");      
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	int N , a , X , toplam1=0 , toplam2=0 , toplam3=1;
	scanf("%d" , &a);
	switch(a)
	{
		case 1 :
			
			printf("Lutfen bir N degeri giriniz:");
			scanf("%d" , &N);
			for(int i=0 ; i<=N ; i=i+2)
			{
				toplam1+=i;
			}
			printf("0'dan %d'e kadar olan cift sayilarin toplami= %d\n" , N ,  toplam1);
			break;
			
			case 2 :
				
				printf("Lutfen bir N degeri giriniz:");
				scanf("%d" , &N);
				printf("Lutfen bir X degeri giriniz:");
				scanf("%d" , &X);
				for(int i=0 ; i<=N; i= i+X)
				{
					toplam2+=i;	
				}
				printf("0'dan %d'e kadar %d'in katlari toplami= %d\n" , N, X,  toplam2);
				break;
				
				case 3 :
					
					printf("Lutfen bir N degeri giriniz:");
				    scanf("%d" , &N);
				    for(int i=1; i<=N ; i++ )
				    {	
					   toplam3*=i;	
				    }
				    printf("%d faktoriyel= %d\n" , N , toplam3);
				    break;
				    
				    case 0 :
				    	
				    	printf("Cikmayi tercih ettiniz.\nHoscakalin ^_^\n");
				    	break;
				    	
				    	default :
				    		
				    		printf("Gecersiz bir deger girdiniz!!!\n");
				    		break;
	}			    		
				    		system("pause");
					        return 0 ;
				    
				    
				    
	
}
