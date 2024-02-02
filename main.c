//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int temp=5;
    struct node bea,a,b,*head,c ;
    a.value = temp;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    b.next=&c;
    c.value=11;
    c.next = NULL;

    
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    bea.next=&a;
    bea.value=2;
    head=&bea;
    printf("normal\n");
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next ->value ); //what value for 8
    printf("%d\n", head ->next ->next ->value);
    printf("%d\n", head ->next ->next ->next ->value);

    printf("for loop\n");
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
    //Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp = tmp->next;
          // What is missing???
        }
    printf("\nwhile\n");
    
    //Exercise IV change to while loop!! (you can use NULL to help)
    tmp=head;
         while(tmp!=NULL){
            //if (tmp==NULL) break;
            printf("%3d", tmp->value);
            tmp = tmp->next;
           // What is missing???
        }
    
    printf("\nmalloc\n");
    //typedef struct node* NodePtr;
    // nodePtr head,temp ;

    head = (NodePtr) malloc (sizeof(struct node));
    
    //head ->next= (NodePtr) malloc (sizeof(struct node));
    tmp = head ;
    
    // tmp->value = 2;
    // temp= (nodePtr) malloc (sizeof(struct node));

    // tmp = tmp->next;
    // tmp->value = 5;
    // temp= (nodePtr) malloc (sizeof(struct node));
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
    for (i=2 ;i<=11;i+=3){
        tmp->value=i;
        printf("%3d", tmp->value);
        if(i==11) tmp->next=NULL;
        else{
            tmp ->next = (NodePtr) malloc (sizeof(struct node));
            tmp = tmp->next;
        }
        
    }
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    printf("\nfree\n");
    while(head){
        tmp=head;
        head = head->next;
        printf("%3d", tmp->value);
        free (tmp);
    }
    return 0;
}
