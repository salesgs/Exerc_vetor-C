#include<stdio.h>
int main(){
int j=0,i,vet[10];
 
for(i=0;i<10;i++){
printf("Digite os valores \n\n");
scanf("%i",&vet[i]);
}
         
		 for(i=0;i<10;i++){
	 
	       if(vet[i]%2==0){
		     j++;
		     printf(" %i valor par \n\n",j);   
		      
		      	      
		   }
	    
    } 



return 0;
}
