FROM alpine:latest

ARG USERNAME=atcoder
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN apk update \
    && apk add --no-cache build-base gdb git \
    && rm -rf /var/cache/apk/* \
    && addgroup -S ${USERNAME} && adduser -S ${USERNAME} -G ${USERNAME}

USER ${USERNAME}
