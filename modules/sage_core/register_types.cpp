/*
 * SAGE Engine - Core Module
 * Based on Godot Engine
 */

#include "register_types.h"

#include "core/object/class_db.h"

void initialize_sage_core_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    // Register SAGE core classes here
    // Example: ClassDB::register_class<SageNode>();
}

void uninitialize_sage_core_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    // Cleanup code here
}
