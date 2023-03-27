/********************************************************************************
** Form generated from reading UI file 'qt_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_MAINWINDOW_H
#define UI_QT_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt_rendererstack.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionKeyboard_requires_capture;
    QAction *actionRight_CTRL_is_left_ALT;
    QAction *actionHard_Reset;
    QAction *actionCtrl_Alt_Del;
    QAction *actionCtrl_Alt_Esc;
    QAction *actionPause;
    QAction *actionExit;
    QAction *actionSettings;
    QAction *actionFullscreen;
    QAction *actionSoftware_Renderer;
    QAction *actionHardware_Renderer_OpenGL;
    QAction *actionHardware_Renderer_OpenGL_ES;
    QAction *actionHide_status_bar;
    QAction *actionResizable_window;
    QAction *actionRemember_size_and_position;
    QAction *actionSpecify_dimensions;
    QAction *actionForce_4_3_display_ratio;
    QAction *actionHiDPI_scaling;
    QAction *actionCGA_PCjr_Tandy_EGA_S_VGA_overscan;
    QAction *actionChange_contrast_for_monochrome_display;
    QAction *action0_5x;
    QAction *action1x;
    QAction *action1_5x;
    QAction *action2x;
    QAction *action3x;
    QAction *action4x;
    QAction *action5x;
    QAction *action6x;
    QAction *action7x;
    QAction *action8x;
    QAction *actionNearest;
    QAction *actionLinear;
    QAction *actionFullScreen_stretch;
    QAction *actionFullScreen_43;
    QAction *actionFullScreen_keepRatio;
    QAction *actionFullScreen_int;
    QAction *actionInverted_VGA_monitor;
    QAction *actionRGB_Color;
    QAction *actionRGB_Grayscale;
    QAction *actionAmber_monitor;
    QAction *actionGreen_monitor;
    QAction *actionWhite_monitor;
    QAction *actionBT601_NTSC_PAL;
    QAction *actionBT709_HDTV;
    QAction *actionAverage;
    QAction *actionAbout_Qt;
    QAction *actionAbout_86Box;
    QAction *actionDocumentation;
    QAction *actionUpdate_status_bar_icons;
    QAction *actionTake_screenshot;
    QAction *actionSound_gain;
    QAction *actionOpenGL_3_0_Core;
    QAction *actionPreferences;
    QAction *actionEnable_Discord_integration;
    QAction *actionHide_tool_bar;
    QAction *actionACPI_Shutdown;
    QAction *actionBegin_trace;
    QAction *actionEnd_trace;
    QAction *actionRenderer_options;
    QAction *actionVulkan;
    QAction *actionMCA_devices;
    QAction *actionDirect3D_9;
    QAction *actionShow_non_primary_monitors;
    QAction *actionVNC;
    QAction *actionOpen_screenshots_folder;
    QAction *actionApply_fullscreen_stretch_mode_when_maximized;
    QAction *actionCursor_Puck;
    QAction *actionPen;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    RendererStack *stackedWidget;
    QMenuBar *menubar;
    QMenu *menuAction;
    QMenu *menuTablet_tool;
    QMenu *menuTools;
    QMenu *menuView;
    QMenu *menuRenderer;
    QMenu *menuWindow_scale_factor;
    QMenu *menuFilter_method;
    QMenu *menuFullscreen_stretch_mode;
    QMenu *menuEGA_S_VGA_settings;
    QMenu *menuVGA_screen_type;
    QMenu *menuGrayscale_conversion_type;
    QMenu *menuMedia;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(724, 427);
        actionKeyboard_requires_capture = new QAction(MainWindow);
        actionKeyboard_requires_capture->setObjectName(QString::fromUtf8("actionKeyboard_requires_capture"));
        actionKeyboard_requires_capture->setCheckable(true);
        actionRight_CTRL_is_left_ALT = new QAction(MainWindow);
        actionRight_CTRL_is_left_ALT->setObjectName(QString::fromUtf8("actionRight_CTRL_is_left_ALT"));
        actionRight_CTRL_is_left_ALT->setCheckable(true);
        actionHard_Reset = new QAction(MainWindow);
        actionHard_Reset->setObjectName(QString::fromUtf8("actionHard_Reset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuicons/win/icons/hard_reset.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHard_Reset->setIcon(icon);
        actionHard_Reset->setIconVisibleInMenu(false);
        actionCtrl_Alt_Del = new QAction(MainWindow);
        actionCtrl_Alt_Del->setObjectName(QString::fromUtf8("actionCtrl_Alt_Del"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menuicons/win/icons/send_cad.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCtrl_Alt_Del->setIcon(icon1);
        actionCtrl_Alt_Del->setIconVisibleInMenu(false);
        actionCtrl_Alt_Del->setShortcutVisibleInContextMenu(false);
        actionCtrl_Alt_Esc = new QAction(MainWindow);
        actionCtrl_Alt_Esc->setObjectName(QString::fromUtf8("actionCtrl_Alt_Esc"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/menuicons/win/icons/send_cae.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCtrl_Alt_Esc->setIcon(icon2);
        actionCtrl_Alt_Esc->setIconVisibleInMenu(false);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menuicons/win/icons/pause.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionPause->setIconVisibleInMenu(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menuicons/win/icons/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon4);
        actionSettings->setMenuRole(QAction::NoRole);
        actionSettings->setIconVisibleInMenu(false);
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setShortcutVisibleInContextMenu(false);
        actionSoftware_Renderer = new QAction(MainWindow);
        actionSoftware_Renderer->setObjectName(QString::fromUtf8("actionSoftware_Renderer"));
        actionSoftware_Renderer->setCheckable(true);
        actionSoftware_Renderer->setProperty("vid_api", QVariant(0));
        actionHardware_Renderer_OpenGL = new QAction(MainWindow);
        actionHardware_Renderer_OpenGL->setObjectName(QString::fromUtf8("actionHardware_Renderer_OpenGL"));
        actionHardware_Renderer_OpenGL->setCheckable(true);
        actionHardware_Renderer_OpenGL->setProperty("vid_api", QVariant(1));
        actionHardware_Renderer_OpenGL_ES = new QAction(MainWindow);
        actionHardware_Renderer_OpenGL_ES->setObjectName(QString::fromUtf8("actionHardware_Renderer_OpenGL_ES"));
        actionHardware_Renderer_OpenGL_ES->setCheckable(true);
        actionHardware_Renderer_OpenGL_ES->setProperty("vid_api", QVariant(2));
        actionHide_status_bar = new QAction(MainWindow);
        actionHide_status_bar->setObjectName(QString::fromUtf8("actionHide_status_bar"));
        actionHide_status_bar->setCheckable(true);
        actionResizable_window = new QAction(MainWindow);
        actionResizable_window->setObjectName(QString::fromUtf8("actionResizable_window"));
        actionResizable_window->setCheckable(true);
        actionRemember_size_and_position = new QAction(MainWindow);
        actionRemember_size_and_position->setObjectName(QString::fromUtf8("actionRemember_size_and_position"));
        actionRemember_size_and_position->setCheckable(true);
        actionSpecify_dimensions = new QAction(MainWindow);
        actionSpecify_dimensions->setObjectName(QString::fromUtf8("actionSpecify_dimensions"));
        actionForce_4_3_display_ratio = new QAction(MainWindow);
        actionForce_4_3_display_ratio->setObjectName(QString::fromUtf8("actionForce_4_3_display_ratio"));
        actionForce_4_3_display_ratio->setCheckable(true);
        actionHiDPI_scaling = new QAction(MainWindow);
        actionHiDPI_scaling->setObjectName(QString::fromUtf8("actionHiDPI_scaling"));
        actionHiDPI_scaling->setCheckable(true);
        actionCGA_PCjr_Tandy_EGA_S_VGA_overscan = new QAction(MainWindow);
        actionCGA_PCjr_Tandy_EGA_S_VGA_overscan->setObjectName(QString::fromUtf8("actionCGA_PCjr_Tandy_EGA_S_VGA_overscan"));
        actionCGA_PCjr_Tandy_EGA_S_VGA_overscan->setCheckable(true);
        actionChange_contrast_for_monochrome_display = new QAction(MainWindow);
        actionChange_contrast_for_monochrome_display->setObjectName(QString::fromUtf8("actionChange_contrast_for_monochrome_display"));
        actionChange_contrast_for_monochrome_display->setCheckable(true);
        action0_5x = new QAction(MainWindow);
        action0_5x->setObjectName(QString::fromUtf8("action0_5x"));
        action0_5x->setCheckable(true);
        action1x = new QAction(MainWindow);
        action1x->setObjectName(QString::fromUtf8("action1x"));
        action1x->setCheckable(true);
        action1_5x = new QAction(MainWindow);
        action1_5x->setObjectName(QString::fromUtf8("action1_5x"));
        action1_5x->setCheckable(true);
        action2x = new QAction(MainWindow);
        action2x->setObjectName(QString::fromUtf8("action2x"));
        action2x->setCheckable(true);
        action3x = new QAction(MainWindow);
        action3x->setObjectName(QString::fromUtf8("action3x"));
        action3x->setCheckable(true);
        action4x = new QAction(MainWindow);
        action4x->setObjectName(QString::fromUtf8("action4x"));
        action4x->setCheckable(true);
        action5x = new QAction(MainWindow);
        action5x->setObjectName(QString::fromUtf8("action5x"));
        action5x->setCheckable(true);
        action6x = new QAction(MainWindow);
        action6x->setObjectName(QString::fromUtf8("action6x"));
        action6x->setCheckable(true);
        action7x = new QAction(MainWindow);
        action7x->setObjectName(QString::fromUtf8("action7x"));
        action7x->setCheckable(true);
        action8x = new QAction(MainWindow);
        action8x->setObjectName(QString::fromUtf8("action8x"));
        action8x->setCheckable(true);
        actionNearest = new QAction(MainWindow);
        actionNearest->setObjectName(QString::fromUtf8("actionNearest"));
        actionNearest->setCheckable(true);
        actionLinear = new QAction(MainWindow);
        actionLinear->setObjectName(QString::fromUtf8("actionLinear"));
        actionLinear->setCheckable(true);
        actionFullScreen_stretch = new QAction(MainWindow);
        actionFullScreen_stretch->setObjectName(QString::fromUtf8("actionFullScreen_stretch"));
        actionFullScreen_stretch->setCheckable(true);
        actionFullScreen_43 = new QAction(MainWindow);
        actionFullScreen_43->setObjectName(QString::fromUtf8("actionFullScreen_43"));
        actionFullScreen_43->setCheckable(true);
        actionFullScreen_keepRatio = new QAction(MainWindow);
        actionFullScreen_keepRatio->setObjectName(QString::fromUtf8("actionFullScreen_keepRatio"));
        actionFullScreen_keepRatio->setCheckable(true);
        actionFullScreen_int = new QAction(MainWindow);
        actionFullScreen_int->setObjectName(QString::fromUtf8("actionFullScreen_int"));
        actionFullScreen_int->setCheckable(true);
        actionInverted_VGA_monitor = new QAction(MainWindow);
        actionInverted_VGA_monitor->setObjectName(QString::fromUtf8("actionInverted_VGA_monitor"));
        actionInverted_VGA_monitor->setCheckable(true);
        actionRGB_Color = new QAction(MainWindow);
        actionRGB_Color->setObjectName(QString::fromUtf8("actionRGB_Color"));
        actionRGB_Color->setCheckable(true);
        actionRGB_Grayscale = new QAction(MainWindow);
        actionRGB_Grayscale->setObjectName(QString::fromUtf8("actionRGB_Grayscale"));
        actionRGB_Grayscale->setCheckable(true);
        actionAmber_monitor = new QAction(MainWindow);
        actionAmber_monitor->setObjectName(QString::fromUtf8("actionAmber_monitor"));
        actionAmber_monitor->setCheckable(true);
        actionGreen_monitor = new QAction(MainWindow);
        actionGreen_monitor->setObjectName(QString::fromUtf8("actionGreen_monitor"));
        actionGreen_monitor->setCheckable(true);
        actionWhite_monitor = new QAction(MainWindow);
        actionWhite_monitor->setObjectName(QString::fromUtf8("actionWhite_monitor"));
        actionWhite_monitor->setCheckable(true);
        actionBT601_NTSC_PAL = new QAction(MainWindow);
        actionBT601_NTSC_PAL->setObjectName(QString::fromUtf8("actionBT601_NTSC_PAL"));
        actionBT601_NTSC_PAL->setCheckable(true);
        actionBT709_HDTV = new QAction(MainWindow);
        actionBT709_HDTV->setObjectName(QString::fromUtf8("actionBT709_HDTV"));
        actionBT709_HDTV->setCheckable(true);
        actionAverage = new QAction(MainWindow);
        actionAverage->setObjectName(QString::fromUtf8("actionAverage"));
        actionAverage->setCheckable(true);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionAbout_Qt->setVisible(false);
        actionAbout_Qt->setMenuRole(QAction::AboutQtRole);
        actionAbout_86Box = new QAction(MainWindow);
        actionAbout_86Box->setObjectName(QString::fromUtf8("actionAbout_86Box"));
        actionAbout_86Box->setMenuRole(QAction::AboutRole);
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionUpdate_status_bar_icons = new QAction(MainWindow);
        actionUpdate_status_bar_icons->setObjectName(QString::fromUtf8("actionUpdate_status_bar_icons"));
        actionUpdate_status_bar_icons->setCheckable(true);
        actionTake_screenshot = new QAction(MainWindow);
        actionTake_screenshot->setObjectName(QString::fromUtf8("actionTake_screenshot"));
        actionTake_screenshot->setShortcutVisibleInContextMenu(false);
        actionSound_gain = new QAction(MainWindow);
        actionSound_gain->setObjectName(QString::fromUtf8("actionSound_gain"));
        actionOpenGL_3_0_Core = new QAction(MainWindow);
        actionOpenGL_3_0_Core->setObjectName(QString::fromUtf8("actionOpenGL_3_0_Core"));
        actionOpenGL_3_0_Core->setCheckable(true);
        actionOpenGL_3_0_Core->setProperty("vid_api", QVariant(3));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionEnable_Discord_integration = new QAction(MainWindow);
        actionEnable_Discord_integration->setObjectName(QString::fromUtf8("actionEnable_Discord_integration"));
        actionEnable_Discord_integration->setCheckable(true);
        actionHide_tool_bar = new QAction(MainWindow);
        actionHide_tool_bar->setObjectName(QString::fromUtf8("actionHide_tool_bar"));
        actionHide_tool_bar->setCheckable(true);
        actionACPI_Shutdown = new QAction(MainWindow);
        actionACPI_Shutdown->setObjectName(QString::fromUtf8("actionACPI_Shutdown"));
        actionACPI_Shutdown->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menuicons/win/icons/acpi_shutdown.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionACPI_Shutdown->setIcon(icon5);
        actionACPI_Shutdown->setVisible(true);
        actionBegin_trace = new QAction(MainWindow);
        actionBegin_trace->setObjectName(QString::fromUtf8("actionBegin_trace"));
        actionBegin_trace->setVisible(false);
        actionBegin_trace->setShortcutVisibleInContextMenu(false);
        actionEnd_trace = new QAction(MainWindow);
        actionEnd_trace->setObjectName(QString::fromUtf8("actionEnd_trace"));
        actionEnd_trace->setVisible(false);
        actionEnd_trace->setShortcutVisibleInContextMenu(false);
        actionRenderer_options = new QAction(MainWindow);
        actionRenderer_options->setObjectName(QString::fromUtf8("actionRenderer_options"));
        actionVulkan = new QAction(MainWindow);
        actionVulkan->setObjectName(QString::fromUtf8("actionVulkan"));
        actionVulkan->setCheckable(true);
        actionVulkan->setProperty("vid_api", QVariant(4));
        actionMCA_devices = new QAction(MainWindow);
        actionMCA_devices->setObjectName(QString::fromUtf8("actionMCA_devices"));
        actionDirect3D_9 = new QAction(MainWindow);
        actionDirect3D_9->setObjectName(QString::fromUtf8("actionDirect3D_9"));
        actionDirect3D_9->setCheckable(true);
        actionDirect3D_9->setProperty("vid_api", QVariant(5));
        actionShow_non_primary_monitors = new QAction(MainWindow);
        actionShow_non_primary_monitors->setObjectName(QString::fromUtf8("actionShow_non_primary_monitors"));
        actionShow_non_primary_monitors->setCheckable(true);
        actionVNC = new QAction(MainWindow);
        actionVNC->setObjectName(QString::fromUtf8("actionVNC"));
        actionVNC->setCheckable(true);
        actionVNC->setProperty("vid_api", QVariant(6));
        actionOpen_screenshots_folder = new QAction(MainWindow);
        actionOpen_screenshots_folder->setObjectName(QString::fromUtf8("actionOpen_screenshots_folder"));
        actionApply_fullscreen_stretch_mode_when_maximized = new QAction(MainWindow);
        actionApply_fullscreen_stretch_mode_when_maximized->setObjectName(QString::fromUtf8("actionApply_fullscreen_stretch_mode_when_maximized"));
        actionApply_fullscreen_stretch_mode_when_maximized->setCheckable(true);
        actionCursor_Puck = new QAction(MainWindow);
        actionCursor_Puck->setObjectName(QString::fromUtf8("actionCursor_Puck"));
        actionCursor_Puck->setCheckable(true);
        actionPen = new QAction(MainWindow);
        actionPen->setObjectName(QString::fromUtf8("actionPen"));
        actionPen->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new RendererStack(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 724, 23));
        menuAction = new QMenu(menubar);
        menuAction->setObjectName(QString::fromUtf8("menuAction"));
        menuTablet_tool = new QMenu(menuAction);
        menuTablet_tool->setObjectName(QString::fromUtf8("menuTablet_tool"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuRenderer = new QMenu(menuView);
        menuRenderer->setObjectName(QString::fromUtf8("menuRenderer"));
        menuWindow_scale_factor = new QMenu(menuView);
        menuWindow_scale_factor->setObjectName(QString::fromUtf8("menuWindow_scale_factor"));
        menuFilter_method = new QMenu(menuView);
        menuFilter_method->setObjectName(QString::fromUtf8("menuFilter_method"));
        menuFullscreen_stretch_mode = new QMenu(menuView);
        menuFullscreen_stretch_mode->setObjectName(QString::fromUtf8("menuFullscreen_stretch_mode"));
        menuEGA_S_VGA_settings = new QMenu(menuView);
        menuEGA_S_VGA_settings->setObjectName(QString::fromUtf8("menuEGA_S_VGA_settings"));
        menuVGA_screen_type = new QMenu(menuEGA_S_VGA_settings);
        menuVGA_screen_type->setObjectName(QString::fromUtf8("menuVGA_screen_type"));
        menuGrayscale_conversion_type = new QMenu(menuEGA_S_VGA_settings);
        menuGrayscale_conversion_type->setObjectName(QString::fromUtf8("menuGrayscale_conversion_type"));
        menuMedia = new QMenu(menubar);
        menuMedia->setObjectName(QString::fromUtf8("menuMedia"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setWindowTitle(QString::fromUtf8("toolBar"));
        toolBar->setAutoFillBackground(true);
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(16, 16));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuAction->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuMedia->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuAction->addAction(actionKeyboard_requires_capture);
        menuAction->addAction(actionRight_CTRL_is_left_ALT);
        menuAction->addAction(menuTablet_tool->menuAction());
        menuAction->addSeparator();
        menuAction->addAction(actionHard_Reset);
        menuAction->addAction(actionCtrl_Alt_Del);
        menuAction->addSeparator();
        menuAction->addAction(actionCtrl_Alt_Esc);
        menuAction->addSeparator();
        menuAction->addAction(actionPause);
        menuAction->addSeparator();
        menuAction->addAction(actionExit);
        menuTablet_tool->addAction(actionPen);
        menuTablet_tool->addAction(actionCursor_Puck);
        menuTools->addAction(actionSettings);
        menuTools->addAction(actionUpdate_status_bar_icons);
        menuTools->addSeparator();
        menuTools->addAction(actionEnable_Discord_integration);
        menuTools->addSeparator();
        menuTools->addAction(actionTake_screenshot);
        menuTools->addAction(actionSound_gain);
        menuTools->addSeparator();
        menuTools->addAction(actionPreferences);
        menuTools->addSeparator();
        menuTools->addAction(actionBegin_trace);
        menuTools->addAction(actionEnd_trace);
        menuTools->addSeparator();
        menuTools->addAction(actionMCA_devices);
        menuTools->addSeparator();
        menuTools->addAction(actionOpen_screenshots_folder);
        menuView->addAction(actionHide_tool_bar);
        menuView->addAction(actionHide_status_bar);
        menuView->addSeparator();
        menuView->addAction(actionShow_non_primary_monitors);
        menuView->addAction(actionResizable_window);
        menuView->addAction(actionRemember_size_and_position);
        menuView->addSeparator();
        menuView->addAction(menuRenderer->menuAction());
        menuView->addAction(actionRenderer_options);
        menuView->addSeparator();
        menuView->addAction(actionSpecify_dimensions);
        menuView->addAction(actionForce_4_3_display_ratio);
        menuView->addAction(menuWindow_scale_factor->menuAction());
        menuView->addAction(menuFilter_method->menuAction());
        menuView->addAction(actionHiDPI_scaling);
        menuView->addSeparator();
        menuView->addAction(actionFullscreen);
        menuView->addAction(menuFullscreen_stretch_mode->menuAction());
        menuView->addAction(actionApply_fullscreen_stretch_mode_when_maximized);
        menuView->addAction(menuEGA_S_VGA_settings->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionCGA_PCjr_Tandy_EGA_S_VGA_overscan);
        menuView->addAction(actionChange_contrast_for_monochrome_display);
        menuRenderer->addAction(actionSoftware_Renderer);
        menuRenderer->addAction(actionHardware_Renderer_OpenGL);
        menuRenderer->addAction(actionHardware_Renderer_OpenGL_ES);
        menuRenderer->addAction(actionOpenGL_3_0_Core);
        menuRenderer->addAction(actionVulkan);
        menuRenderer->addAction(actionDirect3D_9);
        menuRenderer->addAction(actionVNC);
        menuWindow_scale_factor->addAction(action0_5x);
        menuWindow_scale_factor->addAction(action1x);
        menuWindow_scale_factor->addAction(action1_5x);
        menuWindow_scale_factor->addAction(action2x);
        menuWindow_scale_factor->addAction(action3x);
        menuWindow_scale_factor->addAction(action4x);
        menuWindow_scale_factor->addAction(action5x);
        menuWindow_scale_factor->addAction(action6x);
        menuWindow_scale_factor->addAction(action7x);
        menuWindow_scale_factor->addAction(action8x);
        menuFilter_method->addAction(actionNearest);
        menuFilter_method->addAction(actionLinear);
        menuFullscreen_stretch_mode->addAction(actionFullScreen_stretch);
        menuFullscreen_stretch_mode->addAction(actionFullScreen_43);
        menuFullscreen_stretch_mode->addAction(actionFullScreen_keepRatio);
        menuFullscreen_stretch_mode->addAction(actionFullScreen_int);
        menuEGA_S_VGA_settings->addAction(actionInverted_VGA_monitor);
        menuEGA_S_VGA_settings->addAction(menuVGA_screen_type->menuAction());
        menuEGA_S_VGA_settings->addAction(menuGrayscale_conversion_type->menuAction());
        menuVGA_screen_type->addAction(actionRGB_Color);
        menuVGA_screen_type->addAction(actionRGB_Grayscale);
        menuVGA_screen_type->addAction(actionAmber_monitor);
        menuVGA_screen_type->addAction(actionGreen_monitor);
        menuVGA_screen_type->addAction(actionWhite_monitor);
        menuGrayscale_conversion_type->addAction(actionBT601_NTSC_PAL);
        menuGrayscale_conversion_type->addAction(actionBT709_HDTV);
        menuGrayscale_conversion_type->addAction(actionAverage);
        menuAbout->addAction(actionDocumentation);
        menuAbout->addAction(actionAbout_86Box);
        menuAbout->addAction(actionAbout_Qt);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionHard_Reset);
        toolBar->addAction(actionACPI_Shutdown);
        toolBar->addSeparator();
        toolBar->addAction(actionCtrl_Alt_Del);
        toolBar->addAction(actionCtrl_Alt_Esc);
        toolBar->addSeparator();
        toolBar->addAction(actionSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "86Box", nullptr));
        actionKeyboard_requires_capture->setText(QCoreApplication::translate("MainWindow", "&Keyboard requires capture", nullptr));
        actionRight_CTRL_is_left_ALT->setText(QCoreApplication::translate("MainWindow", "&Right CTRL is left ALT", nullptr));
        actionHard_Reset->setText(QCoreApplication::translate("MainWindow", "&Hard Reset...", nullptr));
        actionCtrl_Alt_Del->setText(QCoreApplication::translate("MainWindow", "&Ctrl+Alt+Del", nullptr));
#if QT_CONFIG(tooltip)
        actionCtrl_Alt_Del->setToolTip(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Del", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCtrl_Alt_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCtrl_Alt_Esc->setText(QCoreApplication::translate("MainWindow", "Ctrl+Alt+&Esc", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "&Pause", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
        actionFullscreen->setText(QCoreApplication::translate("MainWindow", "&Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSoftware_Renderer->setText(QCoreApplication::translate("MainWindow", "&Qt (Software)", nullptr));
        actionHardware_Renderer_OpenGL->setText(QCoreApplication::translate("MainWindow", "Qt (&OpenGL)", nullptr));
        actionHardware_Renderer_OpenGL_ES->setText(QCoreApplication::translate("MainWindow", "Qt (OpenGL &ES)", nullptr));
        actionHide_status_bar->setText(QCoreApplication::translate("MainWindow", "&Hide status bar", nullptr));
        actionResizable_window->setText(QCoreApplication::translate("MainWindow", "&Resizeable window", nullptr));
        actionRemember_size_and_position->setText(QCoreApplication::translate("MainWindow", "R&emember size && position", nullptr));
        actionSpecify_dimensions->setText(QCoreApplication::translate("MainWindow", "Specify dimensions...", nullptr));
        actionForce_4_3_display_ratio->setText(QCoreApplication::translate("MainWindow", "F&orce 4:3 display ratio", nullptr));
        actionHiDPI_scaling->setText(QCoreApplication::translate("MainWindow", "Hi&DPI scaling", nullptr));
        actionCGA_PCjr_Tandy_EGA_S_VGA_overscan->setText(QCoreApplication::translate("MainWindow", "CGA/PCjr/Tandy/E&GA/(S)VGA overscan", nullptr));
        actionChange_contrast_for_monochrome_display->setText(QCoreApplication::translate("MainWindow", "Change contrast for &monochrome display", nullptr));
        action0_5x->setText(QCoreApplication::translate("MainWindow", "&0.5x", nullptr));
        action1x->setText(QCoreApplication::translate("MainWindow", "&1x", nullptr));
        action1_5x->setText(QCoreApplication::translate("MainWindow", "1.&5x", nullptr));
        action2x->setText(QCoreApplication::translate("MainWindow", "&2x", nullptr));
        action3x->setText(QCoreApplication::translate("MainWindow", "&3x", nullptr));
        action4x->setText(QCoreApplication::translate("MainWindow", "&4x", nullptr));
        action5x->setText(QCoreApplication::translate("MainWindow", "&5x", nullptr));
        action6x->setText(QCoreApplication::translate("MainWindow", "&6x", nullptr));
        action7x->setText(QCoreApplication::translate("MainWindow", "&7x", nullptr));
        action8x->setText(QCoreApplication::translate("MainWindow", "&8x", nullptr));
        actionNearest->setText(QCoreApplication::translate("MainWindow", "&Nearest", nullptr));
        actionLinear->setText(QCoreApplication::translate("MainWindow", "&Linear", nullptr));
        actionFullScreen_stretch->setText(QCoreApplication::translate("MainWindow", "&Full screen stretch", nullptr));
        actionFullScreen_43->setText(QCoreApplication::translate("MainWindow", "&4:3", nullptr));
        actionFullScreen_keepRatio->setText(QCoreApplication::translate("MainWindow", "&Square pixels (Keep ratio)", nullptr));
        actionFullScreen_int->setText(QCoreApplication::translate("MainWindow", "&Integer scale", nullptr));
        actionInverted_VGA_monitor->setText(QCoreApplication::translate("MainWindow", "&Inverted VGA monitor", nullptr));
        actionRGB_Color->setText(QCoreApplication::translate("MainWindow", "RGB &Color", nullptr));
        actionRGB_Grayscale->setText(QCoreApplication::translate("MainWindow", "&RGB Grayscale", nullptr));
        actionAmber_monitor->setText(QCoreApplication::translate("MainWindow", "&Amber monitor", nullptr));
        actionGreen_monitor->setText(QCoreApplication::translate("MainWindow", "&Green monitor", nullptr));
        actionWhite_monitor->setText(QCoreApplication::translate("MainWindow", "&White monitor", nullptr));
        actionBT601_NTSC_PAL->setText(QCoreApplication::translate("MainWindow", "BT&601 (NTSC/PAL)", nullptr));
        actionBT709_HDTV->setText(QCoreApplication::translate("MainWindow", "BT&709 (HDTV)", nullptr));
        actionAverage->setText(QCoreApplication::translate("MainWindow", "&Average", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionAbout_86Box->setText(QCoreApplication::translate("MainWindow", "&About 86Box...", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "&Documentation...", nullptr));
        actionUpdate_status_bar_icons->setText(QCoreApplication::translate("MainWindow", "&Update status bar icons", nullptr));
        actionTake_screenshot->setText(QCoreApplication::translate("MainWindow", "Take s&creenshot", nullptr));
#if QT_CONFIG(shortcut)
        actionTake_screenshot->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSound_gain->setText(QCoreApplication::translate("MainWindow", "Sound &gain...", nullptr));
        actionOpenGL_3_0_Core->setText(QCoreApplication::translate("MainWindow", "Open&GL (3.0 Core)", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences...", nullptr));
        actionEnable_Discord_integration->setText(QCoreApplication::translate("MainWindow", "Enable &Discord integration", nullptr));
        actionHide_tool_bar->setText(QCoreApplication::translate("MainWindow", "Hide &toolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionHide_tool_bar->setToolTip(QCoreApplication::translate("MainWindow", "Hide tool bar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionACPI_Shutdown->setText(QCoreApplication::translate("MainWindow", "ACPI Shutdown", nullptr));
#if QT_CONFIG(tooltip)
        actionACPI_Shutdown->setToolTip(QCoreApplication::translate("MainWindow", "ACPI Shutdown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBegin_trace->setText(QCoreApplication::translate("MainWindow", "Begin trace", nullptr));
#if QT_CONFIG(shortcut)
        actionBegin_trace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnd_trace->setText(QCoreApplication::translate("MainWindow", "End trace", nullptr));
#if QT_CONFIG(shortcut)
        actionEnd_trace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRenderer_options->setText(QCoreApplication::translate("MainWindow", "Renderer options...", nullptr));
        actionVulkan->setText(QCoreApplication::translate("MainWindow", "&Vulkan", nullptr));
        actionMCA_devices->setText(QCoreApplication::translate("MainWindow", "MCA devices...", nullptr));
        actionDirect3D_9->setText(QCoreApplication::translate("MainWindow", "Direct3D 9", nullptr));
        actionShow_non_primary_monitors->setText(QCoreApplication::translate("MainWindow", "Show non-primary monitors", nullptr));
        actionVNC->setText(QCoreApplication::translate("MainWindow", "VNC", nullptr));
        actionOpen_screenshots_folder->setText(QCoreApplication::translate("MainWindow", "Open screenshots folder...", nullptr));
        actionApply_fullscreen_stretch_mode_when_maximized->setText(QCoreApplication::translate("MainWindow", "Apply fullscreen stretch mode when maximized", nullptr));
        actionCursor_Puck->setText(QCoreApplication::translate("MainWindow", "Cursor/Puck", nullptr));
        actionPen->setText(QCoreApplication::translate("MainWindow", "Pen", nullptr));
        menuAction->setTitle(QCoreApplication::translate("MainWindow", "&Action", nullptr));
        menuTablet_tool->setTitle(QCoreApplication::translate("MainWindow", "Tablet tool", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuRenderer->setTitle(QCoreApplication::translate("MainWindow", "Re&nderer", nullptr));
        menuWindow_scale_factor->setTitle(QCoreApplication::translate("MainWindow", "&Window scale factor", nullptr));
        menuFilter_method->setTitle(QCoreApplication::translate("MainWindow", "Filter method", nullptr));
        menuFullscreen_stretch_mode->setTitle(QCoreApplication::translate("MainWindow", "Fullscreen &stretch mode", nullptr));
        menuEGA_S_VGA_settings->setTitle(QCoreApplication::translate("MainWindow", "E&GA/(S)VGA settings", nullptr));
        menuVGA_screen_type->setTitle(QCoreApplication::translate("MainWindow", "VGA screen &type", nullptr));
        menuGrayscale_conversion_type->setTitle(QCoreApplication::translate("MainWindow", "Grayscale &conversion type", nullptr));
        menuMedia->setTitle(QCoreApplication::translate("MainWindow", "&Media", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_MAINWINDOW_H
