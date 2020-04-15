src = $(wildcard *.cpp)
target= $(patsubst %.cpp, %, $(src))

all:$(target)

$(target)%:%.cpp
	g++ $< -o $@

clean:
	rm -rf $(target)

.PHNOY:clean all
