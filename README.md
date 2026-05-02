Super Trunfo em C

Este projeto é um programa em linguagem C que simula a comparação de duas cartas no estilo Super Trunfo, utilizando dados de cidades.

📌 Funcionalidades

Entrada de dados para duas cartas:
Estado
Código
Nome da cidade
População
Área (km²)
PIB
Pontos turísticos
Cálculo automático de:
Densidade populacional
PIB per capita
Super Poder
Comparação entre as cartas:
Determina qual carta possui o maior Super Poder
Exibe o vencedor ou empate

🧮 Fórmulas utilizadas

Densidade populacional
densidade = população / área
PIB per capita
pibPerCapita = PIB / população
Super Poder
superPoder = população + área + PIB + pontos turísticos + (1 / densidade) + PIB per capita

▶️ Como executar

Compile o programa:
gcc super_trunfo.c -o super_trunfo
Execute:
./super_trunfo
Insira os dados solicitados no terminal.

💡 Exemplo de saída

O vencedor é a Carta 1 com Super Poder: 1234567.89

ou

Empate! Ambas têm Super Poder: 1234567.89

🛠️ Tecnologias

Linguagem C
Compilador GCC

📚 Aprendizados

Este projeto ajuda a praticar:

Entrada e saída de dados (scanf e printf)
Uso de variáveis
Operações matemáticas
Estruturas condicionais (if/else)
Organização de código
