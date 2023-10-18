#include <stdio.h>
int testpalindrome( char [ ] );
int main()
{
    char str[ 100 ];
    int i = 0;
    
    printf("given character array: " );
    do{
        scanf("%c", &str[ i ] );
        i++;
    } while ( str[ i - 1 ] != '\n');
    
    if ( testpalindrome( str ) )
    puts( "given string is palindrome. ");
    else
    puts( "given string is not palindrome. " );
}
int paltest(char st[], int a,  int b){
    if( a==b ) return 1;
    if(st[a] != st[b]) return 0;
    if(a <b + 1) return paltest (st, a + 1, b - 1);
    return 1;
}
int testpalindrome( char s[]) {
    int i, j = 0;
    char x [100];
    for(i = 0; s[i] != '\n'; i++) {
        if('a' <= s [i] && s[i] <= 'Z')
        x[ j++] = s[i];
    }
    if( j == 0 ) return 1;
    return paltest ( x, 0, j - 1);
}
    



