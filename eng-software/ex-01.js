const fs = require('fs').promises;

async function lerArquivo() {
    try {
        const dados = await fs.readFile('./numeros.json', 'utf-8');
        maiorNumero(JSON.parse(dados))
    } catch (err) {
        console.error(`Erro: ${err}`);
    }
}


async function maiorNumero(lista) {
    let maiorNum = lista[0]

    lista.forEach(num => {
        if (num > maiorNum) {
            maiorNum = num;
        };
    });

    console.log(maiorNum);    
}

lerArquivo();