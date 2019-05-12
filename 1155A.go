// solve time 7:53
package main

import "fmt"

func main() {
	var s string
	var length int
	fmt.Scan(&length)
	fmt.Scan(&s)
	i := 0
	for i < len(s) - 2 {
		e := i + 1
		for e < len(s) - 1 {
			if s[i] > s[e] {
				fmt.Println("YES")
				fmt.Println(i+1, e+1)
				return
			}
			e = e + 1
		}
		i = i + 1
	}
	fmt.Println("NO")
}