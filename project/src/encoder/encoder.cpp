#include "encoder/encoder.h"
#include <iostream>

std::string encoder(std::string text, int n)
{
    std::string result = "";
    int length = text.length();

    for (int i = 0; i < length; i++) {

        if (isupper(text[i]))
            result += char(int(text[i] + n - 65) % 26 + 65);
        else
            result += char(int(text[i] + n - 97) % 26 + 97);
    }

    return result;
}
