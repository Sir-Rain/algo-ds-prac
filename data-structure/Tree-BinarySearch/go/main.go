package main

import "fmt"

type Node struct {
	Key   int
	Left  *Node
	Right *Node
}

func (n *Node) insert(k int) {
	if n.Key < k {
		// Right Child

		if n.Right == nil {
			n.Right = &Node{Key: k}
		} else {
			n.Right.insert(k)
		}
	} else if n.Key > k {
		// Left Child
		if n.Left == nil {
			n.Left = &Node{Key: k}
		} else {
			n.Left.insert(k)
		}
	}
}

func (n *Node) search(k int) bool {

	if n == nil {
		return false
	}

	if n.Key < k {
		return n.Right.search(k)
	} else if n.Key > k {
		return n.Left.search(k)
	}

	return true
}

func main() {
	root := &Node{Key: 100}
	root.insert(99)
	root.insert(200)
	root.insert(101)

	fmt.Println(root.search(99))
	fmt.Println(root.search(102))

}
