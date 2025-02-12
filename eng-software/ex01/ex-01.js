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

// Como testar?
// Adicionar os números ao arquivo com nome "numeros.json", um em cada linha, seguidos de vírgula.
// Rodar o código no terminal com "node ex-01", o código retornará o maior número escrito
// Caso tenham letras ou textos escritos no arquivo o código retornará o maior número, ignorando os valores não numéricos

// Falhas
// Mudar o nome do arquivo onde tem os números