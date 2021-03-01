void copy_string(char *str1, char *str2)
{
  while(*str2 != '\0'{
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1='\0';
}
