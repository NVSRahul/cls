bin:
	gcc -O3 src/cls.c -o cls
install: bin
	mkdir -p $(PREFIX)/bin
	cp cls $(PREFIX)/bin/
