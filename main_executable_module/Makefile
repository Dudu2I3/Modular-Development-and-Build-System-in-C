
all: ../../build/Quest_3

../../build/Quest_3: main_executable_module.c ../data_libs/data_io.c ../data_module/data_process.c ../data_libs/data_stat.c ../yet_another_decision_module/decision.c | ../../build
	gcc -Wall -Werror -Wextra main_executable_module.c ../data_libs/data_io.c ../data_module/data_process.c ../data_libs/data_stat.c ../yet_another_decision_module/decision.c -o ../../build/Quest_3

../../build:
	mkdir -p ../../build

clean:
	rm -rf *.o ../../build/Quest_3 ../../build/Quest_5 libdata_stat.a ../data_libs/data_stat.o

rebuild: clean all

data_stat.a: ../data_libs/data_stat.c
	gcc -Wall -Werror -Wextra -c ../data_libs/data_stat.c -o ../data_libs/data_stat.o
	ar cr libdata_stat.a ../data_libs/data_stat.o

build_with_static: main_executable_module.c data_stat.a | ../../build
	gcc -Wall -Werror -Wextra main_executable_module.c ../data_libs/data_io.c ../data_module/data_process.c ../yet_another_decision_module/decision.c libdata_stat.a -o ../../build/Quest_5