const readline = require("readline");
//const assert = require("assert").strict;

function input()    
{    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    var array=[]
    var count=0
    var stop=0

    rl.on('line',line=>{
        if(count==0){
            stop+=parseInt(line)
            count++
            return true
        }
        count++
        array.push(line)
       
        
        if(count>stop){
            rl.close()
            send(array)
        }
        
       // array.push(line)
       
    })

}
function send(array){
    var line
    for(var i=0;i<array.length;i++)
    {line = array[i].split(' ')
    line.shift()
    line.join(' ')
    //console.log(typeof(array))
    line = String(line)
    solve(line)}
}
function solve(line)
{
    
    //for(var i=0;i<line.length;i++)
    
        //console.log(line)
        var str=line.split(",")
        //console.log(str)
    var array=str.map((a)=>Number(a))
    //var array=str.match(/\d+/g) //gets every integer value from string in the form of array

    //console.log(array)
    // var array=[]
    
    // array.push(line)
    //for(var i=0;i<array.length;i++)
    //console.log(array[i])
    //isarithmetic(array)
    

    if(isarithmetic(array))
        {
            console.log("arithmetic")
            return true
            
        }
    
    array.sort(function(a,b){return b-a})
    permutedarithmetic=isarithmetic(array)
    if(permutedarithmetic)
        { 
            console.log("permuted arithmetic")
        }
        else
        {
            console.log("non-arithmetic")
        }
    
    //console.log("hi")
}

function isarithmetic(array)
{
    //console.log(array)
    //console.log(typeof(array[0]))
    var diff=array[1]-array[0]
    var flag = true
    //console.log(sumdiff)
    for(var i=1 ;i<array.length;i++)
    {  // console.log(array)
       
        if(array[i]-array[i-1]==diff)
        {
            //console.log(array[i])
            flag = true
        }
        else {
            return false
            
        }
        //return false
        //console.log(array)
    }
    return flag
}


input()