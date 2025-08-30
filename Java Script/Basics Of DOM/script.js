let x = document.getElementById("ele1");
let y = document.getElementById("ele2");
let z = document.getElementById("ele3");


x.addEventListener("click", function() {
    x.style.color = "yellow";
    x.style.backgroundColor= "red"; 
})

x.addEventListener("mouseleave", function (params) {
    x.style.color = "black";
    x.style.backgroundColor= "white";
})



y.addEventListener("mouseenter", function() {
    y.style.color = "green";
    y.style.backgroundColor= "red"; 
})

y.addEventListener("mouseleave", function (params) {
    y.style.color = "black";
    y.style.backgroundColor= "white";
})


z.addEventListener("mouseenter", function() {
    x.style.color = "yellow";
    x.style.backgroundColor= "red";

    y.style.color = "blue";
    y.style.backgroundColor= "red"; 
})

z.addEventListener("mouseleave", function() {
    x.style.color = "black";
    x.style.backgroundColor= "white";

    y.style.color = "black";
    y.style.backgroundColor= "white"; 
})


