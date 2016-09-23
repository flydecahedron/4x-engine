CC := g++

# Folders
SRCDIR := src
OBJDIR := obj
TARGETDIR := bin

EXECUTABLE := engine
TARGET := $(TARGETDIR)/$(EXECUTABLE)

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

# Shared Compiler Flags
CFLAGS := -c
INC :=
LIB :=
CFLAGS := -std=c++11 -Wall -Wextra -ansi

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo "	 Linking $(TARGET)"; $(CC) $^ -o $(TARGET) $(LIB)

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@echo "Compiling $<..."; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	$(RM) -r $(wildcard obj/*) $(wildcard bin/*) $(TARGET)

.PHONY: clean
