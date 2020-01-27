SRCS = test.cc		\
	   ../../sdk_cpp_code/in_sdk_body.pb.cc		\
	   ../../sdk_cpp_code/in_sdk_body_appmodule.pb.cc		\
	   ../../sdk_cpp_code/in_sdk_body_user.pb.cc		\
	   ../../sdk_cpp_code/in_sdk_footer.pb.cc		\
	   ../../sdk_cpp_code/in_sdk_header.pb.cc		\
	   ../../sdk_cpp_code/in_sdk.pb.cc
PROJECT = sdk_cpp_test

GCC = g++

LIB = -lprotobuf -lrt -lpthread

INCLUDE = -I./ -I../../sdk_cpp_code/

CFLAGS = 
CFLAG = -Wall 

OBJS=$(patsubst %.cc,%.o,$(SRCS))

$(PROJECT):$(OBJS)
	@ $(GCC) -o $@ $^ $(CFLAG) $(CFLAGS) $(LIB)
	@ du -b $(PROJECT)
	
clean:
	rm $(OBJS) $(PROJECT)

%.o:%.cc
	$(GCC) -c $(CFLAG) $(CFLAGS) $(INCLUDE) -o $@ $< 
