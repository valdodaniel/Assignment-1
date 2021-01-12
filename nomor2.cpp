#include <stdio.h>  
#include <stdlib.h>
   

struct node{  
    int data;  
    struct node *next;  
};      
   

struct node *head, *tail = NULL;  
   
  
void CreateNode(int data) {  
   
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
   
    if(head == NULL) {  
        
        head = newNode;  
        tail = newNode;  
    }  
    else {  
      
        tail->next = newNode;  
        
        tail = newNode;  
    }  
}  
   
void rangeNode() {  
    struct node *current = head;  
    int min, max;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        
        min = max = head->data;  
          
        while(current != NULL){  
            if(min > current->data) {  
                min = current->data;  
            }
            if(max < current->data){
                max = current->data;
            }
        current= current->next;  
        }          
        printf("Maximum value node in the list: %d\n", max);
        printf("Minimum value node in the list: %d\n", min);  
        printf("Range between max and min in the list: %d\n",max-min);
    }  
}  
      
int main()  
{  
    int n;
    printf("Banyak data yang akan diinput [Int]: ");
    scanf("%d",&n);
    if(n>0){
        int x;
        printf("Input %d data tersebut [Int]: ",n);
        while(n--){
            scanf("%d",&x);
            CreateNode(x);
        } 
    }
    
    rangeNode();   
    return 0;  
}
