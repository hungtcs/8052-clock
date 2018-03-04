DIST_PATH = ./build

main.hex: main.ihx
	packihx $(DIST_PATH)/main.ihx > $(DIST_PATH)/main.hex

main.ihx:
	sdcc -o $(DIST_PATH)/main.ihx main.c

flash:
	sudo stcflash.py $(DIST_PATH)/main.hex

clean:
	rm $(DIST_PATH)/*
