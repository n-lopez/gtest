FROM ubuntu:14.04
RUN apt-get update && apt-get install -y \ 
	libgtest-dev \
	build-essential \
	make \
	cmake \
	git
RUN mkdir -p /usr/src/gtest
WORKDIR /usr/src/gtest
RUN cmake .
RUN make
RUN mv libg* /usr/lib/
RUN git clone --branch release-1.6.0 https://github.com/google/googlemock.git
RUN git clone --branch release-1.6.0 https://github.com/google/googletest.git
RUN mv  googletest gtest
WORKDIR googlemock
RUN cmake .
RUN make
RUN mv libg* /usr/lib/
RUN cp -r ./include/gmock /usr/include/gmock
RUN ldconfig