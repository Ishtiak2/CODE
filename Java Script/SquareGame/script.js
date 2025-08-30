let s1 = document.getElementById("sq1");
let s2 = document.getElementById("sq2");
let s3 = document.getElementById("sq3");
let s4 = document.getElementById("sq4");


s1.addEventListener("mouseenter", function() {
    x = Math.floor(Math.random() * (100 - 0) + 0);

    s1.innerHTML =  '<h1>'+x+'</h1>';
})
s1.addEventListener("mouseleave", function(){
    s1.innerHTML =  "<h1>1</h1>";
})

let x = 0;

s2.addEventListener("mouseenter", function() {
    if(x == 0) {
        s2.style.backgroundColor = "green";
        x++;
    }
    else if(x == 1){
        s2.style.backgroundColor = "red";
        x++;
    }
    else{
        s2.style.backgroundColor = "blue";
        x = 0;
    }
})

s2.addEventListener("mouseleave", function() {
    s2.style.backgroundColor = "white";
})


s3.addEventListener("mouseenter", function() {
    const letters = '0123456789ABCDEF';
    let color = '#';
    for (let i = 0; i < 6; i++) {
        color += letters[Math.floor(Math.random() * 16)];
    }
    
    s3.style.backgroundColor = color;

})
s3.addEventListener("mouseleave", function(){
    s3.style.backgroundColor = "white";
})


s4.addEventListener("click", function() {
    
    const letters = '0123456789ABCDEF';
    let color1 = '#'; 
    let color2 = '#';
    let color3 = '#';
    for (let i = 0; i < 6; i++) {
        color1 += letters[Math.floor(Math.random() * 16)];
        color2 += letters[Math.floor(Math.random() * 16)];
        color3 += letters[Math.floor(Math.random() * 16)];

    }

    s1.style.backgroundColor = color1;
    s2.style.backgroundColor = color2;
    s3.style.backgroundColor = color3;

})
s4.addEventListener("mouseleave", function() {
    s1.style.backgroundColor = "white";
    s2.style.backgroundColor = "white";
    s3.style.backgroundColor = "white";
})