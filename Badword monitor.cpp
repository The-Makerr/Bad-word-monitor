#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <algorithm>  // for std::transform

const std::string logFileName = "wordlog.txt";

std::string getCurrentTimestamp() {
    time_t now = time(0);
    struct tm timeinfo;
    char timestamp[80];
    localtime_s(&timeinfo, &now);
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", &timeinfo);
    return std::string(timestamp);
}

// Function to convert a string to lowercase
std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void showMessageBox(const std::string& word) {
    std::wstring wideWord(word.begin(), word.end());
    MessageBoxW(NULL, wideWord.c_str(), L"Warning", MB_ICONEXCLAMATION | MB_OK);
   

}

int main() {
    HWND consoleWindow = GetConsoleWindow(); // Get the console window handle
    ShowWindow(consoleWindow, SW_HIDE);
    std::string currentWord;
    while (true) {
        for (int key = 8; key <= 190; key++) {
            if (GetAsyncKeyState(key) == -32767) {
                if (key == VK_RETURN || key == VK_SPACE) {
                    if (!currentWord.empty()) {
                        std::string lowercaseWord = toLower(currentWord); // Convert word to lowercase

                        if (lowercaseWord == "fuck") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "shit") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "piss off") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "bastard") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "bitch") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "wanker") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "twat") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "nig") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }
                        if (lowercaseWord == "sexy") {
                            std::string timestamp = getCurrentTimestamp();
                          
                            showMessageBox("Please avoid using inappropriate language.");
                        }



                        currentWord.clear();
                    }
                }
                else {
                    char character = MapVirtualKey(key, 2);
                    if (isprint(character)) {
                        currentWord += character;
                    }
                }
            }
        }
    }
    return 0;
}
