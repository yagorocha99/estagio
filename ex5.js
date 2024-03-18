function inverterString(s) {

    let stringInvertida = "";
    
    for (let i = s.length - 1; i >= 0; i--) {
    
        stringInvertida += s[i];
    }
    
    return stringInvertida;
}

let s = prompt("Digite uma string para inverter:");

alert("String invertida: " + inverterString(s));
