# gtest with docker
It contains dockerfile, description and usege of docker with samples of gtest.

#Usage: Example 1
1. First pulling images docker from: **docker pull nlopezr/gtest**.
  Web on docker hub : **https://hub.docker.com/r/nlopezr/gtest/**
2. Clone this repository: **https://github.com/n-lopez/gtest.git**
3. Move into ChatMock.
4. Execute cli: **$docker run -it --rm -v "$(pwd)":/opt/gtest -w /opt/gtest nlopezr/gtest /bin/bash -c "cmake .; make; ./ChatTest"**

#Usage: Example 2
1. First pulling images docker from docker pull nlopezr/gtest.
  Web on docker hub : https://hub.docker.com/r/nlopezr/gtest/
2. Clone this repository: https://github.com/n-lopez/gtest.git
3. Move into numerosPrimos.
4. Execute cli: **$docker run -it --rm -v "$(pwd)":/opt/gtest -w /opt/gtest nlopezr/gtest /bin/bash -c "cmake .; make; ./numerosPrimos"**
