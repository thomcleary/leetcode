FROM ubuntu

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get -y install unminimize && \
    (echo "y"; echo "y") | unminimize

# Tools
RUN apt-get update && \
    apt-get -y install wget curl fish bat less

# C
RUN apt-get update && \
    apt-get -y install gcc make gdb valgrind man-db manpages uthash-dev

# Python
RUN apt-get update && \
    apt-get -y install python3-pytest

# TypeScript
RUN apt-get update && \
    apt-get -y install unzip
# https://bun.sh/docs/installation#macos-and-linux
RUN curl -fsSL https://bun.sh/install | bash

# https://github.com/sharkdp/hyperfine?tab=readme-ov-file#on-ubuntu
RUN wget https://github.com/sharkdp/hyperfine/releases/download/v1.18.0/hyperfine_1.18.0_amd64.deb && \
    dpkg -i hyperfine_1.18.0_amd64.deb && \
    rm hyperfine_1.18.0_amd64.deb

# https://starship.rs/guide/#%F0%9F%9A%80-installation
RUN curl -sS https://starship.rs/install.sh | sh -s -- --yes

WORKDIR /root
COPY starship.toml .config/starship.toml
COPY config.fish .config/fish/config.fish

WORKDIR /leetcode
CMD ["fish"]
