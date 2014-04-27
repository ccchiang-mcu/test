//UVa-10055: Hashmat the Brave Warrior
//runtime: 0.065
#include <stdio.h>
int main( void )
{
    long long x,y;
    while (scanf("%lld %lld",&x,&y) == 2 )
    {
        printf("%lld\n",(x>y?x-y:y-x));
    }
    return 0;
}
