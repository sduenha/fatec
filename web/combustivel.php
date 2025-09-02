<?php
$recomendacao = '';

if($_SERVER['REQUEST_METHOD'] == 'POST') {
    $alcool = isset($_POST['alcool']) ? $_POST['alcool'] : '';
    $gasolina = isset($_POST['gasolina']) ? $_POST['gasolina'] : '';

    if (is_numeric($alcool) && is_numeric($gasolina) && $alcool > 0 && $gasolina > 0) {
        if ($gasolina == 0) {
            $recomendacao = "<p style='color: red; font-weight: bold;'>O preço da gasolina não pode ser zero!</p>";
        } else {
            $proporcao = $alcool / $gasolina;
            
            if ($proporcao < 0.7) {
                $recomendacao = "<p style='color: green; font-weight: bold;'>Use ÁLCOOL!<br>Proporção: " . number_format($proporcao, 3, ',', '.') . "</p>";
            } else {
                $recomendacao = "<p style='color: blue; font-weight: bold;'>Use GASOLINA!<br>Proporção: " . number_format($proporcao, 3, ',', '.') . "</p>";
            }
        }
    } else {
        $recomendacao = "<p style='color: red; font-weight: bold;'>Por favor, insira valores numéricos válidos e maiores que zero para ambos os combustíveis.</p>";
    }
}
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora de Combustível</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 400px;
            margin: 50px auto;
            padding: 20px;
            background-color: #f5f5f5;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }
        
        h1 {
            text-align: center;
            color: #333;
            margin-bottom: 25px;
        }
        
        label {
            display: block;
            margin: 15px 0 5px 0;
            font-weight: bold;
            color: #555;
        }
        
        input[type="number"] {
            width: calc(100% - 22px);
            padding: 10px;
            margin-bottom: 15px;
            border: 1px solid #ddd;
            border-radius: 5px;
            box-sizing: border-box;
            font-size: 16px;
        }

        input:focus {
            border-color: #218838;
            outline: none;
        }
        
        button {
            width: 100%;
            padding: 12px;
            background-color: #28a745;
            color: white;
            border: none;
            border-radius: 5px;
            font-size: 18px;
            cursor: pointer;
            margin-top: 20px;
            transition: background-color 0.3s ease;
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

        .explanation {
            margin-top: 25px;
            padding: 15px;
            background-color: #f8f9fa;
            border-left: 4px solid #28a745;
            border-radius: 5px;
            font-size: 0.9em;
            text-align: left;
            border-radius: 4px;
            color: #333;
        }

        .explanation ul li {
            margin-bottom: 1rem;
        }
    </style>
</head>
<body>
    <h1>Calculadora de Combustível</h1>
    
    <form method="POST" onsubmit="return validateForm()">
        <label for="alcool">Preço do Álcool (R\$):</label>
        <input type="number" id="alcool" name="alcool" step="0.01" 
               value="<?php echo isset($_POST['alcool']) ? htmlspecialchars($_POST['alcool']) : ''; ?>" required>
        
        <label for="gasolina">Preço da Gasolina (R\$):</label>
        <input type="number" id="gasolina" name="gasolina" step="0.01" 
               value="<?php echo isset($_POST['gasolina']) ? htmlspecialchars($_POST['gasolina']) : ''; ?>" required>
        
        <button type="submit">Calcular</button>
    </form>

    <?php if ($recomendacao): ?>
        <div class="resultado">
            <?php echo $recomendacao; ?>
        </div>
    <?php endif; ?>

    <div class="explanation">
        <ul>
            <li>Se (Preço Álcool ÷ Preço Gasolina) &lt; 0.7 → Use Álcool</li>
            <li>Se (Preço Álcool ÷ Preço Gasolina) ≥ 0.7 → Use Gasolina</li>
        </ul>
    </div>

    <script>
        function validateForm() {
            const alcool = document.getElementById('alcool').value;
            const gasolina = document.getElementById('gasolina').value;
            
            if (isNaN(alcool) || alcool <= 0) {
                alert('Por favor, insira um valor numérico válido para o álcool (maior que zero)');
                return false;
            }
            
            if (isNaN(gasolina) || gasolina <= 0) {
                alert('Por favor, insira um valor numérico válido para a gasolina (maior que zero)');
                return false;
            }
            
            return true;
        }
    </script>
</body>
</html>