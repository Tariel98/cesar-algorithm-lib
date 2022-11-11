#include "encoder/encoder.hpp"
#include "decoder/decoder.hpp"
#include "unit_test/unit_test.h"
int main() {
    
    std::cout << encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3) << std::endl;
    std::cout << decoder("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD", 3) << std::endl;
    test_encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3, "QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD");
    test_encoder("AJSKD", 3, "QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD");
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
}
