#include "encoder/encoder.hpp"
#include <cctype>

std::string encoder(std::string text, int n)
{
    std::string result = "";
    int length = text.length();

    for (int i = 0; i < length; i++) {

        if ((int(text[i])) >= 65 && (int(text[i])) <= 90){
            result += char(int(text[i] - n - 65) % 26 + 65);
        }else if ((int(text[i]))  >= 97 && (int(text[i])) <= 122){
            result += char(int(text[i] - n - 97) % 26 + 97);
        }else{
            result += text[i];
        }
    }        

    return result;
}

