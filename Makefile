SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c --std=c++11
all:$(BIN)/main

# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

	
# ************ Compilación de módulos ************

$(BIN)/main: $(OBJ)/main.o
	$(CXX) -o $(BIN)/main $(OBJ)/main.o

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/cola.h $(INC)/cola.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/main.cpp -o  $(OBJ)/main.o	
	

# ************ Limpieza ************
clean :
	-rm $(OBJ)/*

mrproper : clean
	-rm -rf ./*~ $(BIN)/* doc/html/* $(INC)/*~ $(SRC)/*~ 
