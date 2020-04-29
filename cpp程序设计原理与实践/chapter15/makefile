#src = $(wildcard *.cpp)
#target = $(patsubst %.cpp, %, $(src))

#all:$(target)

#$(target)%:%.cpp
#	g++ $< -o $@


#clean:
#	rm -f $(target)

#.PHONY: clean all


src = $(wildcard *.cpp)
target= $(patsubst %.cpp, %.out, $(src))

all:$(target)

$(target):%.out:%.cpp
		g++ $< -o $@ -std=c++17

clean:
		rm -rf $(target)

.PHNOY:clean all
