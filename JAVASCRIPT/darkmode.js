let btn=document.querySelector(".btn");
let Currmode="light";


document.querySelector("body").append(btn);
btn.addEventListener("click",()=>{
    if(Currmode=="dark"){
          Currmode="light";
          document.querySelector("body").style.backgroundColor="white";
          document.querySelector(".btn").innerText="Dark Mode";
    }
    else{
        Currmode="dark";
        document.querySelector("body").style.backgroundColor="black";
        document.querySelector(".btn").innerText="Light Mode";
    }
})



