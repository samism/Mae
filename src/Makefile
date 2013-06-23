CC=g++
SOURCES=Mae.c
EXECUTABLE=Mae

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(SOURCES) -o $@

install: $(EXECUTABLE)
	cp $(EXECUTABLE) ../

clean:
	rm -rf $(EXECUTABLE)