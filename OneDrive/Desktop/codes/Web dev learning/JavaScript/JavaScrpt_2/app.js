// function rollADice() {
   
//     let result = Math.floor(Math.random()* 6) + 1;
//     console.log(parseInt(result));
// }
// let no = [];
// for (let i = 0; i < 3; i++){
//     no[i] = prompt("Enter  a no : ")
// }
// avg(parseInt(no[0]),parseInt(no[1]),parseInt(no[2]))
// function avg(no1, no2, no3) {
//     console.log((no1 + no2 + no3) / 3)
// }

// let no = prompt("Enter a no : ");
// for (let i = 1; i <= 10; i++) {
//     console.log(`${no}* ${ i } = ${parseInt(no*i)}`)
// }
// let no = prompt("Enter a no : ");

// function sum(no) {
//     let sum = 0;
//     for (let i = 1; i <= parseInt(no); i++) {
//         sum = i + sum;
//     }
//     return sum;
// }

// let result = sum(no);
// console.log(result)

// let str = ["hi", "hello", "bye", "!"]

// function concat(str) {
//     let result = ""
//     for (let i = 0; i < str.length;i++) {
//         result += str[i]
//     }
//     return result
// }

// console.log( concat(str))

// let sum = (a, b) => {
//     console.log(a);
//     console.log(a+b);
// };
// //
// let a = 0;
// let b = 0;
// function sum(a, b) {
//     a = parseInt(a);
//     b = parseInt(b);
//     console.log(a + b);
// }

// sum(5 , 1);

// let el = document.getElementsByTagName('p');
// el.innerText = "ok";
// console.dir(el)

let container = document.querySelector('.container');
let div = document.createElement("div");
let h1 = document.createElement("h1");
let p = document.createElement("p");
console.dir(div)
h1.innerText = "I'm in a div";
p.innerText = "ME TOO";

div.style.borderWidth = "5px";
div.style.backgroundColor = "pink";
div.style.borderBlockColor = "black";


div.appendChild(h1);
div.appendChild(p);
container.appendChild(div)

let p2 = document.createElement('p');
p2.innerText = "ok ";
div.appendChild(p2);

let btn = document.querySelector('#btn');
btn.innerText = "ok";
let para = document.querySelector('.para')
console.log(para);
console.log(btn);
console.log("ok")
// btn.innerText=`${p2}`;

// document.querySelector("body").append(div);