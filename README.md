# MDDTools
We can use "-h" to view the parameter description.

For ILFormatter.exe
-help    help information
-h       help information
-i       input file path of IL code file
-o       output file path of formatted IL

For ParserForSimulink.exe
-help    help information
-h       help information
-i       input file path of Simulink model
-o       output file path of MIR

For ILGenerator.exe
-help    help information
-h       help information
-i       input file path of MIR file
-o       output file path of generated IL code

For ILTranslatorForC.exe
-help    help information
-h       help information
-i       input file path of IL code file
-o       output dir of generated code
-c       generate comment(default is true)
-t       generate test code(default is false)

For ILTranslatorForCBMC.exe
-help    help information
-h       help information
-i       input file path of IL code file
-o       output dir of generated code
-f       full parameter assert enable(default is false)
-u       generate unreachable branch assert(default is false)
-t       generate tautology branch assert(default is false)
-c       generate comment(default is false)
