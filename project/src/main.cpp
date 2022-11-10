#include "encoder/encoder.hpp"
#include "decoder/decoder.hpp"

int main() {
    
    std::cout << encoder("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", 3) << std::endl;
    std::cout << decoder("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD", 3) << std::endl;
}
