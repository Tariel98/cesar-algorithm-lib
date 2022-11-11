#include <iostream>
#include "unit_test/unit_test.h"
#include "encoder/encoder.h"
#include "decoder/decoder.h"

void test_encoder(std::string text, int n, std::string exectedResurlt){
    
    std::string result = encoder(text, n);
    
    if (result != exectedResurlt){
        std::cout << "\n\t\t\t###Test Filed!###";
    }else {
        std::cout << "\n\t\t\t***Test Passed!***";
    }
}

void test_decoder(std::string text, int n, std::string exectedResurlt){

    std::string result = decoder(text, n);

    if (result != exectedResurlt){
        std::cout << "\n\t\t\t###Test Filed!###";
    }else {
        std::cout << "\n\t\t\t***Test Passed!***";
    }

}


