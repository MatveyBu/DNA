#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

using namespace std;

bool isValidBase(char base)
{
    if(base == 'A' or base == 'C' or base == 'T' or base == 'G')
    {
        return true;
    }else
    {
        return false;
    }
}

bool isValidStrand(string strand)
{
    if(strand.length() < 1)
    {
        return false;
    }
    for(unsigned int i = 0; i < strand.length(); i++)
    {
        if(!isValidBase(strand[i]))
        {
            return false; //if any of the chars in the string are invalid return false
        }
    }
    return true;
}

int main()
{

    return 0;
}