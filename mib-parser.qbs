import qbs

StaticLibrary {
    Depends { name: 'cpp' }
    consoleApplication: true
    cpp.cxxLanguageVersion: "c++23"
    cpp.includePaths: [
        "inc",
        "inc/kmx/mib",
        "/usr/local/include/antlr4-runtime"
    ]
    //cpp.cxxFlags: "-fsanitize=address"
    //cpp.staticLibraries: "asan"

    Group {
        name: "Headers"
        files: "inc/*.h"
        qbs.install: true
        qbs.installDir: "include/kmx/mib" // Headers will go into /usr/local/include/mylibrary
    }

    Group {
        name: "Source"
        files: [
            "MIBBaseListener.cpp",
            "MIBLexer.cpp",
            "MIBListener.cpp",
            "MIBParser.cpp",
        ]
        prefix: "src/kmx/mib/"
        qbs.install: false
    }

    Group {
        name: "Library"
        files: "*.a"
        qbs.install: true
        qbs.installDir: "lib" // Static library will go into /usr/local/lib
    }

    // Define installation path for the project
    qbs.install: true
    qbs.installPrefix: "/usr/local"  // Installing into the system's default location
}
