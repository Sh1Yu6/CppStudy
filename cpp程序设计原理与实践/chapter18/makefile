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

all:$(target)

$(target):%:%.cpp
		g++ $< -o $@

clean:
		rm -rf $(target)

.PHNOY:clean all
