# SAGE Engine

[![Based on Godot Engine](https://img.shields.io/badge/Based%20on-Godot%20Engine-blue)](https://godotengine.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

**SAGE** (Super Advanced Game Engine) - это модифицированный игровой движок на основе Godot Engine с расширенной системой плагинов и модулей.

## Особенности

- 🔌 **Модульная архитектура** - легко добавляйте/удаляйте функциональность
- 🎮 **Совместимость с Godot** - поддержка существующих проектов
- ⚡ **Расширенные плагины** - GDExtension для высокопроизводительных расширений
- 🛠️ **Кастомные ноды** - создавайте собственные типы нод

## Структура

```
godot-engine/
├── modules/
│   └── sage_core/       # Ядро SAGE
├── platform/            # Платформенный код
├── scene/               # Система сцен
├── servers/             # Серверы (рендеринг, физика)
└── editor/              # Редактор
```

## Сборка

### Требования

- Python 3.6+
- SCons 3.0+
- Visual Studio 2019+ (Windows)
- Git

### Windows

```bash
# Клонировать репозиторий
git clone https://github.com/YOUR_USERNAME/SAGE.git
cd SAGE/godot-engine

# Собрать редактор
scons platform=windows target=editor -j8

# Собрать export templates
scons platform=windows target=template_release -j8
```

## Создание модулей

1. Создайте папку в `modules/`
2. Добавьте `config.py`, `SCsub`, `register_types.h/.cpp`
3. Пересоберите движок

## Синхронизация с upstream Godot

```bash
git fetch upstream
git merge upstream/master
```

## Лицензия

MIT License - см. [LICENSE.txt](LICENSE.txt)

Основан на [Godot Engine](https://godotengine.org/) © 2014-present Godot Engine contributors.
