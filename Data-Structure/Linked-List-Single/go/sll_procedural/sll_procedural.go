package sll_procedural

import (
	"fmt"
)

type NodeData int

type Node struct {
	Data NodeData
	Next *Node
}

func CreateNode(data NodeData) *Node {
	newNode := new(Node)
	newNode.Data = data
	newNode.Next = nil

	return newNode
}

func AppendNode(head **Node, newNode *Node) {
	if newNode == nil {
		// Error
		return
	}

	if *head == nil {
		*head = newNode
	} else {
		tail := *head
		for tail.Next != nil {
			tail = tail.Next
		}
		tail.Next = newNode
	}
}

func InsertAfter(currentNode *Node, newNode *Node) {
	if currentNode == nil || newNode == nil {
		// Error
		return
	}

	newNode.Next = currentNode.Next
	currentNode.Next = newNode
}

func InsertNewHead(currentHead **Node, newHead *Node) {
	if newHead == nil {
		return
	}
	newHead.Next = *currentHead
	*currentHead = newHead
}

func RemoveNode(currentHead **Node, node *Node) {
	if *currentHead == nil || node == nil {
		return
	}

	if *currentHead == node {
		*currentHead = node.Next
		return
	}

	current := *currentHead

	for current != nil && current.Next != node {
		current = current.Next
	}

	if current != nil {
		current.Next = node.Next
	}

}

func GetNodeAt(currentHead *Node, location int) *Node {
	current := currentHead
	count := 0

	for current != nil && count < location {
		current = current.Next
		count++
	}

	return current
}

func GetNodeCount(currentHead *Node) int {
	count := 0

	current := currentHead

	for current != nil {
		current = current.Next
		count++
	}

	return count
}

func PrintList(currentHead *Node) {
	current := currentHead

	for current != nil {
		fmt.Printf("%d ->", current.Data)
		current = current.Next
	}

	fmt.Println("nil")

}
