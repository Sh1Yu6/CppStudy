src=$(wildcard *.cpp)
target=$(patsubst %.o, %.cpp, $(src))

all:$(target)
	g++ -std=c++17 $^ -o $@

%.o:%.cpp
	g++ -std=c++17 $< -o $@

clean:
	rm -rf $(target)

.PHNOY:clean
