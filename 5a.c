#include<stdio.h>
int comparestring(char str1[],char str2[])
{
int i=0;
while(str1[i]!='\0'&&str2[i]!='\0'){
    if(str1[i]!=str2[i]){
        return(str1[i]-str2[i]) ;
    }
    i++;}
return(str1[i],str2[i]);
}
int main(){
char str1[100],str2[100];
printf("enter the first string:");
fgets(str1,sizeof(str1),stdin);
printf("enter the second string:");
fgets(str2,sizeof(str2),stdin);
for(int i=0;str1[i]!='\0';i++){
    if(str1[i]=='\n'){
        str1[i]='\0';
        break;
    }
}
for(int i=0;str2[i]!='\0';i++){
    if(str2=='\n'){
        str2[i]='\0';
        break;
    }
}
int result = comparestrings(str1,str2);
   if(result==0){
    printf("the strings are equal.\n");
   }else if(result<0){
   printf("the first string is smaller than the second string.\n");
   }else{
   printf("the first string is greater than the second string.\n");
   }
   return 0;
}



