src=$(wildcard *.cpp)
target=$(patsubst %.cpp, %.o, $(src))

all:$(target)
	g++ -std=c++17 $^ -o $@ -Wall -g

%.o:%.cpp
	g++ -std=c++17 -c $< -o $@ -Wall -g

clean:
	rm -rf $(target)

.PHNOY: clean
