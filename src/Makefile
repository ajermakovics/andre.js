
CPP  = g++
CC   = gcc
OD = Debug
OBJ  = $(OD)/main.o $(OD)/MainWindow.o $(OD)/CodeSelect.o $(OD)/TextEditor.o $(OD)/ClassItem.o $(OD)/Class.o $(OD)/CodeManager.o $(OD)/ParamBox.o $(OD)/FileList.o $(OD)/MiscFns.o $(OD)/FnList.o $(OD)/Timer.o $(OD)/Archive.o $(OD)/MainMenu.o
LIBS =  -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib /usr/lib/libfltk.a -lXft -lm -lXext -lX11 -lstdc++ -lXpm
BIN  = $(OD)/editor
BIN_STATIC  = $(BIN)_static
CXXFLAGS = -I/usr/local/include -I/usr/X11R6/include
STATIC_FLAGS = -lpthread -static

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

static: all-before $(BIN) all-after

clean: 
	rm -f $(OBJ) $(BIN)

clean_obj:
	rm -f $(OBJ)
	
$(BIN): $(OBJ)
	rm -f $(BIN)
	$(CPP) $(OBJ) -o $(BIN) $(LIBS)

$(BIN_STATIC): $(OBJ)
	rm -f $(BIN)
	$(CPP) $(OBJ) -o $(BIN) $(LIBS) $(STATIC_FLAGS)

$(OD)/main.o: main.cpp
	$(CPP) -c main.cpp -o $(OD)/main.o $(CXXFLAGS)

parse/lex.yy.c: parse/lexer.l
	flex -L -o parse/lex.yy.c -i parse/lexer.l 

parse/parser.tab.c: parse/lex.yy.c parse/parser.y
	bison -o parse/parser.tab.c parse/parser.y

$(OD)/CodeManager.o: parse/parser.tab.c CodeManager.cpp CodeManager.h parse/SemanticValue.h
	$(CPP) -c CodeManager.cpp -o $(OD)/CodeManager.o $(CXXFLAGS)

$(OD)/MainWindow.o: icons/editor.xpm MainWindow.cpp MainWindow.h
	$(CPP) -c MainWindow.cpp -o $(OD)/MainWindow.o $(CXXFLAGS)

$(OD)/CodeSelect.o: CodeSelect.cpp
	$(CPP) -c CodeSelect.cpp -o $(OD)/CodeSelect.o $(CXXFLAGS)

syn/lex.syn.c: syn/syn_lexer.l 
	flex -L -i -P syn -o syn/lex.syn.c syn/syn_lexer.l
	
$(OD)/TextEditor.o: syn/lex.syn.c TextEditor.cpp TextEditor.h
	$(CPP) -c TextEditor.cpp -o $(OD)/TextEditor.o $(CXXFLAGS)

$(OD)/ClassItem.o: ClassItem.cpp
	$(CPP) -c ClassItem.cpp -o $(OD)/ClassItem.o $(CXXFLAGS)

$(OD)/Class.o: Class.cpp
	$(CPP) -c Class.cpp -o $(OD)/Class.o $(CXXFLAGS)

$(OD)/ParamBox.o: ParamBox.cpp
	$(CPP) -c ParamBox.cpp -o $(OD)/ParamBox.o $(CXXFLAGS)
	
$(OD)/FileList.o: FileList.cpp
	$(CPP) -c FileList.cpp -o $(OD)/FileList.o $(CXXFLAGS)

$(OD)/MiscFns.o: MiscFns.cpp
	$(CPP) -c MiscFns.cpp -o $(OD)/MiscFns.o $(CXXFLAGS)

$(OD)/FnList.o: FnList.cpp
	$(CPP) -c FnList.cpp -o $(OD)/FnList.o $(CXXFLAGS)

$(OD)/Timer.o: Timer.cpp Timer.h
	$(CPP) -c Timer.cpp -o $(OD)/Timer.o $(CXXFLAGS)
	
$(OD)/Archive.o: Archive.cpp Archive.h
	$(CPP) -c Archive.cpp -o $(OD)/Archive.o $(CXXFLAGS)
	
$(OD)/MainMenu.o: MainMenu.cpp MainMenu.h
	$(CPP) -c MainMenu.cpp -o $(OD)/MainMenu.o $(CXXFLAGS)
