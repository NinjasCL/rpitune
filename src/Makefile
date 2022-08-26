.PHONY: build clean

b build:
	cc -o tune main.c player.c -lwiringPi -lpthread
	mv ./tune ..

c clean:
	rm ./tune