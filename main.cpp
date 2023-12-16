// main.cpp

#include <QApplication>
#include <QMessageBox>
#include <QPixmap>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "LINKEDLIST.h" 

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setupUI();
        setupConnections();
    }

private slots:
    void loginButtonClicked() {
        QString email = emailLineEdit->text();
        QString password = passwordLineEdit->text();

        // Replace with your linked list implementation
        if (userList.contains(email, password)) {
            QMessageBox::information(this, "Login Successful", "Welcome, " + email + "!");
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid email or password. Please try again.");
        }
    }

    void signUpButtonClicked() {
        // Implement your signup logic here
        // For simplicity, display a message
        QMessageBox::information(this, "Sign Up", "Sign Up functionality not implemented yet.");
    }

private:
    void setupUI() {
        QVBoxLayout *mainLayout = new QVBoxLayout(this);

        // Load background image
        QLabel *backgroundLabel = new QLabel(this);
        QPixmap backgroundPixmap("pp.jpg"); // Replace with your actual image file
        backgroundLabel->setPixmap(backgroundPixmap.scaled(this->size(), Qt::IgnoreAspectRatio));
        mainLayout->addWidget(backgroundLabel);

        // Create login controls
        emailLineEdit = new QLineEdit(this);
        passwordLineEdit = new QLineEdit(this);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        loginButton = new QPushButton("Login", this);
        signUpButton = new QPushButton("Sign Up", this);

        // Create layout for login controls
        QVBoxLayout *loginLayout = new QVBoxLayout();
        loginLayout->addWidget(new QLabel("Email:", this));
        loginLayout->addWidget(emailLineEdit);
        loginLayout->addWidget(new QLabel("Password:", this));
        loginLayout->addWidget(passwordLineEdit);
        loginLayout->addWidget(loginButton);
        loginLayout->addWidget(signUpButton);

        // Add login layout to the main layout
        mainLayout->addLayout(loginLayout);

        setLayout(mainLayout);
    }

    void setupConnections() {
        connect(loginButton, &QPushButton::clicked, this, &MainWindow::loginButtonClicked);
        connect(signUpButton, &QPushButton::clicked, this, &MainWindow::signUpButtonClicked);
    }

private:
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *signUpButton;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Load your linked list with user data
    LinkedList userList;
    // Add sample user data (replace with actual data)
    userList.addUser("user1@example.com", "password1");
    userList.addUser("user2@example.com", "password2");

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}

#include "main.moc"
