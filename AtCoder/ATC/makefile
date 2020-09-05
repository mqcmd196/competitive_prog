file = null

ifeq ($(OS), Mac)
all: ${file}.cpp
	g++-9 ${file}.cpp -o ${file}
	./${file}
	rm ${file}
else
all: ${file}.cpp
	g++ ${file}.cpp -o ${file}
	./${file}
	rm ${file}
endif