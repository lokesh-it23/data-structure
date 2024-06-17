WEEK 1 (SINGLE LINKED LIST) 

#include <stdio.h> 

int n = 0; 

void Insert(int a[], int p, int e); 

void Delete(int a[], int p); 

void Search(int a[], int e); 

void Traverse(int a[]); 

void Sort(int a[]); 

int main() 

{ 

int a[5], ch, e, p; 

printf("1.Insert \n2.Delete \n3.Search"); 

printf("\n4.Traverse \n5.Sort \n6.Exit\n"); 

do 

 { 

 printf("\nEnter your choice : "); 

 scanf("%d", &ch); 

 switch(ch) 

 { 

 case 1: 

 printf("Enter the position : "); 

 scanf("%d", &p); 

 printf("Enter the element : "); 

 scanf("%d", &e); 

 Insert(a, p, e); 

 break;  

 case 2: 

 printf("Enter the position : "); 

 scanf("%d", &p); 

 Delete(a, p); 

 break; 

 case 3: 

 printf("Enter the element : "); 

 scanf("%d", &e); 

 Search(a, e); 

 break; 

 case 4: 

 printf("The elements are : "); 

 Traverse(a); 

 break; 

 case 5: 

 Sort(a); 

 break; 

 } 

 } while(ch <= 5); 

return 0; 

} 

void Insert(int a[], int p, int e) 

{ 

int i; 

for(i = n; i >= p; i--) 

 a[i + 1] = a[i]; 

 a[p] = e; 

 n = n + 1; 

} 

void Delete(int a[], int p) 

{ 

int i; 

for(i = p; i < n; i++) 

 a[i] = a[i + 1]; 

 n = n - 1; 

} 

void Search(int a[], int e) 

{ 

int i, flag = 0; 

for(i = 0; i < n; i++) 

 { 

 if(e == a[i]) 

 { 

 flag = 1; 

 break; 

 } 

 } 

 if(flag == 1) 

 printf("Successful. Element %d is at location %d", e, i); 

else 

 printf("Unsuccessful."); 

} 

void Traverse(int a[]) 

 

{ 

int i; 

for(i = 0; i < n; i++) 

 printf("%d\t", a[i]); 

} 

void Sort(int a[]) 

{ 

int i, j, t; 

for(i = 0; i < n-1; i++) 

 { 

 for(j = i + 1; j < n; j++) 

 { 

 if(a[i] > a[j]) 

 { 

 t = a[i]; 

 a[i] = a[j]; 

 a[j] = t; 

 } 

 } 

 } 

} 

OUTPUT 

1.Insert  

2.Delete  

3.Search 

4.Traverse  

5.Sort  

6.Exit 

Enter your choice : 1 

Enter the position : 0 

Enter the element : 7 

Enter your choice : 4 

The elements are : 7	 

Enter your choice : 1 

Enter the position : 0 

Enter the element : 14 

Enter your choice : 4 

The elements are : 14	7	 

Enter your choice : 1 

Enter the position : 1 

Enter the element : 21 

Enter your choice : 4 

The elements are : 14	21	7	 

Enter your choice : 2 

Enter the position : 1 

Enter your choice : 4 

The elements are : 14	7	 

Enter your choice : 3 

Enter the element : 7 

Successful. Element 7 is at location 1
