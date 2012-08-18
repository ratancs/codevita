#include <stdio.h>
#include<string.h>
 
int check_anagram(char [], char []);
 
int main()
{
   char s[1000],a[100], b[100];
   int flag,i,len;
 
   gets(s);
	i=0; 
	len=strlen(s);
while(len)
{
 	  for(j=0;s[i]!=" ";j++)
			a[j]=s[];
				
   

   flag = check_anagram(a, s);
 
   if (flag == 1)
      printf("\"%s\" and \"%s\" are anagrams.\n", a, b);
   else
      printf("\"%s\" and \"%s\" are not anagrams.\n", a, b);
 
   return 0;
}
 
int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, c = 0;
 
   while (a[c] != '\0')
   {
      first[a[c]-'a']++;
      c++;
   }
 
   c = 0;
 
   while (b[c] != '\0')
   {
      second[b[c]-'a']++;
      c++;
   }
 
   for (c = 0; c < 26; c++)
   {
      if (first[c] != second[c])
         return 0;
   }
 
   return 1;
}
