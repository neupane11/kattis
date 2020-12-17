const readline = require("readline");
const assert = require("assert").strict;



function input(){
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    //let linenum=1;
    var array=[]
    rl.on("line",line  => {
    //if(linenum==1)linenum++
    //else{
        //}
        if (line == '0 0 0')
        {
            send(array)
            rl.close()
        }   
        array.push(line)
    
    })
} 
function send(array)  
{
    var line=""
    for(var i=0;i<array.length;i++)
    {
        line=array[i]
        solve(line)
    }

}    
function solve(line)
{
    let nums=line.split(" ")
    for(var i in nums)
    {
        //console.log(parseInt(nums[i]))
        var r=parseInt(nums[0])
        var h=parseInt(nums[1])
        var s=parseInt(nums[2])
        
    }

    
    var total=0 //initial total length of string
    var x=Math.sqrt(Math.pow(h,2)-Math.pow(r,2)); //length of string on one side
    total+=2*x; //  lenght of both sides
    //console.log(total)

    var angle_above=2*Math.acos(r/h)*(180/Math.PI)//total angle of circle  above string attached in degree
    var angle_string=360-angle_above//angle of circle where string is sorrounds the ring
    //console.log(angle)
    total+=2*Math.PI*r*(angle_string/360) //perimeter of circle where string sorrounds the ring
    //console.log(total)
    total+=total*(s/100)// extra string to tie the knot (s is in percentage)
     
    var ans=total.toFixed(2)//final total length
    console.log(ans)
}
input()