CFLAGS = -g -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -I./acl

all: a.out b.out c.out d.out e.out f.out input.txt

a.out: a.cpp
	$(CXX) $(CFLAGS) -o $@ $<

b.out: b.cpp
	$(CXX) $(CFLAGS) -o $@ $<

c.out: c.cpp
	$(CXX) $(CFLAGS) -o $@ $<

d.out: d.cpp
	$(CXX) $(CFLAGS) -o $@ $<

e.out: e.cpp
	$(CXX) $(CFLAGS) -o $@ $<

f.out: f.cpp
	$(CXX) $(CFLAGS) -o $@ $<

input.txt:
	echo "" > $@

clean:
	$(RM) *.out
	$(RM) input.txt

.PHONY: all clean
