all:
	gcc main.c -o dungeon
	./dungeon

run:
	./dungeon

clean: rm -f dungeon
