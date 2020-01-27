#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 128 /* can change the buffer size as well */
#define TOT 10 /* change to accomodate other sizes, change ONCE here */

int main(void) {
    char arr[10][11];
    FILE *plist = NULL; 
    int i = 0;
    int total = 0;

    plist = fopen("file.txt", "r");
    while(fgets(arr[i], BUF, plist)) {
        /* get rid of ending \n from fgets */
        arr[i][strlen(arr[i]) - 1] = '\0';
        i++;
    }

    total = i;

//    for(i = 0; i < total; ++i)
//        printf("%s\n", arr[i]);
        
        
        	 unsigned z;
	if (strlen(arr[0])+strlen(arr[1])<=10){
		  	strcat(arr[0],arr[1]);
		  
		  	if(strlen(arr[0])==8){
		  		strcat(arr[0],"++");

		  	 
			  }
			  
		  	if(strlen(arr[0])==7){
		  		strcat(arr[0],"+++");

		  	 
			  }
			  	if(strlen(arr[0])==6){
		  		strcat(arr[0],"++++");

		  	 
			  }
			  
			  

		  
		  if (strlen(arr[2])==10){
		  	strcpy(arr[9],arr[0]);		  
		  	strcpy(arr[0],arr[2]);
		  	strcpy(arr[2],arr[9]);
		  	
		  	     	
      		
      		
		  }
		  
	 	if (strlen(arr[3])+strlen(arr[4])==10){
		  	strcat(arr[3],arr[4]);
		  
		  	strcpy(arr[1],arr[3]);
		  	
		  	     	
      		
      		
		  }
	
		  		
		  	
			  }
			  
//			  	if (strlen(arr[0])!=10){
//		  			strcpy(arr[0],"++++++++++");
//			  }
//			   	if(strlen(arr[1])!=10   ){
//		  			strcpy(arr[1],"++++++++++");
//			  }
//			    	if(strlen(arr[2])!=10   ){
//		  			strcpy(arr[2],"++++++++++");
//			  }
//		  	if(strlen(arr[3])==10  ){
//		  			strcpy(arr[3],"++++++++++");
//			  }
//		  
//		  	if(strlen(arr[4])!=10  ){
//		  			strcpy(arr[4],"++++++++++");
//			  }
//		  
//		 	if(strlen(arr[5])!=10  ){
//		  			strcpy(arr[5],"++++++++++");
//			  }
//			  	if(strlen(arr[6])!=10  ){
//		  			strcpy(arr[6],"++++++++++");
//			  }
//			   	if(strlen(arr[7])!=10  ){
//		  			strcpy(arr[7],"++++++++++");
//			  }
//		   	if(strlen(arr[8])!=10  ){
//		  			strcpy(arr[8],"++++++++++");}
//		 
//              	if(strlen(arr[9])==10  ){
//		  			strcpy(arr[9],"++++++++++");}
        
             for( i = total ; i-- > 0 ; ){

	 
	
	 		printf("%s\n", arr[i]);
			 }


    return 0;
}
