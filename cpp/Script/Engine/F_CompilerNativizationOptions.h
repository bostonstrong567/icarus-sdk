// /Script/Engine.CompilerNativizationOptions
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FCompilerNativizationOptions
{
    UPROPERTY() FName PlatformName;  // 0x0000, size 0x8
    UPROPERTY() bool ServerOnlyPlatform;  // 0x0008, size 0x1
    UPROPERTY() bool ClientOnlyPlatform;  // 0x0009, size 0x1
    UPROPERTY() bool bExcludeMonolithicHeaders;  // 0x000A, size 0x1
    UPROPERTY() TArray<FName> ExcludedModules;  // 0x0010, size 0x10
    UPROPERTY() TSet<FSoftObjectPath> ExcludedAssets;  // 0x0020, size 0x50
    UPROPERTY() TArray<FString> ExcludedFolderPaths;  // 0x0070, size 0x10
};
