; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Sokolova_Repository_v3_withAll"
#define MyAppVersion "1.0.2"
#define MyAppPublisher "My Company, Inc."
#define MyAppURL "https://www.example.com/"
#define MyAppExeName "+Sokolova_Repository_v3_0.exe"
#define MyAppAssocName MyAppName + " File"
#define MyAppAssocExt ".myp"
#define MyAppAssocKey StringChange(MyAppAssocName, " ", "") + MyAppAssocExt

[Setup]
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{8CEF487E-028C-4F57-982C-B7571A80238C}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppName}
ChangesAssociations=yes
DefaultGroupName={#MyAppName}
AllowNoIcons=yes
LicenseFile=C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\start.rtf
InfoBeforeFile=C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\licence.rtf
InfoAfterFile=C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\end.rtf
; Remove the following line to run in administrative install mode (install for all users.)
PrivilegesRequired=lowest
PrivilegesRequiredOverridesAllowed=dialog
OutputDir=C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0
OutputBaseFilename=Sokolova_Repository_withAll
Compression=lzma
SolidCompression=yes
WizardStyle=modern

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\x64\Debug\{#MyAppExeName}"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\x64\Debug\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\html\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\+Sokolova_Repository_v3_0.exe.recipe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\+Sokolova_Repository_v3_0.ilk"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\+Sokolova_Repository_v3_0.log"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\+Sokolova_Repository_v3_0.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\vc143.idb"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\x64\Debug\vc143.pdb"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0.vcxproj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0.vcxproj.filters"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0.vcxproj.user"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\socol\OneDrive\Документы\lab\Sokolova_Rep_v3\+Sokolova_Repository_v3_0\+Sokolova_Repository_v3_0\description.h"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Registry]
Root: HKA; Subkey: "Software\Classes\{#MyAppAssocExt}\OpenWithProgids"; ValueType: string; ValueName: "{#MyAppAssocKey}"; ValueData: ""; Flags: uninsdeletevalue
Root: HKA; Subkey: "Software\Classes\{#MyAppAssocKey}"; ValueType: string; ValueName: ""; ValueData: "{#MyAppAssocName}"; Flags: uninsdeletekey
Root: HKA; Subkey: "Software\Classes\{#MyAppAssocKey}\DefaultIcon"; ValueType: string; ValueName: ""; ValueData: "{app}\{#MyAppExeName},0"
Root: HKA; Subkey: "Software\Classes\{#MyAppAssocKey}\shell\open\command"; ValueType: string; ValueName: ""; ValueData: """{app}\{#MyAppExeName}"" ""%1"""
Root: HKA; Subkey: "Software\Classes\Applications\{#MyAppExeName}\SupportedTypes"; ValueType: string; ValueName: ".myp"; ValueData: ""

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

