#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Database{
char *name;
int age;
int rollNo;
struct Database * next;
}db;

db *head=NULL;

void addNode(char *newName,int newage,int newrollNo){
  db *node = (db*)malloc(sizeof(db));
  int string_length = strlen(newName) + 1; //1 for null
  char *nm = (char *)malloc(string_length);
  strcpy(nm,newName);
  node->name = nm;
  //strcpy(node->name,nm);
  node->age = newage;
  node->rollNo = newrollNo;
  node->next = NULL;
  if (head == NULL){
    head = node;
  }
  else{
  head->next = node;
  }
}
void printNode(){
  db *temp =head;
  while(temp){
    printf("name of student = %s\n",temp->name);
    printf("age  of student = %d\n",temp->age);
    printf("roll no of student = %d\n",temp->rollNo);
    temp=temp->next;
  }
}
int main()
{
  char ch;
  while(1){
    printf("enter  n to terminate loop\n");
    printf("enter  a to add node \n");
    printf("enter  p to print node \n");
    scanf("%c",&ch);
    if (ch=='a'){
      int age;
      int rollNo;
      char name[20];
      printf("enter student age \n");
      scanf("%d",&age);
      printf("enter stduent roll number \n");
      scanf("%d",&rollNo);
      printf("enter name of the student \n");
      scanf("%s",name);
      addNode(name,age,rollNo);
    }
    if (ch=='p'){
      printNode();
    }  
    
    if (ch =='n'){
      break;  
    }
    ch=getchar();
  }


return 0;
}


