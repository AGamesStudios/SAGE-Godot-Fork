# config.py for SAGE Core Module

def can_build(env, platform):
    return True

def configure(env):
    pass

def get_doc_classes():
    return [
        # Add your documented classes here
        # "SageNode",
    ]

def get_doc_path():
    return "doc_classes"
