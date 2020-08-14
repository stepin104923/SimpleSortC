SRC = unity/unity.c\
src/simple_sort.c\
test/test_simple_sort.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = SIMPLE_SORT.out

$(PROJECT_NAME): $(SRC)
	gcc -g $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

gdb:$(PROJECT_NAME)
	gdb ${PROJECT_NAME}

doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
