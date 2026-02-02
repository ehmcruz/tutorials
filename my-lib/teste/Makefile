# get my-lib:
# https://github.com/ehmcruz/my-lib
MYLIB = ../my-lib

CPP = g++
LD = $(CPP)
FLAGS = -std=c++23
CPPFLAGS = $(FLAGS) -I$(MYLIB)/include -Wall
LDFLAGS = $(FLAGS)
BIN_NAME = main
RM = rm

########################################################

SRC = $(wildcard *.cpp)

headerfiles = $(wildcard *.h) $(wildcard $(MYLIB)/include/my-lib/*.h)

OBJS = ${SRC:.cpp=.o}

########################################################

# implicit rules

%.o : %.cpp $(headerfiles)
	$(CPP) -c $(CPPFLAGS) $< -o $@

########################################################

all: $(BIN_NAME)
	@echo program compiled!
	@echo yes!

$(BIN_NAME): $(OBJS)
	$(LD) -o $(BIN_NAME) $(OBJS) $(LDFLAGS)

clean:
	-$(RM) $(OBJS)
	-$(RM) $(BIN_NAME)
