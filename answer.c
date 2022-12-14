#include<stdio.h>


int main()
{   
    char a[26];
    int choice;
    for(int i = 0; i < 26; i++){
        if(i > 14) a[i] = 'A' + i;
        else a[i] = 'a' + i;
    }

    for(int i = 0; i < 26; i++){
        printf("%c",a[i]);
    }
    while(1)
    {
        printf("\nEnter 1 to right-rotate\nEnter 2 to flip\nEnter 3 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :{

                char t = a[25]; 
                for(int i = 25; i >= 1; i--){
                    a[i] = a[i-1];
                }
                a[0] = t - 'A' + 'a';
                a[15] = a[15] - 'a' + 'A';
                for(int i = 0; i < 26; i++){
                    printf("%c",a[i]);
                }
            }
                
            break;
            case 2:
            {
                for(int i = 0; i < 5; i++){
                    char t = a[25 - i];
                    a[25 - i] = a[15 + i]; 
                    a[15 + i] = t;
                }
                for(int i = 0; i < 26; i++){
                    printf("%c",a[i]);
                }
            }
            break;
            case 3: return 0;
            break;
            default : printf("Enter a valid option.\n");

        }
    }
    
    return 0;
}
