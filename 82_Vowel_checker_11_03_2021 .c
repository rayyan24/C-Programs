#include<stdio.h>
int main()
{

    char alphabet;
    printf("Enter the alphabet\n");
    scanf("%c",&alphabet);
    if(alphabet=='a'|| alphabet=='e'|| alphabet=='i'|| alphabet=='o' || alphabet=='u') 
        {
            printf("Enter alphabet is a vowel(small)");
        }
    else if(alphabet=='A'|| alphabet=='E'|| alphabet=='I'|| alphabet=='O' || alphabet=='U') 
        {
            printf("Enter alphabet is a vowel(CAPITAL)")
        }
    else
    {
        printf("Entered alphabet is constant");
    }
    
return 0;
}