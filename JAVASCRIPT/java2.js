//conditional statements

// let age=15
// let condition=age>18?"adult":"child";


// console.log(condition);


// // for of loop (to perform every element)

// let s="vineet";
// for(let i of s){
//     console.log(i);
// }



// let st="12345677889";
// for(let i of st){
//     console.log(i);
// }



// //use of for of in objects

// const person={
//     name:"ananya",
//     class:10,
//     height:5,
//     state:"delhi",
// }

// // "in" is used in place of "of"
// for(let key in person){
//     console.log(person[key]);
// }



// correct no. guessing

// let correctno=27;
// let userNum=prompt("Enter correct password:");
// while(userNum!=correctno){
//     prompt("Enter again:");
//     if(userNum==correctno) break;

// }

// console.log("Correct password");





                               // strings 

 let a="vidhuruu";
 let s=`this is a template literal`;
 console.log(a.toUpperCase());       //upper case
console.log(a.slice(1,6));           //slice
console.log(s.concat(a));             //concat

console.log(a.replaceAll('u','x'));  //replace 

console.log(a.charAt(3));            //find char at particular index




                              // Arrays 

let arr=[2,3,5,6,"apple", "mango"];
 

for (let ele of arr){
    console.log(ele);
}


// methods

arr.push("litchi");
console.log(arr);

arr.pop();
console.log(arr);

arr.unshift(1);
console.log(arr);


arr.shift();
console.log(arr);


//slice does not change original array
console.log(arr.slice(3,5));


// arr.splice(strtidx,delcount,newele)
//splice  change original array
arr.splice(2,0,4);
console.log(arr);