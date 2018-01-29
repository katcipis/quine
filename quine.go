package main

import "fmt"

const code = "package main\n\nimport \"fmt\"\n\nconst code = %q\n\nfunc main() {\n\tfmt.Printf(code, code)\n}\n"

func main() {
	fmt.Printf(code, code)
}
