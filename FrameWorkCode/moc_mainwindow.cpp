/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[217];
    char stringdata0[4366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "closeSignal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "createActions"
QT_MOC_LITERAL(4, 38, 9), // "WordCount"
QT_MOC_LITERAL(5, 48, 15), // "DisplayJsonDict"
QT_MOC_LITERAL(6, 64, 18), // "CustomTextBrowser*"
QT_MOC_LITERAL(7, 83, 1), // "b"
QT_MOC_LITERAL(8, 85, 5), // "input"
QT_MOC_LITERAL(9, 91, 11), // "eventFilter"
QT_MOC_LITERAL(10, 103, 7), // "QEvent*"
QT_MOC_LITERAL(11, 111, 15), // "saveImageRegion"
QT_MOC_LITERAL(12, 127, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(13, 150, 17), // "AddRecentProjects"
QT_MOC_LITERAL(14, 168, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(15, 192, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(16, 219, 30), // "on_actionSpell_Check_triggered"
QT_MOC_LITERAL(17, 250, 15), // "mousePressEvent"
QT_MOC_LITERAL(18, 266, 12), // "QMouseEvent*"
QT_MOC_LITERAL(19, 279, 2), // "ev"
QT_MOC_LITERAL(20, 282, 13), // "menuSelection"
QT_MOC_LITERAL(21, 296, 8), // "QAction*"
QT_MOC_LITERAL(22, 305, 6), // "action"
QT_MOC_LITERAL(23, 312, 17), // "translate_replace"
QT_MOC_LITERAL(24, 330, 15), // "clipboard_paste"
QT_MOC_LITERAL(25, 346, 13), // "keyPressEvent"
QT_MOC_LITERAL(26, 360, 10), // "QKeyEvent*"
QT_MOC_LITERAL(27, 371, 31), // "on_actionLoadGDocPage_triggered"
QT_MOC_LITERAL(28, 403, 31), // "on_actionToDevanagari_triggered"
QT_MOC_LITERAL(29, 435, 27), // "on_actionLoadData_triggered"
QT_MOC_LITERAL(30, 463, 27), // "on_actionLoadDict_triggered"
QT_MOC_LITERAL(31, 491, 31), // "on_actionLoadOCRWords_triggered"
QT_MOC_LITERAL(32, 523, 29), // "on_actionLoadDomain_triggered"
QT_MOC_LITERAL(33, 553, 28), // "on_actionLoadSubPS_triggered"
QT_MOC_LITERAL(34, 582, 33), // "on_actionLoadConfusions_trigg..."
QT_MOC_LITERAL(35, 616, 23), // "on_actionSugg_triggered"
QT_MOC_LITERAL(36, 640, 25), // "on_actionToSlp1_triggered"
QT_MOC_LITERAL(37, 666, 27), // "on_actionSanskrit_triggered"
QT_MOC_LITERAL(38, 694, 24), // "on_actionHindi_triggered"
QT_MOC_LITERAL(39, 719, 26), // "on_actionEnglish_triggered"
QT_MOC_LITERAL(40, 746, 28), // "on_actionLeftAlign_triggered"
QT_MOC_LITERAL(41, 775, 29), // "on_actionRightAlign_triggered"
QT_MOC_LITERAL(42, 805, 30), // "on_actionCentreAlign_triggered"
QT_MOC_LITERAL(43, 836, 36), // "on_actionAllFontProperties_tr..."
QT_MOC_LITERAL(44, 873, 25), // "on_actionUnBold_triggered"
QT_MOC_LITERAL(45, 899, 33), // "on_actionJusitfiedAlign_trigg..."
QT_MOC_LITERAL(46, 933, 28), // "on_actionHighlight_triggered"
QT_MOC_LITERAL(47, 962, 28), // "on_actionFontBlack_triggered"
QT_MOC_LITERAL(48, 991, 23), // "updateAverageAccuracies"
QT_MOC_LITERAL(49, 1015, 40), // "on_actionViewAverageAccuracie..."
QT_MOC_LITERAL(50, 1056, 31), // "on_actionOpen_Project_triggered"
QT_MOC_LITERAL(51, 1088, 10), // "file_click"
QT_MOC_LITERAL(52, 1099, 11), // "QModelIndex"
QT_MOC_LITERAL(53, 1111, 4), // "indx"
QT_MOC_LITERAL(54, 1116, 17), // "LoadImageFromFile"
QT_MOC_LITERAL(55, 1134, 6), // "QFile*"
QT_MOC_LITERAL(56, 1141, 4), // "file"
QT_MOC_LITERAL(57, 1146, 26), // "CustomContextMenuTriggered"
QT_MOC_LITERAL(58, 1173, 1), // "p"
QT_MOC_LITERAL(59, 1175, 10), // "AddNewFile"
QT_MOC_LITERAL(60, 1186, 13), // "OpenDirectory"
QT_MOC_LITERAL(61, 1200, 10), // "RemoveFile"
QT_MOC_LITERAL(62, 1211, 8), // "closetab"
QT_MOC_LITERAL(63, 1220, 5), // "index"
QT_MOC_LITERAL(64, 1226, 10), // "tabchanged"
QT_MOC_LITERAL(65, 1237, 26), // "on_actionTurn_In_triggered"
QT_MOC_LITERAL(66, 1264, 23), // "on_actionPush_triggered"
QT_MOC_LITERAL(67, 1288, 26), // "on_actionFetch_2_triggered"
QT_MOC_LITERAL(68, 1315, 35), // "on_actionVerifier_Turn_In_tri..."
QT_MOC_LITERAL(69, 1351, 16), // "directoryChanged"
QT_MOC_LITERAL(70, 1368, 4), // "path"
QT_MOC_LITERAL(71, 1373, 30), // "on_actionAccuracyLog_triggered"
QT_MOC_LITERAL(72, 1404, 33), // "on_compareCorrectorOutput_cli..."
QT_MOC_LITERAL(73, 1438, 23), // "on_viewComments_clicked"
QT_MOC_LITERAL(74, 1462, 26), // "on_actionZoom_In_triggered"
QT_MOC_LITERAL(75, 1489, 27), // "on_actionZoom_Out_triggered"
QT_MOC_LITERAL(76, 1517, 26), // "on_actionSymbols_triggered"
QT_MOC_LITERAL(77, 1544, 35), // "on_actionInsert_Tab_Space_tri..."
QT_MOC_LITERAL(78, 1580, 41), // "on_actionInsert_Horizontal_Li..."
QT_MOC_LITERAL(79, 1622, 28), // "on_actionSubscript_triggered"
QT_MOC_LITERAL(80, 1651, 30), // "on_actionSuperscript_triggered"
QT_MOC_LITERAL(81, 1682, 19), // "UpdateFileBrekadown"
QT_MOC_LITERAL(82, 1702, 28), // "on_actionAdd_Image_triggered"
QT_MOC_LITERAL(83, 1731, 11), // "SaveTimeLog"
QT_MOC_LITERAL(84, 1743, 14), // "DisplayTimeLog"
QT_MOC_LITERAL(85, 1758, 31), // "on_actionResize_Image_triggered"
QT_MOC_LITERAL(86, 1790, 13), // "LogHighlights"
QT_MOC_LITERAL(87, 1804, 4), // "word"
QT_MOC_LITERAL(88, 1809, 32), // "on_compareVerifierOutput_clicked"
QT_MOC_LITERAL(89, 1842, 20), // "on_sanButton_toggled"
QT_MOC_LITERAL(90, 1863, 7), // "checked"
QT_MOC_LITERAL(91, 1871, 20), // "on_hinButton_toggled"
QT_MOC_LITERAL(92, 1892, 28), // "on_actionLineSpace_triggered"
QT_MOC_LITERAL(93, 1921, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(94, 1945, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(95, 1969, 30), // "on_actionNew_Project_triggered"
QT_MOC_LITERAL(96, 2000, 33), // "on_actionInsert_Table_2_trigg..."
QT_MOC_LITERAL(97, 2034, 10), // "closeEvent"
QT_MOC_LITERAL(98, 2045, 12), // "QCloseEvent*"
QT_MOC_LITERAL(99, 2058, 5), // "event"
QT_MOC_LITERAL(100, 2064, 20), // "getAverageAccuracies"
QT_MOC_LITERAL(101, 2085, 7), // "mainObj"
QT_MOC_LITERAL(102, 2093, 9), // "sendEmail"
QT_MOC_LITERAL(103, 2103, 7), // "message"
QT_MOC_LITERAL(104, 2111, 36), // "on_actionInsert_Columnleft_tr..."
QT_MOC_LITERAL(105, 2148, 37), // "on_actionInsert_Columnright_t..."
QT_MOC_LITERAL(106, 2186, 34), // "on_actionInsert_Rowabove_trig..."
QT_MOC_LITERAL(107, 2221, 34), // "on_actionInsert_Rowbelow_trig..."
QT_MOC_LITERAL(108, 2256, 32), // "on_actionRemove_Column_triggered"
QT_MOC_LITERAL(109, 2289, 29), // "on_actionRemove_Row_triggered"
QT_MOC_LITERAL(110, 2319, 25), // "on_actionItalic_triggered"
QT_MOC_LITERAL(111, 2345, 28), // "on_actionNonitalic_triggered"
QT_MOC_LITERAL(112, 2374, 27), // "on_actionSave_All_triggered"
QT_MOC_LITERAL(113, 2402, 35), // "on_actionFind_and_Replace_tri..."
QT_MOC_LITERAL(114, 2438, 16), // "checkUnsavedWork"
QT_MOC_LITERAL(115, 2455, 11), // "saveAllWork"
QT_MOC_LITERAL(116, 2467, 12), // "readSettings"
QT_MOC_LITERAL(117, 2480, 13), // "writeSettings"
QT_MOC_LITERAL(118, 2494, 12), // "setMFilename"
QT_MOC_LITERAL(119, 2507, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(120, 2529, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(121, 2553, 16), // "runGlobalReplace"
QT_MOC_LITERAL(122, 2570, 16), // "QVector<QString>"
QT_MOC_LITERAL(123, 2587, 28), // "globalReplaceQueryMessageBox"
QT_MOC_LITERAL(124, 2616, 8), // "old_word"
QT_MOC_LITERAL(125, 2625, 8), // "new_word"
QT_MOC_LITERAL(126, 2634, 4), // "int&"
QT_MOC_LITERAL(127, 2639, 3), // "chk"
QT_MOC_LITERAL(128, 2643, 24), // "writeGlobalCPairsToFiles"
QT_MOC_LITERAL(129, 2668, 9), // "file_path"
QT_MOC_LITERAL(130, 2678, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(131, 2700, 20), // "globalReplacementMap"
QT_MOC_LITERAL(132, 2721, 36), // "addCurrentlyOpenFileToEditedF..."
QT_MOC_LITERAL(133, 2758, 20), // "deleteEditedFilesLog"
QT_MOC_LITERAL(134, 2779, 14), // "RecentPageInfo"
QT_MOC_LITERAL(135, 2794, 14), // "isStringInFile"
QT_MOC_LITERAL(136, 2809, 12), // "searchString"
QT_MOC_LITERAL(137, 2822, 16), // "dumpStringToFile"
QT_MOC_LITERAL(138, 2839, 6), // "string"
QT_MOC_LITERAL(139, 2846, 9), // "highlight"
QT_MOC_LITERAL(140, 2856, 42), // "getGlobalReplacementMapFromCh..."
QT_MOC_LITERAL(141, 2899, 13), // "replacedWords"
QT_MOC_LITERAL(142, 2913, 13), // "QVector<int>*"
QT_MOC_LITERAL(143, 2927, 17), // "replaceInAllPages"
QT_MOC_LITERAL(144, 2945, 25), // "on_actionas_PDF_triggered"
QT_MOC_LITERAL(145, 2971, 27), // "on_actionGet_Help_triggered"
QT_MOC_LITERAL(146, 2999, 27), // "on_actionTutorial_triggered"
QT_MOC_LITERAL(147, 3027, 24), // "on_actionLinux_triggered"
QT_MOC_LITERAL(148, 3052, 26), // "on_actionWindows_triggered"
QT_MOC_LITERAL(149, 3079, 33), // "on_actionShortcut_Guide_trigg..."
QT_MOC_LITERAL(150, 3113, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(151, 3140, 26), // "on_zoom_Out_Button_clicked"
QT_MOC_LITERAL(152, 3167, 25), // "on_zoom_In_Button_clicked"
QT_MOC_LITERAL(153, 3193, 24), // "zoom_slider_valueChanged"
QT_MOC_LITERAL(154, 3218, 5), // "value"
QT_MOC_LITERAL(155, 3224, 17), // "zoom_slider_moved"
QT_MOC_LITERAL(156, 3242, 17), // "zoomedUsingScroll"
QT_MOC_LITERAL(157, 3260, 38), // "on_actionUndo_Global_Replace_..."
QT_MOC_LITERAL(158, 3299, 29), // "undoGlobalReplace_Single_Word"
QT_MOC_LITERAL(159, 3329, 7), // "oldWord"
QT_MOC_LITERAL(160, 3337, 7), // "newWord"
QT_MOC_LITERAL(161, 3345, 29), // "reverseGlobalReplacedWordsMap"
QT_MOC_LITERAL(162, 3375, 38), // "getUndoGlobalReplaceMap_Multi..."
QT_MOC_LITERAL(163, 3414, 28), // "replaceInAllFilesFromTSVfile"
QT_MOC_LITERAL(164, 3443, 20), // "checkForValidTSVfile"
QT_MOC_LITERAL(165, 3464, 6), // "QFile&"
QT_MOC_LITERAL(166, 3471, 22), // "globalReplacePreviewfn"
QT_MOC_LITERAL(167, 3494, 12), // "QVector<int>"
QT_MOC_LITERAL(168, 3507, 22), // "getBeforeAndAfterWords"
QT_MOC_LITERAL(169, 3530, 25), // "QMap<QString,QStringList>"
QT_MOC_LITERAL(170, 3556, 5), // "fPath"
QT_MOC_LITERAL(171, 3562, 25), // "on_actionUpload_triggered"
QT_MOC_LITERAL(172, 3588, 20), // "on_justify_triggered"
QT_MOC_LITERAL(173, 3609, 29), // "on_actionFont_Color_triggered"
QT_MOC_LITERAL(174, 3639, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(175, 3663, 26), // "SaveFile_GUI_Preprocessing"
QT_MOC_LITERAL(176, 3690, 27), // "SaveFile_GUI_Postprocessing"
QT_MOC_LITERAL(177, 3718, 13), // "GlobalReplace"
QT_MOC_LITERAL(178, 3732, 12), // "stopSpinning"
QT_MOC_LITERAL(179, 3745, 29), // "on_lineEditSearch_textChanged"
QT_MOC_LITERAL(180, 3775, 4), // "arg1"
QT_MOC_LITERAL(181, 3780, 20), // "on_action1_triggered"
QT_MOC_LITERAL(182, 3801, 20), // "on_action2_triggered"
QT_MOC_LITERAL(183, 3822, 20), // "on_action3_triggered"
QT_MOC_LITERAL(184, 3843, 36), // "on_actionCheck_for_Updates_tr..."
QT_MOC_LITERAL(185, 3880, 16), // "closeProgressBar"
QT_MOC_LITERAL(186, 3897, 18), // "setProgressBarPerc"
QT_MOC_LITERAL(187, 3916, 12), // "toDevanagari"
QT_MOC_LITERAL(188, 3929, 4), // "text"
QT_MOC_LITERAL(189, 3934, 15), // "on_find_clicked"
QT_MOC_LITERAL(190, 3950, 30), // "on_actionPDF_Preview_triggered"
QT_MOC_LITERAL(191, 3981, 5), // "print"
QT_MOC_LITERAL(192, 3987, 9), // "QPrinter*"
QT_MOC_LITERAL(193, 3997, 7), // "printer"
QT_MOC_LITERAL(194, 4005, 30), // "on_actionChange_Role_triggered"
QT_MOC_LITERAL(195, 4036, 13), // "bboxInsertion"
QT_MOC_LITERAL(196, 4050, 1), // "f"
QT_MOC_LITERAL(197, 4052, 19), // "finishedPdfCreation"
QT_MOC_LITERAL(198, 4072, 8), // "exitCode"
QT_MOC_LITERAL(199, 4081, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(200, 4102, 10), // "exitStatus"
QT_MOC_LITERAL(201, 4113, 14), // "SearchOnGoogle"
QT_MOC_LITERAL(202, 4128, 17), // "GoogleTranslation"
QT_MOC_LITERAL(203, 4146, 17), // "insertImageAction"
QT_MOC_LITERAL(204, 4164, 16), // "SaveFile_Backend"
QT_MOC_LITERAL(205, 4181, 33), // "on_actionLoad_Next_Page_trigg..."
QT_MOC_LITERAL(206, 4215, 33), // "on_actionLoad_Prev_Page_trigg..."
QT_MOC_LITERAL(207, 4249, 12), // "LoadDocument"
QT_MOC_LITERAL(208, 4262, 3), // "ext"
QT_MOC_LITERAL(209, 4266, 4), // "name"
QT_MOC_LITERAL(210, 4271, 15), // "pdfPrintIsReady"
QT_MOC_LITERAL(211, 4287, 22), // "readOutputFromPdfPrint"
QT_MOC_LITERAL(212, 4310, 16), // "insertCompletion"
QT_MOC_LITERAL(213, 4327, 10), // "completion"
QT_MOC_LITERAL(214, 4338, 12), // "focusInEvent"
QT_MOC_LITERAL(215, 4351, 12), // "QFocusEvent*"
QT_MOC_LITERAL(216, 4364, 1) // "e"

    },
    "MainWindow\0closeSignal\0\0createActions\0"
    "WordCount\0DisplayJsonDict\0CustomTextBrowser*\0"
    "b\0input\0eventFilter\0QEvent*\0saveImageRegion\0"
    "on_actionNew_triggered\0AddRecentProjects\0"
    "on_actionSave_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionSpell_Check_triggered\0"
    "mousePressEvent\0QMouseEvent*\0ev\0"
    "menuSelection\0QAction*\0action\0"
    "translate_replace\0clipboard_paste\0"
    "keyPressEvent\0QKeyEvent*\0"
    "on_actionLoadGDocPage_triggered\0"
    "on_actionToDevanagari_triggered\0"
    "on_actionLoadData_triggered\0"
    "on_actionLoadDict_triggered\0"
    "on_actionLoadOCRWords_triggered\0"
    "on_actionLoadDomain_triggered\0"
    "on_actionLoadSubPS_triggered\0"
    "on_actionLoadConfusions_triggered\0"
    "on_actionSugg_triggered\0"
    "on_actionToSlp1_triggered\0"
    "on_actionSanskrit_triggered\0"
    "on_actionHindi_triggered\0"
    "on_actionEnglish_triggered\0"
    "on_actionLeftAlign_triggered\0"
    "on_actionRightAlign_triggered\0"
    "on_actionCentreAlign_triggered\0"
    "on_actionAllFontProperties_triggered\0"
    "on_actionUnBold_triggered\0"
    "on_actionJusitfiedAlign_triggered\0"
    "on_actionHighlight_triggered\0"
    "on_actionFontBlack_triggered\0"
    "updateAverageAccuracies\0"
    "on_actionViewAverageAccuracies_triggered\0"
    "on_actionOpen_Project_triggered\0"
    "file_click\0QModelIndex\0indx\0"
    "LoadImageFromFile\0QFile*\0file\0"
    "CustomContextMenuTriggered\0p\0AddNewFile\0"
    "OpenDirectory\0RemoveFile\0closetab\0"
    "index\0tabchanged\0on_actionTurn_In_triggered\0"
    "on_actionPush_triggered\0"
    "on_actionFetch_2_triggered\0"
    "on_actionVerifier_Turn_In_triggered\0"
    "directoryChanged\0path\0"
    "on_actionAccuracyLog_triggered\0"
    "on_compareCorrectorOutput_clicked\0"
    "on_viewComments_clicked\0"
    "on_actionZoom_In_triggered\0"
    "on_actionZoom_Out_triggered\0"
    "on_actionSymbols_triggered\0"
    "on_actionInsert_Tab_Space_triggered\0"
    "on_actionInsert_Horizontal_Line_triggered\0"
    "on_actionSubscript_triggered\0"
    "on_actionSuperscript_triggered\0"
    "UpdateFileBrekadown\0on_actionAdd_Image_triggered\0"
    "SaveTimeLog\0DisplayTimeLog\0"
    "on_actionResize_Image_triggered\0"
    "LogHighlights\0word\0on_compareVerifierOutput_clicked\0"
    "on_sanButton_toggled\0checked\0"
    "on_hinButton_toggled\0on_actionLineSpace_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionNew_Project_triggered\0"
    "on_actionInsert_Table_2_triggered\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "getAverageAccuracies\0mainObj\0sendEmail\0"
    "message\0on_actionInsert_Columnleft_triggered\0"
    "on_actionInsert_Columnright_triggered\0"
    "on_actionInsert_Rowabove_triggered\0"
    "on_actionInsert_Rowbelow_triggered\0"
    "on_actionRemove_Column_triggered\0"
    "on_actionRemove_Row_triggered\0"
    "on_actionItalic_triggered\0"
    "on_actionNonitalic_triggered\0"
    "on_actionSave_All_triggered\0"
    "on_actionFind_and_Replace_triggered\0"
    "checkUnsavedWork\0saveAllWork\0readSettings\0"
    "writeSettings\0setMFilename\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "runGlobalReplace\0QVector<QString>\0"
    "globalReplaceQueryMessageBox\0old_word\0"
    "new_word\0int&\0chk\0writeGlobalCPairsToFiles\0"
    "file_path\0QMap<QString,QString>\0"
    "globalReplacementMap\0"
    "addCurrentlyOpenFileToEditedFilesLog\0"
    "deleteEditedFilesLog\0RecentPageInfo\0"
    "isStringInFile\0searchString\0"
    "dumpStringToFile\0string\0highlight\0"
    "getGlobalReplacementMapFromChecklistDialog\0"
    "replacedWords\0QVector<int>*\0"
    "replaceInAllPages\0on_actionas_PDF_triggered\0"
    "on_actionGet_Help_triggered\0"
    "on_actionTutorial_triggered\0"
    "on_actionLinux_triggered\0"
    "on_actionWindows_triggered\0"
    "on_actionShortcut_Guide_triggered\0"
    "on_textBrowser_textChanged\0"
    "on_zoom_Out_Button_clicked\0"
    "on_zoom_In_Button_clicked\0"
    "zoom_slider_valueChanged\0value\0"
    "zoom_slider_moved\0zoomedUsingScroll\0"
    "on_actionUndo_Global_Replace_triggered\0"
    "undoGlobalReplace_Single_Word\0oldWord\0"
    "newWord\0reverseGlobalReplacedWordsMap\0"
    "getUndoGlobalReplaceMap_Multiple_Words\0"
    "replaceInAllFilesFromTSVfile\0"
    "checkForValidTSVfile\0QFile&\0"
    "globalReplacePreviewfn\0QVector<int>\0"
    "getBeforeAndAfterWords\0QMap<QString,QStringList>\0"
    "fPath\0on_actionUpload_triggered\0"
    "on_justify_triggered\0on_actionFont_Color_triggered\0"
    "on_actionBold_triggered\0"
    "SaveFile_GUI_Preprocessing\0"
    "SaveFile_GUI_Postprocessing\0GlobalReplace\0"
    "stopSpinning\0on_lineEditSearch_textChanged\0"
    "arg1\0on_action1_triggered\0"
    "on_action2_triggered\0on_action3_triggered\0"
    "on_actionCheck_for_Updates_triggered\0"
    "closeProgressBar\0setProgressBarPerc\0"
    "toDevanagari\0text\0on_find_clicked\0"
    "on_actionPDF_Preview_triggered\0print\0"
    "QPrinter*\0printer\0on_actionChange_Role_triggered\0"
    "bboxInsertion\0f\0finishedPdfCreation\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "SearchOnGoogle\0GoogleTranslation\0"
    "insertImageAction\0SaveFile_Backend\0"
    "on_actionLoad_Next_Page_triggered\0"
    "on_actionLoad_Prev_Page_triggered\0"
    "LoadDocument\0ext\0name\0pdfPrintIsReady\0"
    "readOutputFromPdfPrint\0insertCompletion\0"
    "completion\0focusInEvent\0QFocusEvent*\0"
    "e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     161,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  819,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  820,    2, 0x08 /* Private */,
       4,    0,  821,    2, 0x08 /* Private */,
       5,    2,  822,    2, 0x08 /* Private */,
       9,    2,  827,    2, 0x08 /* Private */,
      11,    6,  832,    2, 0x08 /* Private */,
      12,    0,  845,    2, 0x08 /* Private */,
      13,    0,  846,    2, 0x08 /* Private */,
      14,    0,  847,    2, 0x08 /* Private */,
      15,    0,  848,    2, 0x08 /* Private */,
      16,    0,  849,    2, 0x08 /* Private */,
      17,    1,  850,    2, 0x08 /* Private */,
      20,    1,  853,    2, 0x08 /* Private */,
      23,    1,  856,    2, 0x08 /* Private */,
      24,    1,  859,    2, 0x08 /* Private */,
      25,    1,  862,    2, 0x08 /* Private */,
      27,    0,  865,    2, 0x08 /* Private */,
      28,    0,  866,    2, 0x08 /* Private */,
      29,    0,  867,    2, 0x08 /* Private */,
      30,    0,  868,    2, 0x08 /* Private */,
      31,    0,  869,    2, 0x08 /* Private */,
      32,    0,  870,    2, 0x08 /* Private */,
      33,    0,  871,    2, 0x08 /* Private */,
      34,    0,  872,    2, 0x08 /* Private */,
      35,    0,  873,    2, 0x08 /* Private */,
      36,    0,  874,    2, 0x08 /* Private */,
      37,    0,  875,    2, 0x08 /* Private */,
      38,    0,  876,    2, 0x08 /* Private */,
      39,    0,  877,    2, 0x08 /* Private */,
      40,    0,  878,    2, 0x08 /* Private */,
      41,    0,  879,    2, 0x08 /* Private */,
      42,    0,  880,    2, 0x08 /* Private */,
      43,    0,  881,    2, 0x08 /* Private */,
      44,    0,  882,    2, 0x08 /* Private */,
      45,    0,  883,    2, 0x08 /* Private */,
      46,    0,  884,    2, 0x08 /* Private */,
      47,    0,  885,    2, 0x08 /* Private */,
      48,    0,  886,    2, 0x08 /* Private */,
      49,    0,  887,    2, 0x08 /* Private */,
      50,    0,  888,    2, 0x08 /* Private */,
      51,    1,  889,    2, 0x08 /* Private */,
      54,    1,  892,    2, 0x08 /* Private */,
      57,    1,  895,    2, 0x08 /* Private */,
      59,    0,  898,    2, 0x08 /* Private */,
      60,    0,  899,    2, 0x08 /* Private */,
      61,    0,  900,    2, 0x08 /* Private */,
      62,    1,  901,    2, 0x08 /* Private */,
      64,    1,  904,    2, 0x08 /* Private */,
      65,    0,  907,    2, 0x08 /* Private */,
      66,    0,  908,    2, 0x08 /* Private */,
      67,    0,  909,    2, 0x08 /* Private */,
      68,    0,  910,    2, 0x08 /* Private */,
      69,    1,  911,    2, 0x08 /* Private */,
      71,    0,  914,    2, 0x08 /* Private */,
      72,    0,  915,    2, 0x08 /* Private */,
      73,    0,  916,    2, 0x08 /* Private */,
      74,    0,  917,    2, 0x08 /* Private */,
      75,    0,  918,    2, 0x08 /* Private */,
      76,    0,  919,    2, 0x08 /* Private */,
      77,    0,  920,    2, 0x08 /* Private */,
      78,    0,  921,    2, 0x08 /* Private */,
      79,    0,  922,    2, 0x08 /* Private */,
      80,    0,  923,    2, 0x08 /* Private */,
      81,    0,  924,    2, 0x08 /* Private */,
      82,    0,  925,    2, 0x08 /* Private */,
      83,    0,  926,    2, 0x08 /* Private */,
      84,    0,  927,    2, 0x08 /* Private */,
      85,    0,  928,    2, 0x08 /* Private */,
      86,    1,  929,    2, 0x08 /* Private */,
      88,    0,  932,    2, 0x08 /* Private */,
      89,    1,  933,    2, 0x08 /* Private */,
      91,    1,  936,    2, 0x08 /* Private */,
      92,    0,  939,    2, 0x08 /* Private */,
      93,    0,  940,    2, 0x08 /* Private */,
      94,    0,  941,    2, 0x08 /* Private */,
      95,    0,  942,    2, 0x08 /* Private */,
      96,    0,  943,    2, 0x08 /* Private */,
      97,    1,  944,    2, 0x08 /* Private */,
     100,    1,  947,    2, 0x08 /* Private */,
     102,    1,  950,    2, 0x08 /* Private */,
     104,    0,  953,    2, 0x08 /* Private */,
     105,    0,  954,    2, 0x08 /* Private */,
     106,    0,  955,    2, 0x08 /* Private */,
     107,    0,  956,    2, 0x08 /* Private */,
     108,    0,  957,    2, 0x08 /* Private */,
     109,    0,  958,    2, 0x08 /* Private */,
     110,    0,  959,    2, 0x08 /* Private */,
     111,    0,  960,    2, 0x08 /* Private */,
     112,    0,  961,    2, 0x08 /* Private */,
     113,    0,  962,    2, 0x08 /* Private */,
     114,    0,  963,    2, 0x08 /* Private */,
     115,    0,  964,    2, 0x08 /* Private */,
     116,    0,  965,    2, 0x08 /* Private */,
     117,    0,  966,    2, 0x08 /* Private */,
     118,    1,  967,    2, 0x08 /* Private */,
     119,    0,  970,    2, 0x08 /* Private */,
     120,    0,  971,    2, 0x08 /* Private */,
     121,    2,  972,    2, 0x08 /* Private */,
     123,    3,  977,    2, 0x08 /* Private */,
     128,    2,  984,    2, 0x08 /* Private */,
     132,    0,  989,    2, 0x08 /* Private */,
     133,    0,  990,    2, 0x08 /* Private */,
     134,    0,  991,    2, 0x08 /* Private */,
     135,    2,  992,    2, 0x08 /* Private */,
     137,    2,  997,    2, 0x08 /* Private */,
     139,    2, 1002,    2, 0x08 /* Private */,
     140,    2, 1007,    2, 0x08 /* Private */,
     144,    0, 1012,    2, 0x08 /* Private */,
     145,    0, 1013,    2, 0x08 /* Private */,
     146,    0, 1014,    2, 0x08 /* Private */,
     147,    0, 1015,    2, 0x08 /* Private */,
     148,    0, 1016,    2, 0x08 /* Private */,
     149,    0, 1017,    2, 0x08 /* Private */,
     150,    0, 1018,    2, 0x08 /* Private */,
     151,    0, 1019,    2, 0x08 /* Private */,
     152,    0, 1020,    2, 0x08 /* Private */,
     153,    1, 1021,    2, 0x08 /* Private */,
     155,    1, 1024,    2, 0x08 /* Private */,
     156,    0, 1027,    2, 0x08 /* Private */,
     157,    0, 1028,    2, 0x08 /* Private */,
     158,    2, 1029,    2, 0x08 /* Private */,
     161,    0, 1034,    2, 0x08 /* Private */,
     162,    1, 1035,    2, 0x08 /* Private */,
     163,    0, 1038,    2, 0x08 /* Private */,
     164,    1, 1039,    2, 0x08 /* Private */,
     166,    2, 1042,    2, 0x08 /* Private */,
     168,    2, 1047,    2, 0x08 /* Private */,
     171,    0, 1052,    2, 0x08 /* Private */,
     172,    0, 1053,    2, 0x08 /* Private */,
     173,    0, 1054,    2, 0x08 /* Private */,
     174,    0, 1055,    2, 0x08 /* Private */,
     175,    0, 1056,    2, 0x08 /* Private */,
     176,    0, 1057,    2, 0x08 /* Private */,
     177,    0, 1058,    2, 0x08 /* Private */,
     178,    0, 1059,    2, 0x08 /* Private */,
     179,    1, 1060,    2, 0x08 /* Private */,
     181,    0, 1063,    2, 0x08 /* Private */,
     182,    0, 1064,    2, 0x08 /* Private */,
     183,    0, 1065,    2, 0x08 /* Private */,
     184,    0, 1066,    2, 0x08 /* Private */,
     185,    0, 1067,    2, 0x08 /* Private */,
     186,    1, 1068,    2, 0x08 /* Private */,
     187,    1, 1071,    2, 0x08 /* Private */,
     189,    0, 1074,    2, 0x08 /* Private */,
     190,    0, 1075,    2, 0x08 /* Private */,
     191,    1, 1076,    2, 0x08 /* Private */,
     194,    0, 1079,    2, 0x08 /* Private */,
     195,    1, 1080,    2, 0x08 /* Private */,
     195,    0, 1083,    2, 0x28 /* Private | MethodCloned */,
     197,    2, 1084,    2, 0x08 /* Private */,
     201,    0, 1089,    2, 0x08 /* Private */,
     202,    0, 1090,    2, 0x08 /* Private */,
     203,    0, 1091,    2, 0x08 /* Private */,
     204,    0, 1092,    2, 0x0a /* Public */,
     205,    0, 1093,    2, 0x0a /* Public */,
     206,    0, 1094,    2, 0x0a /* Public */,
     207,    3, 1095,    2, 0x0a /* Public */,
     210,    0, 1102,    2, 0x0a /* Public */,
     211,    0, 1103,    2, 0x0a /* Public */,
     212,    1, 1104,    2, 0x0a /* Public */,
     214,    1, 1107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 10,    2,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void, QMetaType::QPoint,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   87,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::QJsonObject, QMetaType::QJsonObject,  101,
    QMetaType::Bool, QMetaType::QString,  103,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 122,    2,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 126,  124,  125,  127,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 130,  129,  131,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  129,  136,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  129,  138,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    0x80000000 | 130, 0x80000000 | 122, 0x80000000 | 142,  141,  143,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  154,
    QMetaType::Void, QMetaType::Int,  154,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  159,  160,
    QMetaType::Void,
    0x80000000 | 130, 0x80000000 | 130,    2,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 165,   56,
    QMetaType::Void, 0x80000000 | 130, 0x80000000 | 167,    2,    2,
    0x80000000 | 169, QMetaType::QString, 0x80000000 | 130,  170,  131,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  180,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::QString, 0x80000000 | 138,  188,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 192,  193,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,  196,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 199,  198,  200,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55, QMetaType::QString, QMetaType::QString,   56,  208,  209,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  213,
    QMetaType::Void, 0x80000000 | 215,  216,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeSignal(); break;
        case 1: _t->createActions(); break;
        case 2: _t->WordCount(); break;
        case 3: _t->DisplayJsonDict((*reinterpret_cast< CustomTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->saveImageRegion((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 6: _t->on_actionNew_triggered(); break;
        case 7: _t->AddRecentProjects(); break;
        case 8: _t->on_actionSave_triggered(); break;
        case 9: _t->on_actionSave_As_triggered(); break;
        case 10: _t->on_actionSpell_Check_triggered(); break;
        case 11: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->menuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->translate_replace((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->clipboard_paste((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 16: _t->on_actionLoadGDocPage_triggered(); break;
        case 17: _t->on_actionToDevanagari_triggered(); break;
        case 18: _t->on_actionLoadData_triggered(); break;
        case 19: _t->on_actionLoadDict_triggered(); break;
        case 20: _t->on_actionLoadOCRWords_triggered(); break;
        case 21: _t->on_actionLoadDomain_triggered(); break;
        case 22: _t->on_actionLoadSubPS_triggered(); break;
        case 23: _t->on_actionLoadConfusions_triggered(); break;
        case 24: _t->on_actionSugg_triggered(); break;
        case 25: _t->on_actionToSlp1_triggered(); break;
        case 26: _t->on_actionSanskrit_triggered(); break;
        case 27: _t->on_actionHindi_triggered(); break;
        case 28: _t->on_actionEnglish_triggered(); break;
        case 29: _t->on_actionLeftAlign_triggered(); break;
        case 30: _t->on_actionRightAlign_triggered(); break;
        case 31: _t->on_actionCentreAlign_triggered(); break;
        case 32: _t->on_actionAllFontProperties_triggered(); break;
        case 33: _t->on_actionUnBold_triggered(); break;
        case 34: _t->on_actionJusitfiedAlign_triggered(); break;
        case 35: _t->on_actionHighlight_triggered(); break;
        case 36: _t->on_actionFontBlack_triggered(); break;
        case 37: _t->updateAverageAccuracies(); break;
        case 38: _t->on_actionViewAverageAccuracies_triggered(); break;
        case 39: _t->on_actionOpen_Project_triggered(); break;
        case 40: _t->file_click((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 41: _t->LoadImageFromFile((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 42: _t->CustomContextMenuTriggered((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 43: _t->AddNewFile(); break;
        case 44: _t->OpenDirectory(); break;
        case 45: _t->RemoveFile(); break;
        case 46: _t->closetab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->tabchanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_actionTurn_In_triggered(); break;
        case 49: _t->on_actionPush_triggered(); break;
        case 50: _t->on_actionFetch_2_triggered(); break;
        case 51: _t->on_actionVerifier_Turn_In_triggered(); break;
        case 52: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->on_actionAccuracyLog_triggered(); break;
        case 54: _t->on_compareCorrectorOutput_clicked(); break;
        case 55: _t->on_viewComments_clicked(); break;
        case 56: _t->on_actionZoom_In_triggered(); break;
        case 57: _t->on_actionZoom_Out_triggered(); break;
        case 58: _t->on_actionSymbols_triggered(); break;
        case 59: _t->on_actionInsert_Tab_Space_triggered(); break;
        case 60: _t->on_actionInsert_Horizontal_Line_triggered(); break;
        case 61: _t->on_actionSubscript_triggered(); break;
        case 62: _t->on_actionSuperscript_triggered(); break;
        case 63: _t->UpdateFileBrekadown(); break;
        case 64: _t->on_actionAdd_Image_triggered(); break;
        case 65: _t->SaveTimeLog(); break;
        case 66: _t->DisplayTimeLog(); break;
        case 67: _t->on_actionResize_Image_triggered(); break;
        case 68: _t->LogHighlights((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->on_compareVerifierOutput_clicked(); break;
        case 70: _t->on_sanButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_hinButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->on_actionLineSpace_triggered(); break;
        case 73: _t->on_actionUndo_triggered(); break;
        case 74: _t->on_actionRedo_triggered(); break;
        case 75: _t->on_actionNew_Project_triggered(); break;
        case 76: _t->on_actionInsert_Table_2_triggered(); break;
        case 77: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 78: { QJsonObject _r = _t->getAverageAccuracies((*reinterpret_cast< QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 79: { bool _r = _t->sendEmail((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->on_actionInsert_Columnleft_triggered(); break;
        case 81: _t->on_actionInsert_Columnright_triggered(); break;
        case 82: _t->on_actionInsert_Rowabove_triggered(); break;
        case 83: _t->on_actionInsert_Rowbelow_triggered(); break;
        case 84: _t->on_actionRemove_Column_triggered(); break;
        case 85: _t->on_actionRemove_Row_triggered(); break;
        case 86: _t->on_actionItalic_triggered(); break;
        case 87: _t->on_actionNonitalic_triggered(); break;
        case 88: _t->on_actionSave_All_triggered(); break;
        case 89: _t->on_actionFind_and_Replace_triggered(); break;
        case 90: { bool _r = _t->checkUnsavedWork();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->saveAllWork(); break;
        case 92: _t->readSettings(); break;
        case 93: _t->writeSettings(); break;
        case 94: _t->setMFilename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 95: _t->on_pushButton_clicked(); break;
        case 96: _t->on_pushButton_2_clicked(); break;
        case 97: _t->runGlobalReplace((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<QString>(*)>(_a[2]))); break;
        case 98: { bool _r = _t->globalReplaceQueryMessageBox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 99: { int _r = _t->writeGlobalCPairsToFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 100: _t->addCurrentlyOpenFileToEditedFilesLog(); break;
        case 101: _t->deleteEditedFilesLog(); break;
        case 102: _t->RecentPageInfo(); break;
        case 103: { bool _r = _t->isStringInFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 104: _t->dumpStringToFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 105: _t->highlight((*reinterpret_cast< CustomTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 106: { QMap<QString,QString> _r = _t->getGlobalReplacementMapFromChecklistDialog((*reinterpret_cast< QVector<QString>(*)>(_a[1])),(*reinterpret_cast< QVector<int>*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->on_actionas_PDF_triggered(); break;
        case 108: _t->on_actionGet_Help_triggered(); break;
        case 109: _t->on_actionTutorial_triggered(); break;
        case 110: _t->on_actionLinux_triggered(); break;
        case 111: _t->on_actionWindows_triggered(); break;
        case 112: _t->on_actionShortcut_Guide_triggered(); break;
        case 113: _t->on_textBrowser_textChanged(); break;
        case 114: _t->on_zoom_Out_Button_clicked(); break;
        case 115: _t->on_zoom_In_Button_clicked(); break;
        case 116: _t->zoom_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: _t->zoom_slider_moved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 118: _t->zoomedUsingScroll(); break;
        case 119: _t->on_actionUndo_Global_Replace_triggered(); break;
        case 120: { bool _r = _t->undoGlobalReplace_Single_Word((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->reverseGlobalReplacedWordsMap(); break;
        case 122: { QMap<QString,QString> _r = _t->getUndoGlobalReplaceMap_Multiple_Words((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->replaceInAllFilesFromTSVfile(); break;
        case 124: { bool _r = _t->checkForValidTSVfile((*reinterpret_cast< QFile(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->globalReplacePreviewfn((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1])),(*reinterpret_cast< QVector<int>(*)>(_a[2]))); break;
        case 126: { QMap<QString,QStringList> _r = _t->getBeforeAndAfterWords((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->on_actionUpload_triggered(); break;
        case 128: _t->on_justify_triggered(); break;
        case 129: _t->on_actionFont_Color_triggered(); break;
        case 130: _t->on_actionBold_triggered(); break;
        case 131: _t->SaveFile_GUI_Preprocessing(); break;
        case 132: _t->SaveFile_GUI_Postprocessing(); break;
        case 133: _t->GlobalReplace(); break;
        case 134: _t->stopSpinning(); break;
        case 135: _t->on_lineEditSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 136: _t->on_action1_triggered(); break;
        case 137: _t->on_action2_triggered(); break;
        case 138: _t->on_action3_triggered(); break;
        case 139: _t->on_actionCheck_for_Updates_triggered(); break;
        case 140: _t->closeProgressBar(); break;
        case 141: _t->setProgressBarPerc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: { QString _r = _t->toDevanagari((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 143: _t->on_find_clicked(); break;
        case 144: _t->on_actionPDF_Preview_triggered(); break;
        case 145: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 146: _t->on_actionChange_Role_triggered(); break;
        case 147: _t->bboxInsertion((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 148: _t->bboxInsertion(); break;
        case 149: _t->finishedPdfCreation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 150: _t->SearchOnGoogle(); break;
        case 151: _t->GoogleTranslation(); break;
        case 152: _t->insertImageAction(); break;
        case 153: _t->SaveFile_Backend(); break;
        case 154: _t->on_actionLoad_Next_Page_triggered(); break;
        case 155: _t->on_actionLoad_Prev_Page_triggered(); break;
        case 156: _t->LoadDocument((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 157: _t->pdfPrintIsReady(); break;
        case 158: _t->readOutputFromPdfPrint(); break;
        case 159: _t->insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 160: _t->focusInEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomTextBrowser* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFile* >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 105:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomTextBrowser* >(); break;
            }
            break;
        case 106:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 125:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 147:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFile* >(); break;
            }
            break;
        case 156:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::closeSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 161)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 161;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 161)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 161;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
