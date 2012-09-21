CC=g++
DEPS = LList.h
OBJ = LListClient.o LList.o 
SOURCE = LListClient.cpp LList.cpp 

all: LListClient

LListClient: $(OBJ)
	$(CC) -o $@ $^ 

%.o: %.cpp $(DEPS)
	$(CC) -c $< 

pack: 
	tar cvzf LList.tgz $(SOURCE) $(DEPS) Makefile
