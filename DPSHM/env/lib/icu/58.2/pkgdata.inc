GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.58.2.dylib
COMPILE=/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/bin/clang -DU_ATTRIBUTE_DEPRECATED= -D_FORTIFY_SOURCE=2 -mmacosx-version-min=10.9   -DU_HAVE_ATOMIC=1 -DU_HAVE_STRTOD_L=1  -march=core2 -mtune=haswell -mssse3 -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/include  -dynamic
GENLIB=/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/bin/clang -dynamiclib -dynamic -march=core2 -mtune=haswell -mssse3 -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -pie -headerpad_max_install_names -Wl,-rpath,/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,58 -Wl,-current_version -Wl,58.2 -install_name /Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/bin/x86_64-apple-darwin13.4.0-ar
ARFLAGS=r -c
RANLIB=/Users/dbergbrxkisez/Desktop/ml-project/bulldozer-price-prediction-project/env/bin/x86_64-apple-darwin13.4.0-ranlib
INSTALL_CMD=/usr/bin/install -c
