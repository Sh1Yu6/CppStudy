src=$(wildcard *.cpp)
target=$(patsubst %.cpp, %.out, $(src))

all:$(target)

$(target):%.out:%.cpp
	g++ -std=c++11 $< -o $@

clean:
	rm -rf $(target)

.PHNOY:clean all
