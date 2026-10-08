// /Script/Engine.FullyLoadedPackagesInfo
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FFullyLoadedPackagesInfo
{
    UPROPERTY() TEnumAsByte<EFullyLoadPackageType> FullyLoadType;  // 0x0000, size 0x1
    UPROPERTY() FString Tag;  // 0x0008, size 0x10
    UPROPERTY() TArray<FName> PackagesToLoad;  // 0x0018, size 0x10
    UPROPERTY() TArray<UObject*> LoadedObjects;  // 0x0028, size 0x10
};
