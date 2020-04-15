src = $(wildcard ./src/*.cpp)
target = $(patsubst ./src/%.cpp, ./obj/%.o, $(src))
inc_path= ./inc
test_args = -Wall -g

all:a.out

a.out:$(target)
	g++ $^ -o $@ $(test_args)

./obj/%.o:./src/%.cpp
	g++ -c $< -o $@ $(test_args) -I $(inc_path)

clean:
	rm -rf $(target) a.out

.PHONY: clean all

