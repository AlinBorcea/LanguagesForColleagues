package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

const (
	sep = "_"
)

func main() {

	if len(os.Args) != 3 {
		fmt.Println("Error! Not enough CLI arguments!")
		fmt.Println("Provided only", len(os.Args))
		os.Exit(1)
	}

	string := os.Args[1]
	length, err := strconv.Atoi(os.Args[2])
	if err != nil {
		fmt.Println("Error reading argument 2")
		os.Exit(1)
	}

	count := 0
	splits := strings.Split(string, sep)
	for _, element := range splits {
		if len(element) == length {
			count++
		}
	}

	fmt.Println("The string was", string)
	fmt.Println("Target words:", count)
}
