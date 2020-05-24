src=$(wildcard *.cpp)
target=$(patsubst %.cpp, %.out, $(src))

all:$(target)

%.out:%.cpp
	g++ -std=c++17 $< -o $@

clean:
	rm -rf $(target)

.PHNOY:clean all
