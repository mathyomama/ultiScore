CXX := g++
CXXFLAGS = -std=c++11 -I$(INCDIR)

SRCDIR := src
BUILDDIR := build
BINDIR := bin
INCDIR := include
TESTDIR := test

SOURCES := $(wildcard $(SRCDIR)/*.cpp)
HEADERS := $(wildcard $(INCDIR)/*.hpp)
TESTSRC := $(wildcard $(TESTDIR)/*.cpp)
TESTS := $(patsubst $(TESTDIR)/%.cpp, $(BINDIR)/%, $(TESTSRC))
OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))
TARGET := $(BINDIR)/ultiScore

all: $(TARGET)

dev: CXXFLAGS += $(CXXFLAGS) -Wall -Wextra -g
dev: all

$(TARGET): build $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

build:
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(BINDIR)

test: $(TARGET) $(TESTS)

$(BINDIR)/%: $(TESTSRC)/%.cpp
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

.PHONY: clean
clean:
	rm -rf $(BUILDDIR)
	rm -rf $(BINDIR)
