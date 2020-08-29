#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node * next;
};

void traversal(struct node* ptr)
{
	while(ptr != NULL)
	{
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
}


struct node * insert_at_beg(struct node* ptr, int element)
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = ptr;
    head->data = element;
    return head;
}

void insert_at_end(struct node* ptr, int element)
{
    struct node *fourth;
    fourth = (struct node *)malloc(sizeof(struct node));
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = fourth;
	fourth->data = element;
	fourth->next = NULL;
	
}

void insert_at(struct node *ptr, int x, int element)
{
    int cnt = 0;
    while(cnt != x-1)
    {
        ptr = ptr->next;
        cnt++;
    }
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node *));
    new->next = ptr->next;
    ptr->next = new;
    new->data = element;
}

void insert_after(struct node *ptr, int x, int element)
{
    while(ptr!=NULL)
    {
        if(ptr->data == x){
            break;
        }
        ptr = ptr->next;
    }
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node *));
    new->next = ptr->next;
    ptr->next = new;
    new->data = element;
}

void delete_node(struct node *ptr, int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    while(ptr!=NULL)
    {
        if (ptr->next->data == x)
        {
            temp = ptr;
        }
        if (ptr->data == x)
        break;
        ptr= ptr->next;
        
    }
    temp->next = ptr->next;
    free(ptr);
}

int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	
	head->data = 7;
	head->next = second;
	
	second->data = 8;
	second->next = third;

	third->data = 9;
	third->next = NULL;
	
	traversal(head);
	printf("\n");
	//insert_at_end(head, 10);
	//traversal(head);
	insert_at(head, 1, 6);
	printf("\n");
	traversal(head);
	insert_after(head, 6, 0);
	printf("\n");
	traversal(head);
	delete_node(head, 6);
	traversal(head);
	return 0;
}
