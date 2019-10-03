#include <stdio.h>
 
int main()
{
    int t, n;
    
    scanf("%d", &t);
 
    while(t--)
    {
        int countA[101] = {0};
        int countB[101] = {0};
        int maxC1 = 0;
        int maxW1 = 0;
        int maxC2 = 0;
        int maxW2 = 0;
        int x;
        
        scanf("%d", &n);
        int i;
        
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            
            countA[x]++;
 
                if(countA[x] == maxC1 && x > maxW1)
                {
                    maxW1 = x;
                    maxC1 = countA[x];
                }
                else if (countA[x] > maxC1)
                {
                    maxW1 = x;
                    maxC1 = countA[x];
                }
        }
        
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            
            countB[x]++;
            
               if(countB[x] == maxC2 && x > maxW2)
                {
                    maxW2 = x;
                    maxC2 = countB[x];
                }
                else if (countB[x] > maxC2)
                {
                    maxW2 = x;
                    maxC2 = countB[x];
                }
        }
        
        if(maxW1 > maxW2)
        {
            printf("Rupam\n");
        }
        else if(maxW2 > maxW1)
        {
            printf("Ankit\n");
        }
        else
        {
            printf("Tie\n");
        }
            
        
    }
    
    return 0;
}
