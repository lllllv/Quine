#include <stdio.h>
#include <string.h>
char t[4000] = "\n"
               "char tmp[4000];\n"
               "char* cut_by_char(char* s, char c)\n"
               "{\n"
               "    static char* tmp;\n"
               "    if(s)\n"
               "        tmp = s;\n"
               "\n"
               "    if(*tmp == 0)\n"
               "        return NULL;\n"
               "    char* h = tmp;\n"
               "    while(*tmp!=0)\n"
               "    {\n"
               "        if(*tmp == c)\n"
               "        {\n"
               "            *tmp = 0;\n"
               "            tmp++;\n"
               "            return h;\n"
               "        }\n"
               "        tmp++;\n"
               "    }\n"
               "\n"
               "    return h;\n"
               "}\n"
               "\n"
               "void some_other_operation(int x, char y, double z)\n"
               "{\n"
               "    long DO_WHATEVER = x;\n"
               "\n"
               "    return;\n"
               "}\n"
               "\n"
               "int main()\n"
               "{\n"
               "    char cp[4000];\n"
               "    memcpy(cp, t, 4000);\n"
               "\n"
               "    int i = 0;\n"
               "    tmp[i++] = 35;\n"
               "    tmp[i++] = 105;\n"
               "    tmp[i++] = 110;\n"
               "    tmp[i++] = 99;\n"
               "    tmp[i++] = 108;\n"
               "    tmp[i++] = 117;\n"
               "    tmp[i++] = 100;\n"
               "    tmp[i++] = 101;\n"
               "    tmp[i++] = 32;\n"
               "    tmp[i++] = 60;\n"
               "    tmp[i++] = 115;\n"
               "    tmp[i++] = 116;\n"
               "    tmp[i++] = 100;\n"
               "    tmp[i++] = 105;\n"
               "    tmp[i++] = 111;\n"
               "    tmp[i++] = 46;\n"
               "    tmp[i++] = 104;\n"
               "    tmp[i++] = 62;\n"
               "    tmp[i++] = 10;\n"
               "\n"
               "    tmp[i++] = 35;\n"
               "    tmp[i++] = 105;\n"
               "    tmp[i++] = 110;\n"
               "    tmp[i++] = 99;\n"
               "    tmp[i++] = 108;\n"
               "    tmp[i++] = 117;\n"
               "    tmp[i++] = 100;\n"
               "    tmp[i++] = 101;\n"
               "    tmp[i++] = 32;\n"
               "    tmp[i++] = 60;\n"
               "    tmp[i++] = 115;\n"
               "    tmp[i++] = 116;\n"
               "    tmp[i++] = 114;\n"
               "    tmp[i++] = 105;\n"
               "    tmp[i++] = 110;\n"
               "    tmp[i++] = 103;\n"
               "    tmp[i++] = 46;\n"
               "    tmp[i++] = 104;\n"
               "    tmp[i++] = 62;\n"
               "    tmp[i++] = 10;\n"
               "\n"
               "    tmp[i++] = 99;\n"
               "    tmp[i++] = 104;\n"
               "    tmp[i++] = 97;\n"
               "    tmp[i++] = 114;\n"
               "    tmp[i++] = 32;\n"
               "    tmp[i++] = 116;\n"
               "    tmp[i++] = 91;\n"
               "    tmp[i++] = 52;\n"
               "    tmp[i++] = 48;\n"
               "    tmp[i++] = 48;\n"
               "    tmp[i++] = 48;\n"
               "    tmp[i++] = 93;\n"
               "    tmp[i++] = 32;\n"
               "    tmp[i++] = 61;\n"
               "    tmp[i++] = 32;\n"
               "    tmp[i++] = 34;\n"
               "\n"
               "    char blank[16];\n"
               "    memset(blank, 32, 15);\n"
               "    blank[15] = 0;\n"
               "\n"
               "    char* p = cut_by_char(cp, 10);\n"
               "    memcpy(tmp + i, p, strlen(p));\n"
               "    i += strlen(p);\n"
               "\n"
               "    tmp[i++] = 92;\n"
               "    tmp[i++] = 110;\n"
               "    tmp[i++] = 34;\n"
               "    tmp[i++] = 10;\n"
               "\n"
               "\n"
               "    p = cut_by_char(NULL, 10);\n"
               "    while(p)\n"
               "    {\n"
               "        memcpy(tmp + i, blank, 15);\n"
               "        i += 15;\n"
               "        tmp[i++] = 34;\n"
               "        memcpy(tmp + i, p, strlen(p));\n"
               "        i += strlen(p);\n"
               "        tmp[i++] = 92;\n"
               "        tmp[i++] = 110;\n"
               "        tmp[i++] = 34;\n"
               "        tmp[i++] = 10;\n"
               "        p = cut_by_char(NULL, 10);\n"
               "    }\n"
               "\n"
               "    i -= 4;\n"
               "    tmp[i++] = 34;\n"
               "    tmp[i++] = 59;\n"
               "    tmp[i++] = 10;\n"
               "    tmp[i] = 0;\n"
               "\n"
               "    char fmt[5] = {37, 115, 37, 115, 0};\n"
               "    printf(fmt, tmp,t);\n"
               "\n"
               "    return 0;\n"
               "}";

