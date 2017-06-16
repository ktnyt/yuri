tachi := static const char tachi[] = "\"$(TACHI)\"";
neko := static const char neko[] = "\"$(NEKO)\"";

love: 百合.c
	echo "$(tachi)" > 親.h
	echo "$(neko)" >> 親.h
	gcc -Wall -O2 -o 百合 百合.c

.PHONY: clean
clean:
	rm -f 親.h 百合
