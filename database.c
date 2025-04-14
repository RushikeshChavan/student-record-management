#include <stdio.h>
  struct students
  {
    char name[5];
    int roll_no;
  };
  
int main()
{
  int n, e, d, a, u, k, t=0, m=0;
  
  printf("Enter the no. of students :- ");
  scanf("%d",&n);
  
  struct students s[n+5]; 
  for(int i=0; i<n; i++){
      
      printf("Enter the name of student no. %d :-",i+1);
      scanf("%s",s[i].name);
      
      printf("Enter the roll no. of student no. %d :-",i+1);
      scanf("%d",&s[i].roll_no);
      
      printf("\n\n");
  }
  
  printf("\n-----\tYour current data is\t-----\n");
  for(int i=0; i<n; i++){
      printf("The name of student no. %d is %s\nThe roll no. is %d ",i+1,s[i].name,s[i].roll_no);
      printf("\n\n");
  }
  
 while(m==0){ 
  
  printf("\n\n1.Insertion\n2.Delition\n3.Updation\n4.Display\n5.Exit\n");
  printf("Enter your choice :- ");
  scanf("%d",&a);
  printf("\n\n");
  
  switch(a){
         
    case 1:printf("Enter the posion where you want to insert new students data :- ");
           scanf("%d",&e);
           e--;
         
        for(int i=n; i>e; i--){
            
            s[i]=s[i-1];
        }
           printf("Enter the name of new student :- ");
           scanf("%s",s[e].name);
        
           printf("Enter the roll no. of new student :- ");
           scanf("%d",&s[e].roll_no);
           n++;
        
           break;
        
    case 2:printf("Enter the position which you want to delete :- ");//for deleting
           scanf("%d",&d);
           d--;
        
       for(int i=d; i<n; i++){
               s[i]=s[i+1];
        }
         n--; 
         break;
        
    case 3:t=0;
           printf("Enter the position of student which you want to update :- ");
           scanf("%d",&u);
           u--;
        
      while(t==0){
        
        printf("\n1.Name\n2.Roll No.\n3.Exit\n");
        printf("Enter the the curresponding no. what you want to update :- ");
        scanf("%d",&k);
        
       switch(k){
           
           case 1:  printf("Enter the correct name of student :- ");
                    scanf("%s",s[u].name);break;
        
           case 2:  printf("Enter the correct roll no. of student :- ");
                    scanf("%d",&s[u].roll_no);break;
                    
           case 3:  t=10; break;           
                    
          default:  printf("Please enter the correct option from above") ;       
       } 
     } break;
     
    case 4:printf("\n\n-----\tYour current data is\t-----\n\n");
            for(int i=0; i<n; i++){
                printf("\n\nThe name of student no. %d is %s\nThe roll no. is %d ",i+1,s[i].name,s[i].roll_no);
                printf("\n\n");
           
            } break;
            
    case 5:m=10; break;
    
    default:printf("Please enter valid number");    
    }  
 }
    return 0;
}
