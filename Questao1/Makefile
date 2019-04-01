#Pastas
INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj
BIN_DIR = ./bin
DATA_DIR = ./data

#Variaveis
CC = g++
CFLAGS = -Wall -std=c++11 -no-pie

output: $(OBJ_DIR)/main.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/empresa.o $(OBJ_DIR)/date.o $(OBJ_DIR)/controlador.o
	mkdir -p bin
	$(CC) $(CFLAGS) $(OBJ_DIR)/main.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/empresa.o $(OBJ_DIR)/date.o $(OBJ_DIR)/controlador.o -o $(BIN_DIR)/Questao1

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/main.cpp -I $(INC_DIR) -o $(OBJ_DIR)/main.o $(CFLAGS)

$(OBJ_DIR)/funcionario.o: $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/funcionario.cpp -I $(INC_DIR) -o $(OBJ_DIR)/funcionario.o $(CFLAGS)

$(OBJ_DIR)/empresa.o: $(SRC_DIR)/empresa.cpp $(INC_DIR)/empresa.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/empresa.cpp -I $(INC_DIR) -o $(OBJ_DIR)/empresa.o $(CFLAGS)

$(OBJ_DIR)/date.o: $(SRC_DIR)/date.cpp $(INC_DIR)/date.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/date.cpp -I $(INC_DIR) -o $(OBJ_DIR)/date.o $(CFLAGS)

$(OBJ_DIR)/controlador.o: $(SRC_DIR)/controlador.cpp $(INC_DIR)/controlador.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/controlador.cpp -I $(INC_DIR) -o $(OBJ_DIR)/controlador.o $(CFLAGS)

run:
	$(BIN_DIR)/Questao1