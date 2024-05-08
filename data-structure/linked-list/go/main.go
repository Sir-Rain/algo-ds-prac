package main

import "fmt"

type node struct {
	data interface{}
	next *node
}

type linkedList struct {
	head   *node
	length int
}

func (l *linkedList) append(n *node) {
	l.length++
	if l.head == nil {
		l.head = n
		return
	}
	l.head.next = n
}

func main() {
	testList := linkedList{}

	testList.append(&node{data: "hello"})

	testList.append(&node{data: "world"})

	fmt.Println(testList.head.data)
	fmt.Println(testList.head.next.data)
}
