class ModernCalculator {
	constructor() {
		// Estado da calculadora
		this.isOn = true;
		this.expression = "";
		this.lastResult = "0";
		this.history = this.loadHistory();

		// Elementos DOM
		this.elements = {
			calculator: document.getElementById("calculator"),
			display: document.getElementById("display"),
			expression: document.getElementById("expression"),
			result: document.getElementById("result"),
			keypad: document.getElementById("keypad"),
			history: document.getElementById("history"),
			historyList: document.getElementById("historyList"),
			themeToggle: document.getElementById("themeToggle"),
			historyToggle: document.getElementById("historyToggle"),
			clearHistory: document.getElementById("clearHistory"),
		};

		this.init();
	}

	init() {
		this.setupEventListeners();
		this.loadTheme();
		this.updateDisplay();
		this.renderHistory();
		this.setupKeyboardSupport();
	}

	setupEventListeners() {
		// Eventos do teclado
		this.elements.keypad.addEventListener(
			"click",
			this.handleKeyPress.bind(this)
		);

		// Alternância de tema
		this.elements.themeToggle.addEventListener(
			"click",
			this.toggleTheme.bind(this)
		);

		// Alternância do histórico
		this.elements.historyToggle.addEventListener(
			"click",
			this.toggleHistory.bind(this)
		);

		// Limpar histórico
		this.elements.clearHistory.addEventListener(
			"click",
			this.clearHistory.bind(this)
		);

		// Clique em item do histórico
		this.elements.historyList.addEventListener(
			"click",
			this.handleHistoryClick.bind(this)
		);
	}

	setupKeyboardSupport() {
		document.addEventListener("keydown", (e) => {
			if (!this.isOn) return;

			// Mapeamento de teclas para ações
			const keyMap = {
				0: "0",
				1: "1",
				2: "2",
				3: "3",
				4: "4",
				5: "5",
				6: "6",
				7: "7",
				8: "8",
				9: "9",
				"+": "add",
				"-": "subtract",
				"*": "multiply",
				"/": "divide",
				Enter: "equals",
				"=": "equals",
				Escape: "clear",
				Backspace: "clear",
				".": "decimal",
				",": "decimal",
				"(": "openParen",
				")": "closeParen",
				"%": "percent",
			};

			const key = keyMap[e.key];
			if (key) {
				e.preventDefault();
				this.processInput(key);
				this.animateKey(key);
			}
		});
	}

	handleKeyPress(e) {
		const key = e.target.closest(".key");
		if (!key) return;

		const keyType = key.dataset.key;
		this.animateKey(keyType);

		if (keyType === "power") {
			this.togglePower();
		} else if (this.isOn) {
			this.processInput(keyType);
		}
	}

	processInput(keyType) {
		switch (keyType) {
			case "clear":
				this.clear();
				break;
			case "equals":
				this.calculate();
				break;
			case "decimal":
				this.addDecimal();
				break;
			case "percent":
				this.addPercent();
				break;
			case "sqrt":
				this.addFunction("√");
				break;
			case "exponent":
				this.addOperator("^");
				break;
			case "add":
				this.addOperator("+");
				break;
			case "subtract":
				this.addOperator("−");
				break;
			case "multiply":
				this.addOperator("×");
				break;
			case "divide":
				this.addOperator("÷");
				break;
			case "openParen":
				this.addOperator("(");
				break;
			case "closeParen":
				this.addOperator(")");
				break;
			default:
				if (/^\d$/.test(keyType)) {
					this.addNumber(keyType);
				}
				break;
		}

		this.updateDisplay();
	}

	addNumber(num) {
		this.expression += num;
	}

	addOperator(op) {
		if (this.expression && !/[\+\-\×\÷\^\(\)]$/.test(this.expression)) {
			this.expression += ` ${op} `;
		} else if (op === "(" || this.expression === "") {
			this.expression += op === "(" ? "(" : op;
		}
	}

	addDecimal() {
		const parts = this.expression.split(/[\+\-\×\÷\^\(\)]/);
		const lastPart = parts[parts.length - 1];

		if (!lastPart.includes(",")) {
			this.expression += lastPart ? "," : "0,";
		}
	}

	addPercent() {
		if (this.expression && /\d$/.test(this.expression)) {
			this.expression += "%";
		}
	}

	addFunction(func) {
		if (func === "√") {
			this.expression += "√";
		} else {
			this.expression += `${func}(`;
		}
	}

	clear() {
		this.expression = "";
		this.lastResult = "0";
	}

	calculate() {
		if (!this.expression.trim()) return;

		try {
			const sanitizedExpression = this.sanitizeExpression(this.expression);
			const result = this.evaluateExpression(sanitizedExpression);

			if (isFinite(result)) {
				this.addToHistory(this.expression, result);
				this.lastResult = this.formatResult(result);
				this.expression = "";
				this.animateResult();
			} else {
				throw new Error("Invalid result");
			}
		} catch (error) {
			console.error("Calculation error:", error);
			this.lastResult = "Erro";
			this.expression = "";
			this.animateError();
		}
	}

