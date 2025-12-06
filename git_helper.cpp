#include <iostream>
#include <string>

void printStep(int number, std::string desc, std::string command) {
    std::cout << number << ". " << desc << ":\n";
    std::cout << "   " << command << "\n\n";
}

int main(int argc, char* argv[]) {
   
    if (argc < 2) {
        std::cout << "Usage: ./git_helper [command]\n";
        std::cout << "Available commands: new, push, update, branch\n";
        return 1;
    }


    std::string action = argv[1];

    std::cout << "GIT GUIDANCE FOR: " << action << "\n";

    if (action == "new") {
       
        printStep(1, "Initialize Git", "git init");
        printStep(2, "Add all files", "git add .");
        printStep(3, "Commit changes", "git commit -m \'Enter the message related to placing this commit'");
        printStep(4, "Link to GitHub (Replace URL)", "git remote add origin [URL]");
        printStep(5, "Push code", "git push -u origin main");
    } 
    else if (action == "push") {
       
        printStep(1, "Check status", "git status");
        printStep(2, "Stage changes", "git add .");
        printStep(3, "Save changes", "git commit -m \"Update code\"");
        printStep(4, "Upload to GitHub", "git push");
    } 
    else if (action == "update") {
        
        printStep(1, "Fetch updates", "git fetch");
        printStep(2, "Merge updates", "git pull origin main");
    }
    else if (action == "branch") {
        
        printStep(1, "Create & Switch to branch", "git checkout -b [branch-name]");
        printStep(2, "Do your work...", "...");
        printStep(3, "Push branch", "git push origin [branch-name]");
    }
    else {
        std::cout << "Sorry, I don't know this command yet.\n";
        std::cout << "Try: new, push, update, branch\n";
    }

    
    return 0;
}
