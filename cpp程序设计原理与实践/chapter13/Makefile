src = $(wildcard *.cpp)
target = $(patsubst %.cpp, %.out, $(src))


all: $(target)


$(target):%.out:%.cpp
	g++ $< -o $@ -std=c++11

clean:
	rm -rf $(target)

.PHNOY:clean all
