src=$(wildcard *.cpp)

target=$(patsubst %.cpp, %.o, $(src))

all:$(target)
	g++ -std=c++17 -o $@ $^

%.o:%.cpp
	g++ -std=c++17 -c $< -o $@

clean:
	rm -rf $(target)

.PHNOY:clean
