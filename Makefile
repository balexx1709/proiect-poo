# Makefile for C++ Project

CC = g++
CFLAGS = -std=c++11 -Wall

# Source files
SRC = main.cpp other.cpp  # Add your .cpp files here

# Output binary
TARGET = my_project

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

test:
	@echo "Running tests..."
	# Add your test commands here, for example using Google Test or another framework

clean:
	rm -f $(TARGET) *.o