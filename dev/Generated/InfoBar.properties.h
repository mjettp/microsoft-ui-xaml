// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class InfoBarProperties
{
public:
    InfoBarProperties();

    void ActionButton(winrt::ButtonBase const& value);
    winrt::ButtonBase ActionButton();

    void CloseButtonCommand(winrt::ICommand const& value);
    winrt::ICommand CloseButtonCommand();

    void CloseButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable CloseButtonCommandParameter();

    void IconSource(winrt::IconSource const& value);
    winrt::IconSource IconSource();

    void IsIconVisible(bool value);
    bool IsIconVisible();

    void IsOpen(bool value);
    bool IsOpen();

    void IsUserDismissable(bool value);
    bool IsUserDismissable();

    void Message(winrt::hstring const& value);
    winrt::hstring Message();

    void Severity(winrt::InfoBarSeverity const& value);
    winrt::InfoBarSeverity Severity();

    void TemplateSettings(winrt::InfoBarTemplateSettings const& value);
    winrt::InfoBarTemplateSettings TemplateSettings();

    void Title(winrt::hstring const& value);
    winrt::hstring Title();

    static winrt::DependencyProperty ActionButtonProperty() { return s_ActionButtonProperty; }
    static winrt::DependencyProperty CloseButtonCommandProperty() { return s_CloseButtonCommandProperty; }
    static winrt::DependencyProperty CloseButtonCommandParameterProperty() { return s_CloseButtonCommandParameterProperty; }
    static winrt::DependencyProperty IconSourceProperty() { return s_IconSourceProperty; }
    static winrt::DependencyProperty IsIconVisibleProperty() { return s_IsIconVisibleProperty; }
    static winrt::DependencyProperty IsOpenProperty() { return s_IsOpenProperty; }
    static winrt::DependencyProperty IsUserDismissableProperty() { return s_IsUserDismissableProperty; }
    static winrt::DependencyProperty MessageProperty() { return s_MessageProperty; }
    static winrt::DependencyProperty SeverityProperty() { return s_SeverityProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }
    static winrt::DependencyProperty TitleProperty() { return s_TitleProperty; }

    static GlobalDependencyProperty s_ActionButtonProperty;
    static GlobalDependencyProperty s_CloseButtonCommandProperty;
    static GlobalDependencyProperty s_CloseButtonCommandParameterProperty;
    static GlobalDependencyProperty s_IconSourceProperty;
    static GlobalDependencyProperty s_IsIconVisibleProperty;
    static GlobalDependencyProperty s_IsOpenProperty;
    static GlobalDependencyProperty s_IsUserDismissableProperty;
    static GlobalDependencyProperty s_MessageProperty;
    static GlobalDependencyProperty s_SeverityProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;
    static GlobalDependencyProperty s_TitleProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnIconSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsIconVisiblePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsUserDismissablePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSeverityPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
