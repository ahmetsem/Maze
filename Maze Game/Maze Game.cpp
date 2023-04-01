

#include<stdio.h>


int main(){
	
int N,S,bA,bN,flag=1,fA,fB;
int counter=0;
char ch;
int first_c,second_c;
char map_size[50][50];
scanf("%d %d",&N,&S);
	int i,j;
	for(i=0;i<N;i++){
    	if(i==0||i==N-1){
		  for(j=0;j<S;j++)
			map_size[i][j]='*';}
	else
		{
		map_size[i][0]='*';
		map_size[i][S-1]='*';				
		for(j=1;j<S-1;j++)
		map_size[i][j]=' ';
 
	   }
				}
while(1){
	scanf("%c",&ch);
	if (ch=='d')
	  break;
	scanf("%d%d ",&first_c,&second_c);
	if(ch=='s')	{	
	map_size[first_c][second_c]='O';		
        bA=first_c;
	bN=second_c;
	}
	if(ch=='f'){
	map_size[first_c][second_c]=' ';
	fA=first_c;
	fB=second_c;			    
	}
	if(ch=='b'){
	map_size[first_c][second_c]='*';	

	}
	if(ch=='X'){
	map_size[first_c][second_c]='X';
	}
	if(ch=='$'){
	map_size[first_c][second_c]='$';	
	}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
	char com; 
	while(flag==1&&(scanf("%c",&com))!=EOF){ 
		if(com=='u'){ 	
	  	if(bA-1==fA&&bN==fB){
		printf("CONGRATS! YOU GOT %d BONUS:)\n",counter);
		map_size[bA][bN]=' ';
		map_size[fA][fB]='O';
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");	
			break;
	}
	else 	if(map_size[bA-1][bN]=='*'){
		
		printf("INVALID MOVE. TRY ANOTHER DIRECTION!\n");
		map_size[bA-1][bN]='*';
		map_size[bA][bN]='O';	
	}
		
	else if(map_size[bA-1][bN]=='X'){
		
		printf("YOU MET WITH THE ENEMY AND LOST THE GAME :(\nGAME IS OVER!\n");
		map_size[bA-1][bN]='X';
		map_size[bA][bN]='O';
		
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
				
		break;
	}else if(map_size[bA-1][bN]=='$'){
		bA--;
		printf("YOU GOT 1 $.\n");
		map_size[bA][bN]='O';
		map_size[bA+1][bN]=' ';
		counter++;
	}
	else if(map_size[bA-1][bN]=' '){
	
		bA--;
		
		map_size[bA+1][bN]=' ';
		map_size[bA][bN]='O';		
	}

			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
}
	if(com=='d'){
	 if(bA+1==fA&&bN==fB){
		
		printf("CONGRATS! YOU GOT %d BONUS:)\n",counter);
		map_size[bA][bN]=' ';
		map_size[fA][fB]='O';
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
		
		break;
	}
		
	else 	if(map_size[bA+1][bN]=='*'){
		
		printf("INVALID MOVE. TRY ANOTHER DIRECTION!\n");
		
		map_size[bA][bN]='O';
	}
		
	else if(map_size[bA+1][bN]=='X'){
		
		printf("YOU MET WITH THE ENEMY AND LOST THE GAME :(\nGAME IS OVER!\n");
		map_size[bA+1][bN]='X';
		map_size[bA][bN]='O';
		
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
		
		
		break;
		
		
	}else if(map_size[bA+1][bN]=='$'){
		bA++;
		printf("YOU GOT 1 $.\n");
		map_size[bA][bN]='O';
		map_size[bA-1][bN]=' ';
		counter++;
	}else if(map_size[bA+1][bN]==' '){
		bA++;
 		map_size[bA-1][bN]=' ';
		map_size[bA][bN]='O';	
	}
	
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	} printf("\n");	
}
if(com=='r'){
		
		 if(bA==fA&&bN+1==fB){
		
		printf("CONGRATS! YOU GOT %d BONUS:)\n",counter);
		map_size[bA][bN]=' ';
		map_size[fA][fB]='O';
		
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
		
		
		break;	
	}else if(map_size[bA][bN+1]=='*'){
		
		printf("INVALID MOVE. TRY ANOTHER DIRECTION!\n");
		
		map_size[bA][bN]='O';
		
	}else  if(map_size[bA][bN+1]=='X'){
		
		printf("YOU MET WITH THE ENEMY AND LOST THE GAME :(\nGAME IS OVER!\n");
		map_size[bA][bN+1]='X'; map_size[bA][bN]='O';
		
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
			
		
		 break;
		
		
	}else if(map_size[bA][bN+1]=='$'){
		bN++;
		printf("YOU GOT 1 $.\n");
		map_size[bA][bN]='O';
		map_size[bA][bN-1]=' ';
		counter++;
	}else if(map_size[bA][bN+1]==' '){
		bN++;
		map_size[bA][bN-1]=' ';
		map_size[bA][bN]='O';
	
	}
	

			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
	
}
if(com=='l'){
	
			
	 if(bA==fA&&bN-1==fB){
		
		printf("CONGRATS! YOU GOT %d BONUS:)\n",counter);
		map_size[bA][bN]=' ';
		map_size[fA][fB]='O';
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
		
				
		break;		
	}
else 	if(map_size[bA][bN-1]=='*'){
		map_size[bA][bN]='O';
		
		printf("INVALID MOVE. TRY ANOTHER DIRECTION!\n");
		
	}
	
	else if(map_size[bA][bN-1]=='X'){
		
		printf("YOU MET WITH THE ENEMY AND LOST THE GAME :(\nGAME IS OVER!\n");
		map_size[bA][bN-1]='X';
		map_size[bA][bN]='O';
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
		
		
		break;
		
	}else if(map_size[bA][bN-1]=='$'){
		bN--;
		printf("YOU GOT 1 $.\n");
		map_size[bA][bN+1]=' ';
		map_size[bA][bN]='O';
		counter++;
	}else if(map_size[bA][bN-1]=' '){
		bN--;
		
		map_size[bA][bN+1]=' ';
		map_size[bA][bN]='O';
	}
			for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");	

}
if(com=='q'){


printf("YOU COULD NOT REACH THE FINAL POSITION :(\nGAME IS OVER!\n" );
	for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");

	flag=0;
}
				
	}
		if(map_size[bA][bN]!=map_size[fA][fB]){
	
		
	
	printf("YOU COULD NOT REACH THE FINAL POSITION :(\nGAME IS OVER!\n" );
	for(i=0;i<N;i++){
			for(j=0;j<S;j++){
			printf("%c",map_size[i][j]);
		}
		printf("\n");
	}printf("\n");
	

}

	return 0 ;
}

