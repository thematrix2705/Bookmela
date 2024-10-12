const value_1 = prompt("Enter a no : ");
const value_2 = prompt("Enter a no : ");

const op = prompt("Enter a operation you want to perform : ");

let ans = 0;

switch (op) {
    case '+':
        ans = value_1 + value_2;
        break;
    case '-':
        ans = value_1 -value_2;
        break;
    case '*':
         ans = value_1 * value_2;
         break;
    case '/':
        ans = value_1 / value_2;
}

console.log(`The ans of the operation is  ${ans}`)
