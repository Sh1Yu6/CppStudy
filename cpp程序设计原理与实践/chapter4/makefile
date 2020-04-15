src = $(wildcard *.cpp)
obj = $(patsubst %.cpp, %, $(src))

test_args= -Wall -g

all:$(obj)

%:%.cpp
	g++ $< -o $@

















clean:
	rm -f $(obj) 

.PHONY:clean all
