#include <stdio.h>  
  
void  main()  

{  
    
    
    int arr[10],i,n; 
       printf("\n\n Enter  size of array:\n");
       scanf("%d",&n);
    printf("Input elements in the array :\n");  
    for(i=0; i<n; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 

    // printf("\n");

    //     for(i=0; i<n; i++)  
    // {    int v=arr[0];
    //      arr[i]=arr[i-1];
    //      printf("%d  ", arr[i]); 
    //      v++; 
    //    arr[n-1]=v;
    // } 


   






    printf("\n");	
}
