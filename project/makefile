.PHONY: clean create_directories main_bin 

all: clean  create_directories lib/libencoder.so lib/libdecoder.so main_bin make_encoder_sahred_lib_avalible_at_runtime  make_decoder_sahred_lib_avalible_at_runtime lib/libunit_test.a 

main_bin:
	@echo "Building the project..."
	@g++ src/main.cpp -L ./lib -I inc -Wall  -lencoder -o bin/main_encoder

# /---------------------------------------------------encoder--------------------------------------------------/

# Make shared library available at runtime
make_encoder_sahred_lib_avalible_at_runtime: lib/libencoder.so
	@echo "Make shared library available at runtime for encoder"
	@export LD_LIBRARY_PATH=`pwd`/lib:$(LD_LIBRARY_PATH)
# Create shared .SO library
lib/libencoder.so: obj/encoder/encoder.o
	@echo "Creating shared library libencoder"
	@g++ -shared -fPIC obj/encoder/encoder.o -o lib/libencoder.so 

# Convert library code to Object file
obj/encoder/encoder.o: obj/encoder
	@echo "Creating object file for encoder..."
	@g++ -c src/encoder/encoder.cpp -I inc -o obj/encoder/encoder.o  

obj/encoder:
	@echo "Creating obj/encoder diectory..."
	@mkdir -p obj/encoder

# /---------------------------------------------------decoder--------------------------------------------------/

make_decoder_sahred_lib_avalible_at_runtime: lib/libdecoder.so
	@echo "Make shared library available at runtime for decoder"
	@export LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):`pwd`
# Create shared .SO library
lib/libdecoder.so: obj/decoder/decoder.o
	@echo "Creating shared library libencoder"
	@g++ -shared -fPIC obj/decoder/decoder.o -o lib/libdecoder.so 

# Convert library code to Object file
obj/decoder/decoder.o: obj/decoder
	@echo "Creating object file for decoder..."
	@g++ -c src/decoder/decoder.cpp -I inc -o obj/decoder/decoder.o  

obj/decoder:
	@echo "Creating obj/encoder diectory..."
	@mkdir -p obj/decoder

# /---------------------------------------------------unit_test--------------------------------------------------/
#testing dinamic librarys

#Create static .a library

lib/libunit_test.a: obj/unit_test/unit_test.o
	@echo "Creating static library unit_tes"
	@ar cvq lib/libunit_test.a obj/unit_test/unit_test.o

# Convert library code to Object file
obj/unit_test/unit_test.o: obj/unit_test
	@echo "Creating object file for unit_test..."
	@g++ -c src/unit_test/unit_test.cpp -I inc -o obj/unit_test/unit_test.o  

# Create unit_test directory
obj/unit_test:
	@echo "Creating obj/unit_test diectory..."
	@mkdir -p obj/unit_test

# /---------------------------------------------------*********--------------------------------------------------/

create_directories: 
	@echo "Creating diectories..."
	@mkdir -p lib bin obj

clean:
	@echo "Celaning the project diectories..."
	@rm -rf obj lib bin
