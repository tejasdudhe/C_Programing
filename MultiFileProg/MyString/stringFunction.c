#include <stdio.h>

// String Built-in Replica Functions...........
int strLength(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len = len + 1)
        ;

    return len;
}

void strCopy(char str1[], char str2[])
{
    int i;
    for (i = 0; str2[i] != '\0'; i = i + 1)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}

void strConcat(char str1[], char str2[])
{
    int i;

    int len = strLength(str1);
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[len++] = str2[i];
    }
    str1[len] = '\0';
}

int strCompare(char str1[], char str2[])
{
    int len1 = strLength(str1);
    int len2 = strLength(str2);

    if (len1 > len2)
    {
        return 1;
    }
    else if (len1 < len2)
    {
        return -1;
    }
    else
    {

        for (int i = 0; str1[i] != '\0'; i = i + 1)
        {
            if (str1[i] > str2[i])
            {
                return 1;
            }
            else if (str1[i] < str2[i])
            {
                return -1;
            }
        }
    }

    return 0;
}

void revString(char str[])
{
    int len = strLength(str);

    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void subString(char str[], int start, int end)
{
    int len = strLength(str);

    char sub[len];
    int idx = 0;
    for (int i = start; i <= end; i = i + 1)
    {
        sub[idx++] = str[i];
    }
    sub[idx] = '\0';

    printf("%s", sub);
}

//.......................................................................

// LAB EXERCISE 6 ....STRING:

void Occurrence(char str[], char ch)
{
    int c = 0;
    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        if (str[i] == ch)
        {
            c = c + 1;
        }
    }

    printf("The Number of Occurrences of %c in given String is %d ", ch, c);
}

void countBlankSpc(char str[])
{
    int c = 0;
    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        if (str[i] == ' ') // 32
        {
            c = c + 1;
        }
    }

    printf("The Number of Blank spaces in given String is %d ", c + 1);
}

void numOfWord(char str[])
{
    int len = strLength(str);
    int i, count = 0;
    for (i = 0; i < len; i = i + 1)
    {
        if (str[i] == 32 || str[i] == '\0')
        {
            if (str[i + 1] != 32) // Banana Apple Mango
            {
                count = count + 1;
            }
        }

        if (str[i] == '\0')
            break;
    }

    printf("The Number of words in given String is %d ", count);
}

void vowelCount(char str[])
{
    int c = 0;
    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            c = c + 1;
        }
    }

    printf("The Number of Vowels in given String is %d ", c);
}

void revWordS(char str[])
{

    int len = strLength(str);
    int i, start = 0;
    for (i = 0; i <= len; i++)
    {

        if (str[i] == '\0' || str[i] == 32)
        {
            int end = i - 1;
            int l = end - start;
            for (int k = start, j = end; k <= j; k++, j--)
            {
                int temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
            start = i + 1;
        }
    }
}

void strToInt(char str[])
{
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            int curr = str[i] - 48;

            num = num * 10 + curr;
        }
        else{
            printf("The String contain Non Numeric value...");
            return;
        }
    }

    printf("%d", num);
}