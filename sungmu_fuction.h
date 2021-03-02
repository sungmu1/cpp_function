//string관련 함수
void strcpy_mine(char *str1, char *str2)
{
  while(*str2 != '\0'){
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1='\0';
}
	
int strcmp_mine(char *str1, char *str2){
	while(*str1 != '\0' && (*str1 == *str2)){
		str1++;
		str2++;
	}
	return *str1-*str2;
}

//리스트 관련 함수
void create_node (struct node *list, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
	  newnode->value = value;
    newnode->next = NULL;
    list->next = newnode;
};
void init_node(struct node *list, int value)
{
    list->value = value;
    list->next = NULL;
};
void delete_node(struct node *list)
{
    struct node *temp;
    temp = list;
    while(temp != NULL)
    {
            list = list->next;
            free(temp);
            temp = list;
    }
}

//문자관련
int char_to_int_mine(char a)
{
    return a-48;
}
