CPP = g++
LD  = $(CPP)

CPP_SRCS = $(shell k2find . -name *.cpp)

INCLUDE_FILES = -I.

CPP_FLAGS = -Wall -pedantic -g
LD_FLAGS  =

CPP_LIBS =

ODIR = obj

### Automatic variables
CPP_OBJS=$(CPP_SRCS:.cpp=.o)

# Rules and dependencies
.PHONY: clean

clean:
  rm -f $(ODIR)/*.o

all: app.exe
  @echo "Output file is ready: $<"

app.exe: $(ODIR)/$(CPP_OBJS)
  @echo "Linking '$(CPP_OBJS)'"
  $(LD) -o $@ $< $(LD_FLAGS)

$(ODIR)/%.o: %.cpp
  MKDIR $(ODIR)/$(<D)
  $(CPP) $< $(CPP_FLAGS) $(CPP_LIBS) -o $@
