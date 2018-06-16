#include <stdio.h>

int main(){

int n ,m;
scanf("%d%d", &n,&m);


int num[n] , fnum[m];
for(int i = 0 ; i<n ; i++)	
	scanf("%d", &num[i]);

for(int i = 0 ; i<m ; i++)	
	scanf("%d", &fnum[i]);
	


for (int i= 0 ; i<n ; i++)
  for(int j=0 ; j<m ; j++){
		
		if(num[i] == fnum[j]){
			
			printf("%d " , num[i]);
			
			
			}
			

	  
	  }
	

}


