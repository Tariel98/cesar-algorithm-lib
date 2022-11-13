WILD = $(wildcard src/*.cpp)
O = $(patsubst src/%.cpp,%.o,$(WILD))
SO = encoder.so  decoder.so
G = g++

all: clean dir main 
	@LD_LIBRARY_PATH=`pwd`/lib ./bin/main

main: $(O) $(SO) unit_test.a 
	@echo "Linking on main and runing program..."
	@$(G) obj/main.o -I ./inc -L ./lib -lencoder -ldecoder -lunit_test -o bin/main


%.o: src/%.cpp
	@echo "Creating object files..."
	@$(G) -c $^ -I inc/ -o obj/$@

%.so: *obj/%.o
	@echo "Creating .so files..."
	@$(G) -shared -fPIC $^ -o lib/lib$@

unit_test.a: 
	@echo "Creating unit_test.a..."
	@ar cvq lib/lib$@ obj/unit_test.o

dir:
	@echo "Craeting directories..."
	@mkdir -p obj lib bin 

clean:
	@echo "Cleaning..."
	@rm -rf obj lib bin
