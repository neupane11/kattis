/*
name:sandip neupane
adv js 2020 spring

kattis problem

problem solved using object(dicitionary)


*/





function input(){
    
    const lines = require('readline');
    const terminal = lines.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    terminal.on("line", input => {
        ans=solve(input)
        console.log(ans.join(' '))
    })
}
function solve(input) {
    
    var original = []
    var numbers = []
    original = input.split(' ')
   
    numbers = original.map((a) => a.match(/\d+/g))  //array of numbers from the input string
   
    
    
    for (var i = 0; i < original.length; i++) {
        if (numbers[i] === null)
        {
            continue
        } 
        else if (numbers[0]==original[0])
        {
            original[i] = flip(numbers[i])
            original[0] = original[0].split('')
            original[0][0] = original[0][0].toUpperCase()
            original[0] = original[0].join('')
        } 
        else
        {
            original[i] = flip(numbers[i])
        }
    }
    return original
}

function flip(a) {
    var tens = {        //dictionery for tens
        "00": 'zero',
        "0": 'zero',
        "10": 'ten',
        "20": 'twenty',
        "30": 'thirty',
        "40": 'forty',
        "50": 'fifty',
        "60": 'sixty',
        "70": 'seventy',
        "80": 'eighty',
        "90": 'ninety'
    }

    var singles = {   //dictionery for ones
        '00': 'zero',  
        '0': 'zero',
        '1': "one",
        '2': "two",
        '3': "three",
        '4': "four",
        '5': "five",
        '6': "six",
        '7': "seven",
        '8': "eight",
        '9': "nine",
        '10': "ten",
        '11': "eleven",
        '12': "twelve",
        '13': "thirteen",
        '14': "fourteen",
        '15': "fifteen",
        '16': "sixteen",
        '17': "seventeen",
        '18': "eighteen",
        '19': "nineteen"
    }

    var out;
    
    if (Number(a) % 10 == 0)
    {
        out = tens[a]
    }
    else if (Number(a) > 20) 
    {
        out = String((tens[a[0][0]+'0']))
        out = `${out}-${singles[a[0][1]]}`       
    }
    else 
    {
        out = singles[a]
    }

    return out
}
function test()
{
    const assert = require("assert").strict;
    assert.ok(solve("hi 9")=="hi nine")
    assert.ok(solve("30 is speed limit")=="Thirty is speed limit")
    assert.ok(solve("i am 22 years old")=="i am twenty-two years old")
    console.log("all test cases passed")
}

if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] == 'test') {
        test();
    } else {
        input();
    }
}

