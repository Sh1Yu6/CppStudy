$source=$(wildcard *.cpp)
$target=$(patsubst %.cpp, %.out, $(source))

all:$(target)


$(target):%.out:%.cpp
	g++ $< -o $@ -std=c++17

clean:
	rm -rf $(target)

.PHNOY:all clean
