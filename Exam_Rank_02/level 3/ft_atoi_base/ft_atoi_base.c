#include <unistd.h>
#include <stdlib.h>

int control(char c, int str_base)
{
    int i = 0;
    char nums[] = "0123456789abcdef";
    char nums2[] = "0123456789ABCDEF";

    while(i <= str_base)
    {
        if(nums[i] == c || nums2[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    if(str[i] == '-' )
    {
        sign *= -1;
        i++;
    }

    while(str[i] && control(str[i],str_base))
    {
        if(str_base <= 10)
            res = (res * str_base) + str[i] - '0';
        else
            if(str[i] >= '0' && str[i] <= '9')
                res = (res * str_base) + str[i] - '0';
            else if(str[i] >= 'a' && str[i] <= 'f')
                res = (res * str_base) + str[i] - 'a' + 10;
            else if(str[i] >= 'A' && str[i] <= 'F')
                res = (res * str_base) + str[i] - 'A' + 10;
        i++;
    }
    return res * sign;
}
#include <stdio.h>

int main()
{
    char *str = "345";
    printf("%d",ft_atoi_base(str,16));
}