	sanitizeExpression(expr) {
		// Converte símbolos visuais para operadores JavaScript
		return expr
			.replace(/,/g, ".")
			.replace(/×/g, "*")
			.replace(/÷/g, "/")
			.replace(/−/g, "-")
			.replace(/\^/g, "**")
			.replace(/√\s*\(/g, "Math.sqrt(")
			.replace(/√([0-9.]+)/g, "Math.sqrt($1)")
			.replace(/%/g, "/100")
			.replace(/(\d+)\s*\(/g, "$1*(");
	}

	evaluateExpression(expr) {
		// Avaliação segura usando construtor Function
		const mathFunctions = /Math\.(sqrt|pow|sin|cos|tan|log|exp)\(/g;
		const cleanExpr = expr.replace(mathFunctions, "");
		const allowedChars = /^[0-9+\-*/.() \t\n\r]*$/;

		if (!allowedChars.test(cleanExpr)) {
			throw new Error("Invalid characters");
		}

		return Function(`"use strict"; return (${expr})`)();
	}

	formatResult(result) {
		// Formata resultado para exibição em português BR
		if (Number.isInteger(result)) {
			return result.toString();
		}

		const fixed = parseFloat(result.toFixed(10));
		return fixed.toString().replace(".", ",");
	}

	togglePower() {
		this.isOn = !this.isOn;
		this.elements.calculator.classList.toggle("disabled", !this.isOn);

		if (!this.isOn) {
			this.expression = "";
			this.lastResult = "";
		} else {
			this.lastResult = "0";
		}

		this.updateDisplay();
	}

	updateDisplay() {
		this.elements.expression.textContent = this.expression || "";
		this.elements.result.textContent = this.lastResult;

		// Atualiza display com transição suave
		this.elements.result.style.opacity = "0";
		setTimeout(() => {
			this.elements.result.style.opacity = "1";
		}, 50);
	}

	animateKey(keyType) {
		const key = document.querySelector(`[data-key="${keyType}"]`);
		if (key) {
			key.classList.add("animate-pulse");
			setTimeout(() => key.classList.remove("animate-pulse"), 200);
		}
	}

	animateResult() {
		this.elements.result.classList.add("animate");
		setTimeout(() => this.elements.result.classList.remove("animate"), 300);
	}

	animateError() {
		this.elements.display.style.animation = "shake 0.5s ease-in-out";
		setTimeout(() => {
			this.elements.display.style.animation = "";
		}, 500);
	}

	// Gerenciamento do histórico
	addToHistory(expression, result) {
		const item = {
			id: Date.now(),
			expression,
			result: this.formatResult(result),
			timestamp: new Date().toLocaleString("pt-BR"),
		};

		this.history.unshift(item);
		if (this.history.length > 50) this.history.pop();

		this.saveHistory();
		this.renderHistory();
	}

	renderHistory() {
		if (this.history.length === 0) {
			this.elements.historyList.innerHTML = `
				<div class="history__empty">
					<svg class="icon" viewBox="0 0 24 24" fill="none" stroke="currentColor">
						<circle cx="12" cy="12" r="10"/>
						<line x1="12" y1="8" x2="12" y2="12"/>
						<line x1="12" y1="16" x2="12.01" y2="16"/>
					</svg>
					<p>Nenhum cálculo realizado</p>
				</div>
			`;
			return;
		}

		this.elements.historyList.innerHTML = this.history
			.map(
				(item) => `
				<div class="history__item animate-slide-in" data-expression="${item.expression}">
					<div class="history__item-expression">${item.expression}</div>
					<div class="history__item-result">= ${item.result}</div>
				</div>
			`
			)
			.join("");
	}

	handleHistoryClick(e) {
		const item = e.target.closest(".history__item");
		if (item) {
			const expression = item.dataset.expression;
			this.expression = expression;
			this.updateDisplay();
			this.toggleHistory(); // Fecha histórico após seleção
		}
	}

	clearHistory() {
		this.history = [];
		this.saveHistory();
		this.renderHistory();
	}

	loadHistory() {
		try {
			return JSON.parse(localStorage.getItem("calculator-history")) || [];
		} catch {
			return [];
		}
	}

	saveHistory() {
		localStorage.setItem("calculator-history", JSON.stringify(this.history));
	}

	toggleTheme() {
		const currentTheme = document.documentElement.getAttribute("data-theme");
		const newTheme = currentTheme === "dark" ? "light" : "dark";

		document.documentElement.setAttribute("data-theme", newTheme);
		localStorage.setItem("calculator-theme", newTheme);

		// Adiciona efeito de transição
		document.documentElement.style.transition = "all 0.3s ease";
		setTimeout(() => {
			document.documentElement.style.transition = "";
		}, 300);
	}

	loadTheme() {
		const savedTheme = localStorage.getItem("calculator-theme") || "light";
		document.documentElement.setAttribute("data-theme", savedTheme);
	}

	// Gerenciamento do painel de histórico
	toggleHistory() {
		const isVisible = this.elements.history.classList.contains("show");
		this.elements.history.classList.toggle("show", !isVisible);

		if (!isVisible) {
			this.renderHistory();
		}
	}
}

// Inicialização do tema antes do carregamento do DOM
const initTheme = () => {
	const savedTheme =
		localStorage.getItem("calculator-theme") ||
		(window.matchMedia("(prefers-color-scheme: dark)").matches
			? "dark"
			: "light");
	document.documentElement.setAttribute("data-theme", savedTheme);
};

// Inicializa tema imediatamente
initTheme();


document.addEventListener("DOMContentLoaded", () => {
	window.calculator = new ModernCalculator();
});


const style = document.createElement("style");
style.textContent = `
	@keyframes shake {
		0%, 100% { transform: translateX(0); }
		10%, 30%, 50%, 70%, 90% { transform: translateX(-2px); }
		20%, 40%, 60%, 80% { transform: translateX(2px); }
	}
`;
document.head.appendChild(style);
