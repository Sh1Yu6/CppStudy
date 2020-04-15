src = $(wildcard ./src/*.cpp)
obj = $(patsubst ./src/%.cpp, ./obj/%.o, $(src))
inc_path=./inc
my_args= -Wall -g

all:a.out

a.out:$(obj)
	g++ $^ -o $@

./obj/%.o:./src/%.cpp
	g++ -c $< -o $@ -I $(inc_path)

clean:
	rm -rf $(obj) a.out

.PHONY: clean all
