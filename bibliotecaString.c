int strlen(char s[])
{
int i;
for (i = 0; s[i] != ’\0’; ++i);
return i-1;
}

char b[8], a[8];
strcpy(a, "abacate");
strcpy(b, a);