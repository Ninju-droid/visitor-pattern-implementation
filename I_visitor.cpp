#include<iostream>
#include "header.h"
using namespace std; 

void concrete_visitor_one::visit(concrete_element_one*) {
    cout << "Visitor1 -> Element1\n";
}

void concrete_visitor_one::visit(concrete_element_two*) {
    cout << "Visitor1 -> Element2\n";
}

void concrete_visitor_one::visit(concrete_element_three*) {
    cout << "Visitor1 -> Element3\n";
}

void concrete_visitor_one::visit(concrete_element_four*) {
    cout << "Visitor1 -> Element4\n";
}

void concrete_visitor_two::visit(concrete_element_one*) {
    cout << "Visitor2 -> Element1\n";
}

void concrete_visitor_two::visit(concrete_element_two*) {
    cout << "Visitor2 -> Element2\n";
}

void concrete_visitor_two::visit(concrete_element_three*) {
    cout << "Visitor2 -> Element3\n";
}

void concrete_visitor_two::visit(concrete_element_four*) {
    cout << "Visitor2 -> Element4\n";
}

void concrete_visitor_three::visit(concrete_element_one*) {
    cout << "Visitor3 -> Element1\n";
}

void concrete_visitor_three::visit(concrete_element_two*) {
    cout << "Visitor3 -> Element2\n";
}

void concrete_visitor_three::visit(concrete_element_three*) {
    cout << "Visitor3 -> Element3\n";
}

void concrete_visitor_three::visit(concrete_element_four*) {
    cout << "Visitor3 -> Element4\n";
}

void concrete_visitor_four::visit(concrete_element_one*) {
    cout << "Visitor4 -> Element1\n";
}

void concrete_visitor_four::visit(concrete_element_two*) {
    cout << "Visitor4 -> Element2\n";
}

void concrete_visitor_four::visit(concrete_element_three*) {
    cout << "Visitor4 -> Element3\n";
}

void concrete_visitor_four::visit(concrete_element_four*) {
    cout << "Visitor4 -> Element4\n";
}
