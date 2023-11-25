#!/bin/bash

docker-compose down

for i in 1 2 3 4 5 6 7 8 9 10
do
    echo "Executando docker-compose up -d (tentativa $i)"

    docker-compose up -d

    sleep 120
done

docker-compose logs