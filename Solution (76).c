#include <stdbool.h>
bool isIsomorphic(char* s, char* t)
{
    int mapST[256] = {0}, mapTS[256] = {0};
    for (int i = 0; s[i] != '\\0'; i++)
    {
        unsigned char a = s[i], b = t[i];
        if (mapST[a] != mapTS[b]) return false;
        mapST[a] = i + 1;
        mapTS[b] = i + 1;
    }
    return true;
}
