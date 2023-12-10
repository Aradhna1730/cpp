#include<stdio.h>
/*#include<conio.h>
char* reverse(char *p)
{
	int l,i;
	char t;

	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++)
		{
		   t=*(p+i);	
	      *(p+i)=*(p+l-i-1);
	      *(p+l-i-1)=t;
		}
return p;
}
main()
{
	//char *p="cdmputer";
	//printf("%s",p);
    //printf("%d",p);
    printf("%s",reverse("computer"));
	return 0;
}*/
int str_len (char *ptr)  
{  
    int i = 0;  
    while ( *(ptr + i) != '\0')  
    i++;  
    return i;  
} 
char* revstr(char *str1)  
{  
    // declare variable  
    int i, len, temp;  
    len =str_len(str1); // use strlen() to get the length of str string  
     printf("%d",len); 
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  printf("%s",str1);
    return str1;
}  
      
int main()  
    {  
        //char *str="hjgcykf"; // size of char string  
        printf (" Enter the string:xbfiyuiexi ");    
          
        //printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function   
          
        printf (" After reversing the string: %s",revstr("xbfiyuiexi"));  
    }  
