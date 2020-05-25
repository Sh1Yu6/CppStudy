src = $(wildcard *.cpp)
obj = $(patsubst %.cpp, %.o, $(src))

my_args = -Wall -g

all: $(obj)
	g++ $^ -o $@ $(my_args)
	

%.o: %.cpp
	g++ -c $< -o $@ $(my_args)


.PHONY:clean
clean:
	rm -f $(obj) all
