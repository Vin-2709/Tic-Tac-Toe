// DOM (DOCUMENT OBJECT MODEL)
// let div=document.querySelector(".CLASS");
// div.innerText="this is new div";
// div.style.fontSize="50px";
// div.style.color="yellow";
// div.style.backgroundColor="orange";


// // creation of new element
// let btn=document.createElement("button");
// btn.innerText="hi i am created";
// btn.style.height="400px";
// btn.style.fontSize="60px";
// btn.style.color="yellow";
// btn.style.backgroundColor="red";

// //append
// document.querySelector(".CLASS").append(btn);

// //append
// //prepend
// //before
// //after



// //remove
// document.querySelector("button").remove();



       //EVENT LISTENERS

let btn=document.createElement("button");
btn.innerText="Click";
btn.style.height="100px";
btn.style.width="100px";
btn.fontSize="30px";
btn.backgroundColor="white";
btn.color="blue";


document.querySelector("div").append(btn);


btn.addEventListener("click",()=>{
    console.log("pressed");
})

btn.onmousemove=()=>{
    console.log("caught you");
}


btn.addEventListener("keydown",()=>{
    console.log("keyboard pressesd");
})
