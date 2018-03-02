//https://github.com/wuli133144/leetcode_questions.git

#include <stdio.h>
#include <string.h>

char* reverseString(char* s) {
      int i=0;
      char c=0;
      int len=strlen(s);
      //printf("length=%d",len);
      for(i=0;i < len/2;i++) 
      {   
          c=s[i];
          s[i]=s[len-i-1];
          s[len-i-1]=c;
           
      }
      return s;   
}



int main(int argc,char ** argv)
{
    char s[]="hello";
    printf("%s",reverseString(s));
    
}