char tmp[4000];
char* cut_by_char(char* s, char c)
{
    static char* tmp;
    if(s)
        tmp = s;

    if(*tmp == 0)
        return NULL;
    char* h = tmp;
    while(*tmp!=0)
    {
        if(*tmp == c)
        {
            *tmp = 0;
            tmp++;
            return h;
        }
        tmp++;
    }

    return h;
}

void some_other_operation(int x, char y, double z)
{
    long DO_WHATEVER = x;

    return;
}

int main()
{
    char cp[4000];
    memcpy(cp, t, 4000);

    int i = 0;
    tmp[i++] = 35;
    tmp[i++] = 105;
    tmp[i++] = 110;
    tmp[i++] = 99;
    tmp[i++] = 108;
    tmp[i++] = 117;
    tmp[i++] = 100;
    tmp[i++] = 101;
    tmp[i++] = 32;
    tmp[i++] = 60;
    tmp[i++] = 115;
    tmp[i++] = 116;
    tmp[i++] = 100;
    tmp[i++] = 105;
    tmp[i++] = 111;
    tmp[i++] = 46;
    tmp[i++] = 104;
    tmp[i++] = 62;
    tmp[i++] = 10;

    tmp[i++] = 35;
    tmp[i++] = 105;
    tmp[i++] = 110;
    tmp[i++] = 99;
    tmp[i++] = 108;
    tmp[i++] = 117;
    tmp[i++] = 100;
    tmp[i++] = 101;
    tmp[i++] = 32;
    tmp[i++] = 60;
    tmp[i++] = 115;
    tmp[i++] = 116;
    tmp[i++] = 114;
    tmp[i++] = 105;
    tmp[i++] = 110;
    tmp[i++] = 103;
    tmp[i++] = 46;
    tmp[i++] = 104;
    tmp[i++] = 62;
    tmp[i++] = 10;

    tmp[i++] = 99;
    tmp[i++] = 104;
    tmp[i++] = 97;
    tmp[i++] = 114;
    tmp[i++] = 32;
    tmp[i++] = 116;
    tmp[i++] = 91;
    tmp[i++] = 52;
    tmp[i++] = 48;
    tmp[i++] = 48;
    tmp[i++] = 48;
    tmp[i++] = 93;
    tmp[i++] = 32;
    tmp[i++] = 61;
    tmp[i++] = 32;
    tmp[i++] = 34;

    char blank[16];
    memset(blank, 32, 15);
    blank[15] = 0;

    char* p = cut_by_char(cp, 10);
    memcpy(tmp + i, p, strlen(p));
    i += strlen(p);

    tmp[i++] = 92;
    tmp[i++] = 110;
    tmp[i++] = 34;
    tmp[i++] = 10;


    p = cut_by_char(NULL, 10);
    while(p)
    {
        memcpy(tmp + i, blank, 15);
        i += 15;
        tmp[i++] = 34;
        memcpy(tmp + i, p, strlen(p));
        i += strlen(p);
        tmp[i++] = 92;
        tmp[i++] = 110;
        tmp[i++] = 34;
        tmp[i++] = 10;
        p = cut_by_char(NULL, 10);
    }

    i -= 4;
    tmp[i++] = 34;
    tmp[i++] = 59;
    tmp[i++] = 10;
    tmp[i] = 0;

    char fmt[5] = {37, 115, 37, 115, 0};
    printf(fmt, tmp,t);

    return 0;
}