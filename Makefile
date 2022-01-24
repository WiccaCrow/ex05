NAME = test

CPPF = clang++ -Wall -Wextra -Werror -I./

ifdef MAKE_ex00
FOLDER = 00/
endif

ifdef MAKE_ex01
FOLDER = 01/
endif

ifdef MAKE_ex02
FOLDER = 02/
endif

SRC  = $(wildcard $(FOLDER)*.cpp)
HDR  = $(FOLDER)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp $(HDR)
	$(CPPF) -std=c++98 -c $< -o $@

all: $(OBJ)
	$(CPPF) $(OBJ) -o $(NAME)

echoc: ; echo "SRC:$(SRC) HDR:$(HDR) OBJ:$(OBJ)"
ex00: ; $(MAKE) MAKE_ex00=1 all
ex01: ; $(MAKE) MAKE_ex01=1 all
ex02: ; $(MAKE) MAKE_ex02=1 all

clean: ; rm -f $(OBJ)
clean00: ; $(MAKE) MAKE_ex00=1 clean
clean01: ; $(MAKE) MAKE_ex01=1 clean
clean02: ; $(MAKE) MAKE_ex02=1 clean

fclean: clean	;	@rm -f $(NAME)
fclean00: ;  $(MAKE) MAKE_ex00=1 fclean
fclean01: ;  $(MAKE) MAKE_ex01=1 fclean
fclean02: ;  $(MAKE) MAKE_ex02=1 fclean
