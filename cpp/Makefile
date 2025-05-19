export CPP=g++
export FLAGS=-std=c++11

export 03_fundamentals=03_fundamentals/
export 05_functions=05_functions/
export 06_pointers=06_pointers/
export 07_morepointers=07_morepointers/
export 08_classes=08_classes/
export 11_bitopers=11_bitopers/
export 12_single_inher=12_single_inher/

targets = build_03 build_05 build_06 build_07 build_08 build_11 \
          build_12

all: $(targets)

build_03:
	@cd $(03_fundamentals); make all

build_05:
	@cd $(05_functions); make all

build_06:
	@cd $(06_pointers); make all

build_07:
	@cd $(07_morepointers); make all

build_08:
	@cd $(08_classes); make all

build_11:
	@cd $(11_bitopers); make all

build_12:
	@cd $(12_single_inher); make all

.PHONY: clean_03 clean_05 clean_06 clean_07 clean_08 clean_11

clean_03:
	@cd $(03_fundamentals); make clean

clean_05:	
	@cd $(05_functions); make clean

clean_06:
	@cd $(06_pointers); make clean

clean_07:
	@cd $(07_morepointers); make clean

clean_08:
	@cd $(08_classes); make clean

clean_11:
	@cd $(11_bitopers); make clean

clean_12:
	@cd $(12_single_inher); make clean
