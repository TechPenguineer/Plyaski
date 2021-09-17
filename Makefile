CC=g++

SERVER_OUTPUT = $(wildcard out/linux/)
SERVER=$(wildcard server/*.cpp)
SERVER_HEADERS=$(wildcard server/includes/*.h)

linux: $(SERVER_HEADERS)
	sudo $(CC) $(SERVER) -o $(SERVER_OUTPUT)plyaski
	sudo cp ./out/linux/plyaski /usr/local/bin/