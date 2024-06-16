// // normal functions

// function myfun(){
//     console.log("hiiiiii");
// }


// myfun();



// // Arrow functions

// const sum=(a,b) =>{
//     console.log(a+b);
// }

// sum(3,4);


//  const product =(a,b)=>{
//       console.log(a*b);
//  }

//  product(3,6);



 // callback functions are passed as an arguement to another fucntion

 // FOR EACH loop uses callback f as arguement and performs this function over every element of array


 let arr1=[34,46,453,6,2,5,64,743];
 

 newval=(val)=>{
   console.log( val-10);
 };
 arr1.forEach(newval);



 let arr2=[4,5,32,6,2];
 arr2.forEach((val)=>{
    console.log(val-1);
 })


      // MAP  (creates new array with updated values of element)

//arr.map(callbackfunc(value,index,array))

let newarr=arr2.map((val)=>{
    return val*2;
})

console.log(newarr);


//  FILTER (it creates a new array with some filters)

let arr=[2,35,6,26,36783,22];
let evenArr=arr.filter((val)=>{
    return val%2==0;
})
console.log(evenArr);

let oddArr=arr.filter((val)=>{
    return val%2!=0;
})

console.log(oddArr);


// REDUCE(reduces array to a single result)

const reducedArr=arr.reduce((old,New)=>{
    return old+New;
})
console.log(reducedArr);