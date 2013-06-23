CC=g++
SOURCES=Mae.cpp
EXECUTABLE=Mae

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(SOURCES) -o $@

install: $(EXECUTABLE)
	cp $(EXECUTABLE) ../

clean:
	rm -rf $(EXECUTABLE)