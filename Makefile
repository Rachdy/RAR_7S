
flags = "" # compiler arguements 
compiler = g++ # g++ by default :)

#todo : implement those :)
#build-release :

# usage example : make build-debug compiler=g++ flags="-Wall"
build-debug : #source/main.cpp	
	@echo "compiling using '$(compiler)' with '$(flags)' - debug build"
	@echo "compiling start..."

	@#todo : debug build steps should be here

	@echo "compiling end..."

clean-debug :
	@#todo : check output of those commands
	@rm -rf build/debug

	@# if build folder not exist
	@if [ ! -d build ]; then mkdir build; fi

	@# if debug folder not exist
	@if [ ! -d build/debug ]; then mkdir build/debug; fi

	@echo "debug build clean."

clean-release :
	@# todo : check output of those commands
	@rm -rf build/release

	@# if build folder not exist
	@if [ ! -d build ]; then mkdir build; fi

	@# if release folder not exist
	@if [ ! -d build/release ]; then mkdir build/release; fi

	@echo "release build clean."
