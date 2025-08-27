<?php
    $situacaoFinal = '';
    $media = null;
    $frequencia = null;

    function validarNota($nota) {
        return is_numeric($nota) && $nota >= 0 && $nota <= 10;
    }

    function validarFrequencia($freq) {
        return is_numeric($freq) && $freq >= 0 && $freq <= 100;
    }

    if($_SERVER['REQUEST_METHOD'] == 'POST') {
        $p1 = isset($_POST['p1']) ? $_POST['p1'] : '';
        $ai1 = isset($_POST['ai1']) ? $_POST['ai1'] : '';
        $p2 = isset($_POST['p2']) ? $_POST['p2'] : '';
        $ai2 = isset($_POST['ai2']) ? $_POST['ai2'] : '';
        $frequencia = isset($_POST['frequencia']) ? $_POST['frequencia'] : '';

        if (validarNota($p1) && validarNota($ai1) && validarNota($p2) && validarNota($ai2) && validarFrequencia($frequencia)) {
            $media = (($p1 + $ai1) + ($p2 + $ai2)) / 2;
            
            $cor = '';
            $statusTexto = '';

            if ($media >= 6 && $frequencia >= 75) {
                $statusTexto = 'Aprovado';
                $cor = '#28a745';
            } elseif ($media >= 6 && $frequencia < 75) {
                $statusTexto = 'Reprovado por frequência';
                $cor = '#ffc107';
            } elseif ($media < 6 && $frequencia >= 75) {
                $statusTexto = 'Reprovado por nota';
                $cor = '#dc3545';
            } else {
                $statusTexto = 'Reprovado por nota e frequência';
                $cor = '#6c757d';
            }

            $situacaoFinal = "
                <div style='text-align: center;'>
                    <h3>Resultado da Avaliação</h3>
                    <p><strong>Média Final:</strong> " . number_format($media, 2, ',', '.') . "</p>
                    <p><strong>Frequência:</strong> " . number_format($frequencia, 0, ',', '.') . "%</p>
                    <p style='color: $cor; font-weight: bold; font-size: 1.3em;'>
                        Situação: $statusTexto
                    </p>
                </div>
            ";

        } else {
            $situacaoFinal = "<p style='color: red; font-weight: bold;'>Por favor, preencha todos os campos com valores válidos (Notas de 0 a 10, Frequência de 0 a 100%).</p>";
        }
    }
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Situação Final do Aluno</title>
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
            color: #333;
        }

        .explanation h3 {
            margin-top: 0;
            color: #555;
        }

        .explanation ul li {
            margin-bottom: 1rem;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Situação Final do Aluno</h1>
        
        <form method="POST">
            <label for="p1">Nota da P1 (0-10):</label>
            <input type="number" id="p1" name="p1" step="0.01" min="0" max="10" value="<?php echo isset($_POST['p1']) ? htmlspecialchars($_POST['p1']) : ''; ?>" required>

            <label for="ai1">Nota da AI I (0-10):</label>
            <input type="number" id="ai1" name="ai1" step="0.01" min="0" max="10" value="<?php echo isset($_POST['ai1']) ? htmlspecialchars($_POST['ai1']) : ''; ?>" required>

            <label for="p2">Nota da P2 (0-10):</label>
            <input type="number" id="p2" name="p2" step="0.01" min="0" max="10" value="<?php echo isset($_POST['p2']) ? htmlspecialchars($_POST['p2']) : ''; ?>" required>
            
            <label for="ai2">Nota da AI II (0-10):</label>
            <input type="number" id="ai2" name="ai2" step="0.01" min="0" max="10" value="<?php echo isset($_POST['ai2']) ? htmlspecialchars($_POST['ai2']) : ''; ?>" required>
            
            <label for="frequencia">Frequência (0-100%):</label>
            <input type="number" id="frequencia" name="frequencia" step="1" min="0" max="100" value="<?php echo isset($_POST['frequencia']) ? htmlspecialchars($_POST['frequencia']) : ''; ?>" required>
            
            <button type="submit">Verificar Situação</button>
        </form>

        <?php if ($situacaoFinal): ?>
            <div class="resultado">
                <?php echo $situacaoFinal; ?>
            </div>
        <?php endif; ?>
        
        <div class="explanation">
            <ul>
                <li><strong>Média Final:</strong> ((P1+AI I) + (P2+AI II)) / 2</li>
                <li><strong>Aprovado:</strong> Média >= 6 E Frequência >= 75%</li>
                <li><strong>Reprovado por Frequência:</strong> Média >= 6 E Frequência < 75%</li>
                <li><strong>Reprovado por Nota:</strong> Média < 6 E Frequência >= 75%</li>
                <li><strong>Reprovado por Nota e Frequência:</strong> Média < 6 E Frequência < 75%</li>
            </ul>
        </div>
    </div>
</body>
</html>