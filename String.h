#include<stdlib.h>
void swap( char *a, char *b )
{
    *a += *b - ( *b = *a );
}

unsigned int strLen( char *a )
{
    int i=0;
    while( a[i]!='\0' )
        i++;
    return i;
}

void* memSet( void *a, int c, unsigned n )
{
    void * pointer = a;
    while( n-- )
    {
        *(char *)a = (char)c;
        a = (char *)a + 1;
    }
    return pointer;
}

int memCmp( char *a, char *b, int n )
{
    unsigned char* s1=a;
    unsigned char* s2=b;
    while(n--)
    {
        if( *s1 != *s2 )
            return (*s1 > *s2 ? 1 : -1);
        s1++;
        s2++;
    }
    return 0;
}

int strCmp( char *a, char *b )
{
    int m=strLen(a);
    int n=strLen(b);
    m>n ? n=m : n;
    while( n-- )
    {
        if( *a != *b )
            return ( *a > *b ? 1 : -1 );
        a++;
        b++;
    }
    return 0;
}

char* strCat( char *a, char *b )
{
    char *pointer = a;
    int m=strLen(a);
    int n=strLen(b);
    while( n-- )
    {
        *(a+m)=*b;
        b++;
        a++;
    }
    *(a+m)='\0';
    return pointer;
}

char* strCpy( char *a, char *b )
{
    memSet(a,'\0',strLen(a));
    int n=strLen(b);
    char *pointer=a;
    while( n-- )
    {
        *a = *b;
        a++;
        b++;
    }
    *a='\0';
    return pointer;
}

char* strRev( char *a )
{
    int n=strLen(a);
    for( int i=0,j=n-1; j>i; j--,i++ )
        swap( &a[i],&a[j] );
    a[n]='\0';
    return a;
}

char* strLwr( char *a )
{
    int n=strLen(a);
    char *pointer=a;
    while( n-- )
    {
        if( *a>='A' && *a<='Z' )
            *a = (char)(*a+32);
        a++;
    }
    return pointer;
}

char* strChr( char *a, char c )
{
    int n=strLen(a);
    while( n-- )
    {
        if( *a == c )
            return a;
        a++;
    }
    return '\0';
}

char* strUpr( char *a )
{
    int n=strLen(a);
    char *pointer=a;
    while( n-- )
    {
        if( *a>='a' && *a<='z' )
            *a = *a-32;
        a++;
    }
    *a='\0';
    return pointer;
}

char* strStr( char *a, char *b )
{
    int n = strLen(b);

    while(*a != '\0')
    {
        if( !memCmp(a, b, n) )
            return a;
        a++;
    }
    return '\0';
}
