<?php
    $resultado = '';
    if($_SERVER['REQUEST_METHOD'] == 'POST') {
        $valor = $_POST['valor'];
        $moeda = $_POST['moeda'];
        
        if (is_numeric($valor) && $valor > 0) {
            $cotacoes = [
                'dolar' => 5.20,
                'euro' => 5.65,
                'libra' => 6.45
            ];
            
            $valorConvertido = $valor / $cotacoes[$moeda];
            $simbolos = [
                'dolar' => 'US\$',
                'euro' => '€',
                'libra' => '£'
            ];
            
            $nomes = [
                'dolar' => 'Dólares',
                'euro' => 'Euros',
                'libra' => 'Libras'
            ];
            
            $resultado = "<p style='color: green; font-weight: bold;'>
                R\$ " . number_format($valor, 2, ',', '.') . " = " . 
                $simbolos[$moeda] . " " . number_format($valorConvertido, 2, ',', '.') . "
                <br><small>Cotação: R\$ " . number_format($cotacoes[$moeda], 2, ',', '.') . " por " . $nomes[$moeda] . "</small>
            </p>";
        } else {
            $resultado = "<p style='color: red; font-weight: bold;'>Por favor, digite um valor válido maior que zero!</p>";
        }
    }
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Conversor de Moedas</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 400px;
            margin: 50px auto;
            padding: 20px;
            background-color: #f5f5f5;
        }
        
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        
        h1 {
            text-align: center;
            color: #333;
            margin-bottom: 30px;
        }
        
        label {
            display: block;
            margin: 15px 0 5px 0;
            font-weight: bold;
            color: #555;
        }
        
        input, select {
            width: 100%;
            padding: 12px;
            margin-bottom: 15px;
            border: 1px solid #ddd;
            border-radius: 4px;
            box-sizing: border-box;
            font-size: 16px;
        }

        input:focus, select:focus {
            border-color: #218838;
            outline: none;
        }
        
        button {
            width: 100%;
            padding: 12px;
            background-color: #28a745;
            color: white;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            font-size: 16px;
            font-weight: bold;
        }
        
        button:hover {
            background-color: #218838;
        }
        
        .resultado {
            margin-top: 20px;
            padding: 15px;
            background-color: #f8f9fa;
            border-radius: 4px;
            text-align: center;
            line-height: 2rem;
        }    
    </style>
</head>
<body>
    <div class="container">
        <h1>Conversor de Moedas</h1>
        
        <form method="POST">
            <label for="valor">Valor em Reais (R\$):</label>
            <input type="number" id="valor" name="valor" step="0.01" min="0.01" required placeholder="Ex: 100.00">
            
            <label for="moeda">Converter para:</label>
            <select id="moeda" name="moeda" required>
                <option value="">Selecione a moeda</option>
                <option value="dolar">🇺🇸 Dólar Americano (USD)</option>
                <option value="euro">🇪🇺 Euro (EUR)</option>
                <option value="libra">🇬🇧 Libra Esterlina (GBP)</option>
            </select>
            
            <button type="submit">Converter</button>
        </form>

        <?php if ($resultado): ?>
            <div class="resultado">
                <?php echo $resultado; ?>
            </div>
        <?php endif; ?>
    </div>
</body>
</html>