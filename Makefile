CC = g++
CFLAGS = -Wall -Wextra -std=c++17

# Имена исходных файлов
SOURCES = main.cpp game.cpp

# Имена объектных файлов
OBJECTS = $(SOURCES:.cpp=.o)

# Имя исполняемого файла
EXECUTABLE = game

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
  $(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
  $(CC) $(CFLAGS) -c $< -o $@

clean:
  rm -f $(OBJECTS) $(EXECUTABLE)