var container = document.querySelector(".container");
var elements = document.querySelectorAll(".raw");


for (var i=0;i<elements.length;i++){
    elements[i].addEventListener("mouseenter",(e)=>
    {
        if (e.buttons>0){
            if(e.target.style.backgroundColor != "rgb(0, 0, 0)"){
                e.target.style.backgroundColor = "#000";
            } else{
                e.target.style.backgroundColor = "#fff";
            }
        }
    });
    elements[i].addEventListener("mousedown",(e)=>
    {
        if(e.target.style.backgroundColor != "rgb(0, 0, 0)"){
            e.target.style.backgroundColor = "#000";
        } else{
            e.target.style.backgroundColor = "#fff";
        }
        
    });
}

document.addEventListener("keypress",(e)=>{
    if(e.key=="r"){
        for(var i=0;i<elements.length;i++){
            elements[i].style.backgroundColor = "#fff";
        }
    }
    if (e.key=="Enter"){
        var bitmap="";
        for(var i=0;i<7;i++){
            for (var j=0;j<5;j++){
                if(elements[i*5+j].style.backgroundColor== "rgb(0, 0, 0)"){
                    bitmap += "1";
                }else{
                    bitmap += "0";
                }
            }
            bitmap += "\n"
        }
        console.log(bitmap);
    }
});