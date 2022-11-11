#include "encoder/encoder.h"
#include "decoder/decoder.h"
#include "unit_test/unit_test.h"


int main() {

    std::cout << "\n_______________RUNING INCLUDED ENCODER SHARED LIBRARY________________" << std::endl;
    
    std::cout <<"\n\t"<< encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3) << std::endl;
    
    std::cout << "\n_______________RUNING INCLUDED ENCODER SHARED LIBRARY________________" << std::endl;

    std::cout <<"\n\t"<< decoder("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD", 3) << std::endl;

    std::cout << "\n_______________RUNING INCLUDED UNIT_TEST STATYC LIBRARY________________" << std::endl;

    test_encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3, "QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD");
    test_encoder("AJSKD", 3, "");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_encoder("AJSKD", 3, "HELLO");
    test_decoder("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD", 3, "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG");
    std::cout<<std::endl;
}
