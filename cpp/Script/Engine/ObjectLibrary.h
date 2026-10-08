// /Script/Engine.ObjectLibrary
// Derives from: UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Engine/ObjectLibrary.h

UCLASS(MinimalAPI)
class UObjectLibrary : public UObject
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> ObjectBaseClass;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) bool bHasBlueprintClasses;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) TArray<UObject*> Objects;  // 0x0038, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<UObject>> WeakObjects;  // 0x0048, size 0x10
    UPROPERTY(Transient) bool bUseWeakReferences;  // 0x0058, size 0x1
    UPROPERTY(Transient) bool bIsFullyLoaded;  // 0x0059, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TArray<FAssetData,TSizedDefaultAllocator<32> > AssetDataList;  // 0x0060, protected
    bool bIncludeOnlyOnDiskAssets;  // 0x0070
    bool bRecursivePaths;  // 0x0071
    UObjectLibrary::FObjectLibraryOnObjectAdded OnObjectAddedEvent;  // 0x0078, protected
    UObjectLibrary::FObjectLibraryOnObjectRemoved OnObjectRemovedEvent;  // 0x0090, protected

    // Virtual functions that start here:
    //   AddObject, ClearLoaded, GetAssetDataList, LoadAssetDataFromPath, LoadAssetDataFromPaths
    //   LoadAssetsFromAssetData, LoadAssetsFromPath, LoadAssetsFromPaths, LoadBlueprintAssetDataFromPath
    //   LoadBlueprintAssetDataFromPaths, LoadBlueprintsFromPath, LoadBlueprintsFromPaths, RemoveObject
    //   UseWeakReferences
};
