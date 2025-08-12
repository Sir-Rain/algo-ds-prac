
type NodeDT = i32;

pub struct Node {
    data: NodeDT,
}

pub struct ArrayStack {
    nodes: Vec<Node>,
}

pub fn create_stack(capacity: usize) -> ArrayStack {
    ArrayStack {
        nodes: Vec::with_capacity(capacity),
    }
}

pub fn push(stack: &mut ArrayStack, data: NodeDT) {
    stack.nodes.push(Node { data: data });
}

pub fn pop(stack: &mut ArrayStack) -> Option<NodeDT> {
    match stack.nodes.pop() {
        Some(node) => Some(node.data),
        None => None
    }
}

pub fn top(stack: &ArrayStack) -> Option<NodeDT> {
    match stack.nodes.last() {
        Some(node) => Some(node.data),
        None => None
    }
}

pub fn get_stack_size(stack: &ArrayStack) -> usize {
    return stack.nodes.len();
}

pub fn is_empty(stack: &ArrayStack) -> bool {
    return stack.nodes.is_empty();
}

