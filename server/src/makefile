CC=g++
SOURCES=MaeServer.cpp
EXECUTABLE=MaeServer

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(SOURCES) -o $@

install: $(EXECUTABLE)
	cp $(EXECUTABLE) ../

clean:
	rm -rf $(EXECUTABLE)