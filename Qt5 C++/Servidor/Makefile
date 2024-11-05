# Definindo o compilador
C = g++

# Definindo as flags de compila??o
CFLAGS =  -static -std=c++11 -Wall -Wextra -g3 -pthread
IFLAGS = -I./inc -I./GNET
LFLAGS = -L./lib -liniparser

# Nome do arquivo execut��vel
TARGET = ./output/pwadmin

# Regra padr?o
all: $(TARGET)

# Regra para construir o execut��vel
$(TARGET): main.cpp
	$(C) $(CFLAGS) main.cpp -o $(TARGET) $(IFLAGS) $(LFLAGS) 

# Regra para limpar arquivos compilados
clean:
	rm -f $(TARGET)
