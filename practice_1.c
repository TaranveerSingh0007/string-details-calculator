#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;
    int vowels=0 ,consonants=0 ,digits=0 ,spaces=0;

    printf("WORD INPUT CALCULATOR: \n");

    printf("enter a string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
           {
            vowels++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            consonants++;
        }
        else if(str[i]>='0'&& str[i]<='9'){
            digits++;
        }else if(str[i]==' '){
            spaces++;
        }
        i++;
    }
    printf("\n COMPONENTS: \n");

    printf("vowels=%d \n",vowels);
    printf("constants=%d \n",consonants);
    printf("digits=%d \n",digits);
    printf("spaces=%d",spaces);

    return 0;
}