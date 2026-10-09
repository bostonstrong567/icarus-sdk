// /Script/Engine.BlueprintPathsLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintPathsLibrary.h

UCLASS()
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString AutomationDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString AutomationLogDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString AutomationTransientDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BugItDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ChangeExtension(FString InPath, FString InNewExtension);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString CloudDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool CollapseRelativeDirectories(FString InPath, FString& OutPath);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Combine(const TArray<FString>& InPaths);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ConvertFromSandboxPath(FString InPath, FString InSandboxName);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ConvertRelativePathToFull(FString InPath, FString InBasePath);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ConvertToSandboxPath(FString InPath, FString InSandboxName);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString CreateTempFilename(FString Path, FString Prefix, FString Extension);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString DiffDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DirectoryExists(FString InPath);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineConfigDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineContentDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineIntermediateDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EnginePluginsDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineSavedDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineSourceDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineUserDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EngineVersionAgnosticUserDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EnterpriseDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EnterpriseFeaturePackDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EnterprisePluginsDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString FeaturePackDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FileExists(FString InPath);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GameAgnosticSavedDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GameDevelopersDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GameSourceDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GameUserDeveloperDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GeneratedConfigDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetBaseFilename(FString InPath, bool bRemovePath);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCleanFilename(FString InPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetEditorLocalizationPaths();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetEngineLocalizationPaths();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetExtension(FString InPath, bool bIncludeDot);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetGameLocalizationPaths();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetInvalidFileSystemChars();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetPath(FString InPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetProjectFilePath();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetPropertyNameLocalizationPaths();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetRelativePathToRoot();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetRestrictedFolderNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetToolTipLocalizationPaths();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasProjectPersistentDownloadDir();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDrive(FString InPath);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsProjectFilePathSet();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRelative(FString InPath);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRestrictedPath(FString InPath);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSamePath(FString PathA, FString PathB);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString LaunchDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool MakePathRelativeTo(FString InPath, FString InRelativeTo, FString& OutPath);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MakePlatformFilename(FString InPath, FString& OutPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MakeStandardFilename(FString InPath, FString& OutPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString MakeValidFileName(FString InString, FString InReplacementChar);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void NormalizeDirectoryName(FString InPath, FString& OutPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void NormalizeFilename(FString InPath, FString& OutPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProfilingDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectConfigDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectContentDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectIntermediateDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectLogDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectModsDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectPersistentDownloadDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectPluginsDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectSavedDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProjectUserDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void RemoveDuplicateSlashes(FString InPath, FString& OutPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString RootDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString SandboxesDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ScreenShotDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString SetExtension(FString InPath, FString InNewExtension);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SetProjectFilePath(FString NewGameProjectFilePath);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ShaderWorkingDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ShouldSaveToUserDir();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString SourceConfigDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Split(FString InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ValidatePath(FString InPath, bool& bDidSucceed, FText& OutReason);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString VideoCaptureDir();  // parameters 0x10
};
