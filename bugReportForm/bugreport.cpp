#include "bugreport.h"
void bugreport::createWidgets(){
//creating lineEdits
    nameEdit = new QLineEdit;
    companyEdit = new QLineEdit;
    phoneEdit = new QLineEdit;
    emailEdit = new QLineEdit;
    problemEdit = new QLineEdit;
    summaryEdit = new QTextEdit;
//creating the comboBox
    reproducibilityCombo = new QComboBox;
    reproducibilityCombo->addItem(tr("Always"));
    reproducibilityCombo->addItem(tr("Sometimes"));
    reproducibilityCombo->addItem(tr("Rarely"));
//creating button box
    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(tr("Submit Bug Report"),
                         QDialogButtonBox::AcceptRole);
    buttonBox->addButton(tr("Don't Submit"),
                         QDialogButtonBox::RejectRole);
    buttonBox->addButton(QDialogButtonBox::Reset);
}
void bugreport::positionWidgets(){
//setting the form layout
    QFormLayout *layout = new QFormLayout;
            layout->addRow(tr("Name:"), nameEdit);
            layout->addRow(tr("Company:"), companyEdit);
            layout->addRow(tr("Phone:"), phoneEdit);
            layout->addRow(tr("Email:"), emailEdit);
            layout->addRow(tr("Problem Title:"), problemEdit);
            layout->addRow(tr("Summary Information:"),
                           summaryEdit);
            layout->addRow(tr("Reproducibility:"),
                           reproducibilityCombo);
//setting the main layout
            QVBoxLayout *mainLayout = new QVBoxLayout;
            mainLayout->addLayout(layout);
            mainLayout->addWidget(buttonBox);
            setLayout(mainLayout);
}
bugreport::bugreport(QWidget* parent):QWidget(parent){
//calling the methods
    createWidgets();
    positionWidgets();

                    setWindowTitle(tr("Report Bug"));
                }
