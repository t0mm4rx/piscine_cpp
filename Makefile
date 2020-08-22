all:
	find ./ -name "Makefile" -mindepth 2 -execdir make \;

clean:
	find ./ -name "Makefile" -mindepth 2 -execdir make clean \;

fclean:
	find ./ -name "Makefile" -mindepth 2 -execdir make fclean \;
