default:
	g++ $(shell pkg-config --cflags --libs opencv) -o musonize main.cpp
