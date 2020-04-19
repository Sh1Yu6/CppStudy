#src = $(wildcard *.cpp)
#target = $(patsubst %.cpp, %, $(src))

#all:$(target)

#$(target)%:%.cpp
#	g++ $< -o $@


#clean:
#	rm -f $(target)

#.PHONY: clean all


src = $(wildcard *.cpp)
target= $(patsubst %.cpp, %, $(src))
std_11= -std=c++11
all:$(target)

$(target):%:%.cpp
		g++ $< -o $@ $(std_11)

clean:
		rm -rf $(target)

.PHNOY:clean all
