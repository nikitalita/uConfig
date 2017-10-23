#include "pinlistimporter.h"

#include "startwizardpage.h"
#include "filepage.h"
#include "pdffilepage.h"
#include "resultspage.h"
#include "datasheetprocesspage.h"

#include <QAbstractButton>

PinListImporter::PinListImporter(const QString &fileName, QWidget *parent) :
    QWizard(parent)
{
    setPage(PageStart, new StartWizardPage());
    setPage(PageFile, new FilePage());

    // PDF
    DatasheetProcessPage *datasheetProcess= new DatasheetProcessPage();
    setPage(PagePDFFile, new PDFFilePage(datasheetProcess->datasheetThread()));
    setPage(PagePDFProcess, datasheetProcess);

    // Results
    setPage(PageResults, new ResultsPage());

    if (fileName.isEmpty())
    {
        setStartId(PageStart);
    }
    else if(fileName.endsWith(".pdf"))
    {
        setField("file", fileName);
        setStartId(PagePDFFile);
        _type = PDF;
    }
}

QList<Component *> &PinListImporter::components()
{
    return _components;
}

PinListImporter::ImportType PinListImporter::type()
{
    return _type;
}

void PinListImporter::setType(PinListImporter::ImportType type)
{
    _type = type;
}
