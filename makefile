DIST_PATH = ./build

packihx: main.ihx
	packihx $(DIST_PATH)/main.ihx > $(DIST_PATH)/main.hex

main.ihx:
	sdcc -o $(DIST_PATH)/main.ihx main.c

clean:
	rm $(DIST_PATH)/*
