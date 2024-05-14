#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <memory>

class USBConnection {
private:
    static std::stack<int> ids;

    USBConnection(int id) : ID(id) {}

public:
    ~USBConnection() {
        ids.push(ID);
    }

    int getID() const {
        return ID;
    }

    static std::shared_ptr<USBConnection> createConnection() {
        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return std::make_shared<USBConnection>(id);
        } else {
            return nullptr;
        }
    }
};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif
