CC=g++

SERVER_OUTPUT = $(wildcard out/linux/)
SERVER=$(wildcard server/*.cpp)
SERVER_HEADERS=$(wildcard server/includes/*.hhp)

linux: $(SERVER_HEADERS)
	$(CC) $(SERVER) -o $(SERVER_OUTPUT)/plyaski
	sudo cp ./plyaski /usr/local/bin/