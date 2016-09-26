CXX := g++

# Folders
SRCDIR := src
OBJDIR := obj
TARGETDIR := bin
LIBDIR := lib

# anax directories
ANAXSRCDIR := $(LIBDIR)/anax/src/anax
ANAXDEPDIR := $(LIBDIR)/anax/include/anax
ANAXOBJDIR := $(LIBDIR)/anax/obj


# extensions
DEPEXT := hpp
SRCEXT := cpp

# source files
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

# anax source files
ANAXSRC := $(shell find $(ANAXSRCDIR) -type f -name *.$(SRCEXT))
ANAXOBJ := $(patsubst $(ANAXSRCDIR)/%,$(ANAXOBJDIR)/%,$(ANAXSRC:.$(SRCEXT)=.o))
ANAXDEP := $(shell find $(ANAXSRCDIR) -type f -name *.$(DEPEXT))

# Compiler Flags
INC := 
LIB := 
CXXFLAGS := -std=c++11 -Wall -Wextra -ansi

# Target
EXECUTABLE := engine
TARGET := $(TARGETDIR)/$(EXECUTABLE)

all: $(TARGET)

$(TARGET): $(OBJECTS) $(ANAXOBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(TARGET) 

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) $(LIB) -c -o $@ $<

$(ANAXOBJDIR)/%.o: $(ANAXSRCDIR)/%.$(SRCEXT)
	@mkdir -p $(ANAXOBJDIR)
	@mkdir -p $(ANAXOBJDIR)/detail
	@mkdir -p $(ANAXOBJDIR)/util 
	$(CXX) $(CXXFLAGS) $(ANAXDEP) $(LIB) -c -o $@ $<

clean:
	$(RM) -r $(wildcard obj/*) $(wildcard bin/*) $(TARGET)

.PHONY: clean
