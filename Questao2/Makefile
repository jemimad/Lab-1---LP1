#Pastas
INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj
BIN_DIR = ./bin
DATA_DIR = ./data

#Variaveis
CC = g++
CFLAGS = -Wall -std=c++11

output: $(OBJ_DIR)/main.o $(OBJ_DIR)/jogo.o $(OBJ_DIR)/jogador.o $(OBJ_DIR)/dado.o
	mkdir -p bin
	$(CC) $(CFLAGS) $(OBJ_DIR)/main.o $(OBJ_DIR)/jogo.o $(OBJ_DIR)/jogador.o $(OBJ_DIR)/dado.o -o $(BIN_DIR)/Questao2 

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/main.cpp -I $(INC_DIR) -o $(OBJ_DIR)/main.o $(CFLAGS)

$(OBJ_DIR)/jogo.o: $(SRC_DIR)/jogo.cpp $(INC_DIR)/jogo.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/jogo.cpp -I $(INC_DIR) -o $(OBJ_DIR)/jogo.o $(CFLAGS)

$(OBJ_DIR)/jogador.o: $(SRC_DIR)/jogador.cpp $(INC_DIR)/jogador.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/jogador.cpp -I $(INC_DIR) -o $(OBJ_DIR)/jogador.o $(CFLAGS)

$(OBJ_DIR)/dado.o: $(SRC_DIR)/dado.cpp $(INC_DIR)/dado.h
	mkdir -p obj
	$(CC) -c $(SRC_DIR)/dado.cpp -I $(INC_DIR) -o $(OBJ_DIR)/dado.o $(CFLAGS)


run:
	$(BIN_DIR)/Questao2