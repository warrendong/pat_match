#include<stdio.h> 
int main()
{
    int sum=0;
    char ch,s[4];                                               
    char b[10][5]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while ((ch = getchar()) != '\n')     
        sum += (ch - '0');
    sprintf(s, "%d", sum);              
    for (int i = 0; s[i] != 0; i++){
        if (i > 0) 
            printf(" ");
        printf("%s", b[s[i]-'0']);
    }
    return 0;
}
