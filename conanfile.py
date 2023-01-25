from conans import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake
from conan.tools.layout import cmake_layout

class MyDataMyConsentSDKConan(ConanFile):
    name = "mydatamyconsent"
    version = "1.0.0"
    description = "My Data My Consent Rest API C++ SDK"
    url = "https://github.com/mydatamyconsent/cpp-sdk"
    homepage = "https://mydatamyconsent.com"
    topics = ("data-consent", "mydatamyconsent", "data-privacy", "consent", "financial-information", "data")
    license = "MIT"
    requires = "cpprestsdk/2.10.18","boost/1.76.0"
    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}    
    generators = "cmake_paths", "cmake_find_package", "cmake_find_package_multi"
    exports_sources = "CMakeLists.txt", "Config.cmake.in", "*.h", "*.cpp", "*/*"

    def config_options(self):
        if self.settings.os == "Windows":
            del self.options.fPIC

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["mydatamyconsent"]
