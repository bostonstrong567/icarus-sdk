// /Script/SignificanceManager.SignificanceManager
// Derives from: UObject
// size 0x120, declared in Engine/Plugins/Runtime/SignificanceManager/Source/SignificanceManager/Public/SignificanceManager.h

UCLASS(Config=Engine)
class USignificanceManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    uint32 : 1 bCreateOnClient;  // 0x0028, not reflected
    uint32 : 1 bCreateOnServer;  // 0x0028, not reflected
    uint32 : 1 bSortSignificanceAscending;  // 0x0028, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > Viewpoints;  // 0x0030, not reflected
private:
    uint32 ManagedObjectsWithSequentialPostWork;  // 0x0040, not reflected
    TMap<FName,TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> >,0> > ManagedObjectsByTag;  // 0x0048, not reflected
    TMap<UObject *,USignificanceManager::FManagedObjectInfo *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,USignificanceManager::FManagedObjectInfo *,0> > ManagedObjects;  // 0x0098, not reflected
    TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> > ObjArray;  // 0x00E8, not reflected
    TArray<USignificanceManager::FSequentialPostWorkPair,TSizedDefaultAllocator<32> > ObjWithSequentialPostWork;  // 0x00F8, not reflected
    UPROPERTY(EditAnywhere, Config) FSoftClassPath SignificanceManagerClassName;  // 0x0108, size 0x18

    // Virtual functions that start here:
    //   RegisterObject, UnregisterObject, Update
};
