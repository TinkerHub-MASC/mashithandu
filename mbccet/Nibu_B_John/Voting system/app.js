var count1 = 0;
var count2 = 0;
var button1 = "";
var button2 = "";



document.querySelectorAll("button")[0].addEventListener("click", ifdone);
document.querySelectorAll("button")[1].addEventListener("click", handleClick1);
document.querySelectorAll("button")[2].addEventListener("click", handleClick2);


function ifdone() {
     button1 =   document.getElementById("input1").value;
     button2 =   document.getElementById("input2").value;
    document.querySelectorAll("button")[1].innerHTML=button1; 
    document.querySelectorAll("button")[2].innerHTML=button2;
    document.querySelectorAll("h1")[0].innerHTML=button1;
    document.querySelectorAll("h1")[2].innerHTML=button2;
}
function handleClick1() {
    count1++;
    document.querySelectorAll("h1")[1].innerHTML=count1;
    if(count1==10){
        alert(button1 + " Wins!")
    }
}
function handleClick2() {
    count2++;
    document.querySelectorAll("h1")[3].innerHTML=count2;
    if(count2==10){
        alert(button2 + " Wins!")
    }
}