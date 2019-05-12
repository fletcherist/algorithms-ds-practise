package main

import (
	"fmt"
)
func main() {
	n := 0
	fmt.Scan(&n)
	s := ""
	fmt.Scan(&s)
	ans := 0
	for _, char := range(s) {
		if char == rune('+') {
			ans = ans + 1
		} else if char == rune('-') {
			if ans != 0 {
				ans = ans - 1
			}
		}
	}
	fmt.Println(ans)
}