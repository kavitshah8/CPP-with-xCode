function RPN (seq) {

    if (seq.length <= 2) {
        console.log('Please enter valid RPN');
        return;
    }

    let operands = ['+', '-', '*', '/' ],
        stack = [],
        i = 0;

    stack.push(seq[i]);
    i++;

    while (i <= seq.length) {
        let item = seq[i];
        if (isNaN(item)) {
    	    let operandIndex = operands.indexOf(item);
            if (operandIndex == 0) {
                // pop the stack by removing the last element
                // splice mutates the array
                // let a = parseInt(stack.splice(-1)[0], 10),
                let a = parseInt(stack.pop(), 10),
                    b = parseInt(stack.pop(), 10);
                stack.push(a+b);
            }
            if (operandIndex == 1) {
                let a = parseInt(stack.pop(), 10),
                    b = parseInt(stack.pop(), 10);
                stack.push(b-a)
            }
            if (operandIndex == 2) {
                let a = parseInt(stack.pop(), 10),
                    b = parseInt(stack.pop(), 10);
                stack.push(a*b)
            }
            if (operandIndex == 3) {
                let a = parseInt(stack.pop(), 10),
                    b = parseInt(stack.pop(), 10);
                stack.push(b/a)
            }
      } else {
		stack.push(parseInt(item, 10));
      }
       i++
    }

    return stack[0];
};

console.log(RPN(["2", "1", "+", "3", "*"])) // 9
console.log(RPN(["4", "13", "5", "/", "+"])) // 6
console.log(RPN(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"])) // 22
console.log(RPN(["2", "1"])) // Please enter valid RPN undefined