# 🧮 Calculadora Moderna

Uma calculadora web moderna e elegante desenvolvida para a disciplina **ILP508** do **5º semestre** do curso de **Análise e Desenvolvimento de Sistemas (ADS) - FATEC**.

<div align="center">

![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![CSS3](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)

</div>

---

## 🚀 **Funcionalidades**

### ✨ **Operações Matemáticas**
- ➕ **Operações básicas**: adição, subtração, multiplicação e divisão
- 🔢 **Operações avançadas**: porcentagem, potenciação e raiz quadrada
- 🔄 **Funções utilitárias**: inversão de sinal (+/-) e decimal
- 🧹 **Limpeza**: Clear (C) e Clear Entry (CE)

### 🎨 **Interface Moderna**
- 🌓 **Alternância de tema**: modo claro e escuro
- 📱 **Design responsivo**: otimizado para desktop e mobile
- ♿ **Acessibilidade**: suporte completo para leitores de tela
- 🎯 **UX intuitiva**: feedback visual e animações suaves

### 📊 **Funcionalidades Avançadas**
- 📈 **Histórico de cálculos**: armazena e exibe operações anteriores
- ⌨️ **Suporte ao teclado**: controle completo via teclado físico
- 💾 **Persistência**: salva preferências e histórico no localStorage
- 🔌 **Liga/Desliga**: simulação de calculadora física

---

## 🛠 **Tecnologias Utilizadas**

### **Frontend**
- **HTML5 Semântico**: estrutura acessível e bem organizada
- **CSS3 Moderno**: Grid Layout, Flexbox, Custom Properties (CSS Variables)
- **JavaScript ES6+**: Classes, Modules, Arrow Functions, Template Literals

### **Design System**
- **Google Fonts**: tipografia Inter para melhor legibilidade
- **CSS Variables**: sistema de cores consistente e personalizável
- **Mobile First**: design responsivo com breakpoints otimizados

### **Acessibilidade**
- **ARIA Labels**: labels descritivos para elementos interativos
- **Semantic HTML**: uso correto de elementos semânticos
- **Keyboard Navigation**: navegação completa via teclado
- **Screen Reader Support**: compatibilidade com leitores de tela

---

## 📂 **Estrutura do Projeto**

```
Calculadora/
├── 📄 index.html              # Estrutura HTML principal
├── 📁 css/
│   └── 🎨 style.css          # Estilos CSS modernos
├── 📁 js/
│   └── ⚡ script.js          # Lógica JavaScript
└── 📖 Readme.md              # Documentação do projeto
```

---

## 🎯 **Como Usar**

### **Interface Web**
1. **Abrir**: Execute o arquivo `index.html` em qualquer navegador moderno
2. **Calcular**: Clique nos botões ou use o teclado para inserir operações
3. **Histórico**: Clique no ícone de relógio para ver cálculos anteriores
4. **Tema**: Use o botão de alternância para mudar entre claro/escuro

### **Atalhos do Teclado**
| Tecla | Função |
|-------|--------|
| `0-9` | Dígitos numéricos |
| `+` `-` `*` `/` | Operações básicas |
| `Enter` ou `=` | Calcular resultado |
| `Escape` ou `c` | Limpar tudo (Clear) |
| `Backspace` | Limpar entrada (Clear Entry) |
| `.` | Decimal |
| `%` | Porcentagem |

---

## 🔧 **Instalação e Execução**

### **Método 1: Execução Direta**
```bash
# Clone ou baixe o repositório
git clone [URL_DO_REPOSITORIO]

# Navegue até a pasta
cd Calculadora

# Abra o index.html em qualquer navegador
```

### **Método 2: Servidor Local (Recomendado)**
```bash
# Usando Python (se instalado)
python -m http.server 8000

# Usando Node.js Live Server
npx live-server

# Acesse: http://localhost:8000
```

### **Método 3: VS Code Live Server**
1. Instale a extensão "Live Server" no VS Code
2. Clique com o botão direito em `index.html`
3. Selecione "Open with Live Server"

---

## 💻 **Compatibilidade**

### **Navegadores Suportados**
- ✅ Chrome 88+ 
- ✅ Firefox 85+
- ✅ Safari 14+
- ✅ Edge 88+

### **Dispositivos**
- 🖥️ **Desktop**: Windows, macOS, Linux
- 📱 **Mobile**: iOS Safari, Android Chrome
- 📟 **Tablet**: iPadOS, Android

---

## 🎨 **Recursos de Design**

### **Sistema de Cores**
- **Tema Claro**: tons de azul e cinza para clareza
- **Tema Escuro**: paleta escura para reduzir fadiga ocular
- **Cores Semânticas**: verde (operações), laranja (funções), vermelho (limpeza)

### **Tipografia**
- **Fonte**: Inter (Google Fonts)
- **Pesos**: 300, 400, 500, 600, 700
- **Escala**: sistema tipográfico harmonioso

### **Animações**
- **Transições suaves**: 200ms-300ms para feedback visual
- **Hover effects**: estados interativos claros
- **Loading states**: feedback durante operações

---

## 🧪 **Funcionalidades Técnicas**

### **Arquitetura do JavaScript**
```javascript
class ModernCalculator {
  constructor()     // Inicialização
  init()           // Configuração inicial
  handleKeyPress() // Processamento de entrada
  calculate()      // Engine de cálculo
  updateDisplay()  // Atualização da interface
  saveHistory()    // Persistência de dados
}
```

### **Gestão de Estado**
- **Estado interno**: expressões, resultados, histórico
- **LocalStorage**: persistência de preferências e histórico
- **Event-driven**: arquitetura baseada em eventos

### **Tratamento de Erros**
- **Divisão por zero**: tratamento adequado
- **Overflow**: limitação de dígitos
- **Entrada inválida**: validação em tempo real

---

## 📚 **Conceitos Aplicados**

### **Programação Orientada a Objetos**
- ✅ **Encapsulamento**: métodos privados e públicos
- ✅ **Abstração**: interface clara e simples
- ✅ **Modularidade**: código organizado em classes

### **Boas Práticas de Desenvolvimento**
- ✅ **Clean Code**: código limpo e documentado
- ✅ **DRY**: evita repetição de código
- ✅ **SOLID**: princípios de design aplicados
- ✅ **Responsive Design**: mobile-first approach

### **Padrões Web Modernos**
- ✅ **Progressive Enhancement**: funcionalidade básica garantida
- ✅ **Graceful Degradation**: compatibilidade com navegadores antigos
- ✅ **Web Standards**: HTML5, CSS3, ES6+

---

## 🔮 **Futuras Melhorias**

### **Funcionalidades Planejadas**
- 🔢 **Operações científicas**: trigonometria, logaritmos
- 📊 **Gráficos**: visualização de funções
- 📱 **PWA**: instalação como app móvel
- 🔗 **Compartilhamento**: export de cálculos

### **Melhorias Técnicas**
- ⚡ **Performance**: otimização de renderização
- 🧪 **Testes**: unit tests com Jest
- 📦 **Build**: bundling com Webpack/Vite
- 🚀 **Deploy**: CI/CD automatizado

---

## 👨‍💻 **Autor**

**Leonardo Anacleto**
- 🎓 **Curso**: Análise e Desenvolvimento de Sistemas - FATEC
- 📅 **Semestre**: 5º sem - 2025
- 📧 **Disciplina**: ILP508 - Linguagem de Programação

---

## 📄 **Licença**

Este projeto foi desenvolvido para fins acadêmicos como parte do curso de **Análise e Desenvolvimento de Sistemas** da FATEC.

---

## 🚀 **Demonstração**

```bash
# Para ver a calculadora em ação:
1. Abra o arquivo index.html no navegador
2. Teste as operações básicas: 2 + 2 = 4
3. Experimente o tema escuro
4. Verifique o histórico de cálculos
5. Use o teclado para maior produtividade
```

---

<div align="center">

**🎯 Desenvolvido com ❤️ para aprendizado e prática de tecnologias web modernas**

*FATEC - Análise e Desenvolvimento de Sistemas - 2025*

</div>