# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude

# Diretórios
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Arquivos fonte e objeto
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Nome do executável
TARGET = mainAluno

# Alvo principal
all: $(OBJDIR) $(BINDIR) $(BINDIR)/$(TARGET)

# Regra para criar o executável
$(BINDIR)/$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Criação dos diretórios de objetos e binários se não existirem
$(OBJDIR):
	mkdir -p $(OBJDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

# Compilação dos arquivos objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/$(TARGET)
	rm -rf $(OBJDIR) $(BINDIR)
