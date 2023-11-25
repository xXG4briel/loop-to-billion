package main

import (
    "fmt"
    "time"
)

const billion = 1000000000

func main() {
    start := time.Now()

    for i := 0; i < billion; i++ {
    }

    elapsed := time.Since(start).Seconds()
    fmt.Printf("%.3f segundos\n", elapsed)
}
