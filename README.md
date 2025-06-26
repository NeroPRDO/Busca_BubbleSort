# 🔍 Projeto: Busca e Ordenação em C com Menu Interativo

> Autor: **Pedro Eduardo**  
> Linguagem: **C**  
> IDE sugerida: **VSCode**  
> Sistema: Terminal (cmd, bash, etc.)

---

## 📌 Descrição do Projeto

Este programa em linguagem C tem como objetivo **demonstrar de forma prática** os conceitos de:

- Impressão de arrays
- Busca Linear
- Ordenação usando Bubble Sort
- Busca Binária

Além disso, o código oferece **um menu interativo** para que o usuário escolha entre executar o programa de forma:

- 🔁 Passo a passo (pressionando ENTER a cada etapa)
- 🚀 Execução completa de uma vez só

É ideal para estudantes e iniciantes que estão aprendendo sobre algoritmos de busca e ordenação.

---

## 🧠 Objetivos de Aprendizagem

Este projeto permite:

- Compreender a diferença entre **busca linear** e **busca binária**
- Praticar o uso de **laços, condições, vetores** e **funções**
- Aprender como usar menus interativos em C com `scanf`, `getchar` e mensagens no terminal
- Observar o efeito visual da ordenação passo a passo no terminal

---

## ⚙️ Funcionalidades

- ✅ Impressão do array original
- 🔍 Busca Linear do número 23
- 🔄 Ordenação com Bubble Sort
- 📈 Impressão do array ordenado
- 🔍 Busca Binária do número 23
- 🖥️ Menu com opção interativa para execução controlada

---

## 🧪 Exemplo de Execução

Ao rodar o programa, o usuário verá o seguinte:

```text
========================================
  Bem-vindo!
  Autor: Pedro Eduardo
========================================

Escolha o modo de execucao:
1 - Passo a passo (pressione ENTER a cada etapa).
0 - Executar tudo de uma vez
Digite sua escolha: _
```
---

Com base na escolha, o programa segue com a execução, mostrando mensagens como:

Array original:
88 42 17 95 23 56 71 3 39 64 

Executando busca linear para o numero 23...
Numero 23 encontrado na posicao 4 (busca linear).

Ordenando o array com Bubble Sort...
Array ordenado com sucesso!

Array ordenado:
3 17 23 39 42 56 64 71 88 95 

Executando busca binaria para o numero 23...
Numero 23 encontrado na posicao 2 (busca binaria).

Programa finalizado com sucesso!

---

🧩 Estrutura do Código.
O programa está dividido nas seguintes funções:

Função:	        Finalidade:

-esperarEnter()	Aguarda o usuário pressionar ENTER

-imprimirArray()	Mostra o conteúdo do array

-buscaLinear()	Percorre o array sequencialmente para encontrar um valor

-bubbleSort()	Ordena o array usando o algoritmo Bubble Sort

-buscaBinaria()	Realiza busca binária no array ordenado

---

🔨 Como Compilar e Executar

Abra o terminal ou cmd

Compile o código:

gcc Array_buscas.c -o [Nome desejado]

Execute o programa:

./programa

--- 

📚 Conceitos Envolvidos:

-Busca Linear:
Percorre o vetor elemento por elemento até encontrar o valor desejado. Ideal para listas não ordenadas.

-Bubble Sort:
Algoritmo de ordenação que faz múltiplas passagens pelo array, trocando pares de elementos fora de ordem.

-Busca Binária:
Procura um valor em uma lista ordenada, dividindo o espaço de busca ao meio em cada iteração.

---

📝 Observações:

O programa é totalmente feito em C padrão, sem bibliotecas externas.

Ideal para uso didático, em sala de aula ou para treinar lógica de programação.

O código é modularizado com funções bem definidas, facilitando a leitura e manutenção.

---

🏁 Conclusão
Este projeto cumpre o propósito de ser uma ferramenta simples e interativa para aprendizagem de algoritmos de busca e ordenação. A interação com o usuário via terminal torna a execução mais compreensível e visual, especialmente em ambiente acadêmico.

Pedro Eduardo Dall Agnol GRR-20240844
