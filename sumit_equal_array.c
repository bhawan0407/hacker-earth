#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, y, z;
        scanf("%d %d %d %d", &n, &x, &y, &z);
        
        int i;
        int arr[n];
        
        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            
            while(arr[i] % x == 0)
            {
                arr[i] /= x;
            }
            
            while(arr[i] % y == 0)
            {
                arr[i] /= y;
            }
            
            while(arr[i] % z == 0)
            {
                arr[i] /= z;
            }
        }
        
        int res = 1;
        
        for(i = 1; i < n; i++)
        {
            if(arr[i] != arr[i-1])
            {
                res = 0;
                break;
            }
        }
        
        if(res)
        {
            printf("She can\n");
        }
        else
        {
            printf("She can't\n");
        }
        
    }
}
