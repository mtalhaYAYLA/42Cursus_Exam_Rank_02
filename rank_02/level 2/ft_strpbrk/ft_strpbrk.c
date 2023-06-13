// char	*ft_strpbrk(const char *s1, const char *s2)
// {
//     int i = 0;
//     int j;
//     if (!s1 || !s2)
// 	{
// 		return (0);
// 	}
//     while (s1[i])
//     {
//         j=0;
//         while (s2[j])
//         {
//             if(s1[i] == s2[j])
//                 return (char *)&s1[i];
//             j++;
//         }
//         i++;
//     }                    
//     return(0);         
// }      
                                                                   //iki diziyi karşılaştırır ve bulunan adresi rturn eder. ;)

// char *ft_strpbrk(const char *s1, const char *s2)
// {
// 	int i = 0;
	
// 	if (!s1 || !s2)
// 	{
// 		return (0);
// 	}
// 	while(*s1)
// 	{
// 		i = 0;
// 	   	while(s2[i])
// 		{
// 			if(*s1 == s2[i])
// 				return (char *) s1;
// 			i++;
// 		}
// 		s1++;	
// 	}
// 	return (0);
// }


char	*ft_strpbrk(const char *s1, const char *s2)
{
    if(!s1 || !s2)
        return (0);
    char *i = (char *)s2;
    while (*s1)
    {
        s2 = i;
        while(*s2)
        {
            if(*s1 == *s2)
                return (char*) s1;
            s2++;
        }
        s1++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "esy";
    char *ret = strpbrk(cp1, cp2);

    printf("%s karakter dizisinde bulunan ilk karakterin değeri: %c, adresi: %p\n %p", cp1, *ret, ret,ft_strpbrk(cp1,cp2));

    return 0; 
}