package main

import "fmt"

type node struct {
	data interface{}
	next *node
}

type linkedList struct {
	head   *node
	tail   *node
	length int
}

func (l *linkedList) append(n *node) {
	l.length++
	if l.head == nil {
		l.head = n
		l.tail = n
		return
	}
	tempNode := l.tail
	tempNode.next = n
	l.tail = tempNode.next
}

func main() {
	testList := linkedList{}

	testList.append(&node{data: "hello"})
	testList.append(&node{data: "new"})
	testList.append(&node{data: "world"})

	fmt.Println(testList.head.data)
	fmt.Println(testList.head.next.data)
	fmt.Println(testList.head.next.next.data)
}
