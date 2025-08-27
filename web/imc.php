<?php
    $resultado = '';
    if($_SERVER['REQUEST_METHOD'] == 'POST') {
        $peso = $_POST['peso'];
        $altura = $_POST['altura'];
        
        if (is_numeric($peso) && is_numeric($altura) && $peso > 0 && $altura > 0) {
            $imc = $peso / ($altura * $altura);
            
            $classificacao = '';
            $cor = '';
            if ($imc < 18.5) {
                $classificacao = 'Abaixo do peso';
                $cor = '#ffc107';
            } elseif ($imc >= 18.5 && $imc <= 24.9) {
                $classificacao = 'Peso ideal';
                $cor = '#28a745';
            } elseif ($imc >= 25.0 && $imc <= 29.9) {
                $classificacao = 'Levemente acima do peso';
                $cor = '#fd7e14';
            } elseif ($imc >= 30.0 && $imc <= 34.9) {
                $classificacao = 'Obesidade grau I';
                $cor = '#dc3545';
            } elseif ($imc >= 35.0 && $imc <= 39.9) {
                $classificacao = 'Obesidade grau II (severa)';
                $cor = '#6f42c1';
            } else {
                $classificacao = 'Obesidade III (mórbida)';
                $cor = '#343a40';
            }
            
            $resultado = "
                <div style='text-align: center;'>
                    <h3>Resultado do seu IMC</h3>
                    <p><strong>Peso:</strong> " . number_format($peso, 1, ',', '.') . " kg</p>
                    <p><strong>Altura:</strong> " . number_format($altura, 2, ',', '.') . " m</p>
                    <p><strong>IMC:</strong> " . number_format($imc, 2, ',', '.') . "</p>
                    <p style='color: $cor; font-weight: bold; font-size: 1.2em;'>
                        $classificacao
                    </p>
                </div>
            ";
        } else {
            $resultado = "<p style='color: red; font-weight: bold;'>Por favor, digite valores válidos e maiores que zero!</p>";
        }
    }
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora de IMC</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 500px;
            margin: 50px auto;
            padding: 20px;
            background-color: #f5f5f5;
        }
        
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 4px 15px rgba(0,0,0,0.1);
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
        
        input {
            width: 100%;
            padding: 12px;
            margin-bottom: 15px;
            border: 2px solid #ddd;
            border-radius: 6px;
            box-sizing: border-box;
            font-size: 16px;
            transition: border-color 0.3s ease;
        }
        
        input:focus {
            border-color: #218838;
            outline: none;
        }
        
        button {
            width: 100%;
            padding: 15px;
            background-color: #28a745;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            font-size: 18px;
            font-weight: bold;
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
    </style>
</head>
<body>
    <div class="container">
        <h1>Calculadora de IMC</h1>
        
        <form method="POST">
            <label for="peso">Peso (em kg):</label>
            <input type="number" id="peso" name="peso" step="0.1" min="1" max="500" 
                   value="<?php echo isset($_POST['peso']) ? htmlspecialchars($_POST['peso']) : ''; ?>" 
                   placeholder="Ex: 70.5" required>
            
            <label for="altura">Altura (em metros):</label>
            <input type="number" id="altura" name="altura" step="0.01" min="0.5" max="3.0" 
                   value="<?php echo isset($_POST['altura']) ? htmlspecialchars($_POST['altura']) : ''; ?>" 
                   placeholder="Ex: 1.75" required>
            
            <button type="submit">Calcular IMC</button>
        </form>

        <?php if ($resultado): ?>
            <div class="resultado">
                <?php echo $resultado; ?>
            </div>
        <?php endif; ?>
    </div>
</body>
</html>