.PHONY: clean create_directories 

all: clean  create_directories lib/libencoder.so lib/libdecoder.so lib/libunit_test.a  make_encoder_sahred_lib_avalible_at_runtime  main_bin 

main_bin:
	@echo "Building the project..."
	@echo $(LD_LIBRARY_PATH)
	@g++ -c src/main.cpp -I./inc -o ./obj/main.o
	@g++ src/main.cpp -L `pwd`/lib -I./inc -Wall  -lencoder -ldecoder -o bin/main_encoder
#	@g++ obj/main.o -I./inc -L./lib -Wl, -rpath=`pwd`/lib -lencoder -ldecoder -o ./bin/main
# /---------------------------------------------------encoder--------------------------------------------------/

make_encoder_sahred_lib_avalible_at_runtime: 
	@echo "Make shared library available at runtime for encoder"
	@export LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):`pwd`/lib

# Create shared .SO library
lib/libencoder.so: obj/encoder/encoder.o
	@echo "Creating shared library libencoder"
	@g++ -shared -fPIC obj/encoder/encoder.o -o lib/libencoder.so 

# Convert library code to Object file
obj/encoder/encoder.o: obj/encoder
	@echo "Creating object file for encoder..."
	@g++ -I./inc -fPIC -c src/encoder/encoder.cpp -o obj/encoder/encoder.o  

#Creating objec diectory
obj/encoder:
	@echo "Creating obj/encoder diectory..."
	@mkdir -p obj/encoder

# /---------------------------------------------------decoder--------------------------------------------------/

lib/libdecoder.so: obj/decoder/decoder.o
	@echo "Creating shared library libencoder"
	@g++ -shared -fPIC obj/decoder/decoder.o -o lib/libdecoder.so 

# Convert library code to Object file
obj/decoder/decoder.o: obj/decoder
	@echo "Creating object file for decoder..."
	@g++ -I./inc -fPIC -c src/decoder/decoder.cpp -o obj/decoder/decoder.o

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
