{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compile and run",
            "type": "shell",
            "command": "python",  // Use "python" instead of "python3"
            "args": [
                "${relativeFile}"
            ],
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "presentation": {
                "reveal": "never"
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": {
                "owner": "python",
                "fileLocation": [
                    "relative",
                    "${workspaceFolder}"
                ],
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            }
        }
    ]
}




import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')
