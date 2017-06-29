//#include <stdio.h>
int ft_strlen(char *str)
{
char *q=str;

while(*q!='\0')
q++;

return(q-str);
}

//int main()
//{
//ft_strlen("asdsadadsadsada");
//}