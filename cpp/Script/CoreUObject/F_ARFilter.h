// /Script/CoreUObject.ARFilter
// size 0xF0, declared in Engine/Source/Runtime/CoreUObject/Public/AssetRegistry/ARFilter.h

USTRUCT()
struct FARFilter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> PackageNames;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> PackagePaths;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ObjectPaths;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ClassNames;  // 0x0030, size 0x10
    TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1> > TagsAndValues;  // 0x0040, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FName> RecursiveClassesExclusionSet;  // 0x0090, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRecursivePaths;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRecursiveClasses;  // 0x00E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeOnlyOnDiskAssets;  // 0x00E2, size 0x1
    uint32 WithoutPackageFlags;  // 0x00E4, not reflected
    uint32 WithPackageFlags;  // 0x00E8, not reflected
};
