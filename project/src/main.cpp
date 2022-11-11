#include "encoder/encoder.h"
#include "decoder/decoder.h"
#include "unit_test/unit_test.h"


int main() {

    std::cout << "\n_______________RUNING INCLUDED ENCODER SHARED LIBRARY________________" << std::endl;
    
    std::cout <<"\n\t"<< encoder("The Quick Brown Fox Jumos Over The Lazy Dog", 3) << std::endl;
    
    std::cout << "\n_______________RUNING INCLUDED DECODER SHARED LIBRARY________________" << std::endl;

    std::cout <<"\n\t"<< decoder("Qeb Nrfzh Yoltk Clu Grjmp Lsbo Qeb Ixwv Ald", 3) << std::endl;

    std::cout << "\n_______________RUNING INCLUDED UNIT_TEST STATYC LIBRARY________________" << std::endl;

    test_encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3, "QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD");
    test_decoder("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD", 3, "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG");
    test_decoder("Qeb Nrfzh Yoltk Clu Grjmp Lsbo Qeb Ixwv Ald", 3, "The Quick Brown Fox Jumps Over The Lazy Dog");
    std::cout<<std::endl;
}
