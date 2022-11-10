#include <string>
#include <unit_test/unit_test.h>
#include "encoder/encoder.hpp"
#include "decoder/decoder.hpp"
#include <iostream>

void test_encoder(std::string text, int n, std::string exectedResurlt){
    
    std::string result = encoder(text, n);
    if (result != exectedResurlt){
        std::cerr << "###Test Filed!###" << std::endl;
    }else {
        std::cout << "***Test Passed!***";
    }
     
}

void test_decoder(std::string text, int n, std::string exectedResurlt){

    std::string result = decoder(text, n);

    if (result != exectedResurlt){
        std::cerr << "###Test Filed!###" << std::endl;
    }else {
        std::cout << "***Test Passed!***";
    }

}


