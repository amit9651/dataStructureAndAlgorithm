#include <stdio.h>
#define MAX 20 

int main()
{
int arr[MAX],i,j,k,temp,n,xchanges;

printf ("\nEnter the number of elements : "); 
scanf ("%d",&n);
for (i = 0; i < n; i++){
	printf ("\nEnter element %d : ",i+1); 
	scanf ("%d",&arr[i]);
}
printf ("\nUnsorted list is :\n"); 
for (i = 0; i < n; i++)
	printf ("%d ", arr[i]); 
	printf ("\n");

/* Bubble sort*/
for (i = 0; i < n-1 ; i++) {
	xchanges=0;
	for (j = 0; j <n-1-i; j++) {
		if (arr[j] > arr[j+1]) {
			temp = arr[j]; 
			arr[j] = arr[j+1]; 
			arr[j+1] = temp; 
			xchanges++;
	}/*End of if*/ 
}/*End of inner for loop*/
if (xchanges==0) /*If list is sorted*/ 
	break;
printf("\nAfter Pass %d elements are : ",i+1); 
for (k = 0; k < n; k++)
	printf("%d ", arr[k]); 
	printf("\n");
}/*End of outer for loop*/ 
printf("\nSorted list is :\n"); 
for (i = 0; i < n; i++)
	printf("%d", arr[i]);
printf ("\n");
return 0;
}/*End of main()*/
