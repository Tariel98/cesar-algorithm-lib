.PHONY: clean create_directories 

all: clean  create_directories lib/libencoder.so lib/libdecoder.so  make_encoder_sahred_lib_avalible_at_runtime  make_decoder_sahred_lib_avalible_at_runtime #main_bin

#main_bin:
#	@echo "Building the project..."
#	@g++ main.cpp -o bin/main_exec
#	@echo "Executing the binary executable..."	
#	@./bin/main_exec

# /---------------------------------------------------encoder--------------------------------------------------/

# Make shared library available at runtime
make_encoder_sahred_lib_avalible_at_runtime: lib/libencoder.so
	@echo "Make shared library available at runtime for encoder"
	@export LD_LIBRARY_PATH=lib/libencoder.so:$(LD_LIBRARY_PATH)

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
	@export LD_LIBRARY_PATH=lib/libdecoder.so:$LD_LIBRARY_PATH
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

create_directories: 
	@echo "Creating diectories..."
	@mkdir -p lib bin obj

clean:
	@echo "Celaning the project diectories..."
	@rm -rf obj lib bin
