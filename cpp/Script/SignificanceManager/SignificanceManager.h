// /Script/SignificanceManager.SignificanceManager
// Derives from: UObject
// size 0x120, declared in Engine/Plugins/Runtime/SignificanceManager/Source/SignificanceManager/Public/SignificanceManager.h

UCLASS(Config=Engine)
class USignificanceManager : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) FSoftClassPath SignificanceManagerClassName;  // 0x0108, size 0x18

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bCreateOnClient;  // 0x0028, protected
    uint32 : 1 bCreateOnServer;  // 0x0028, protected
    uint32 : 1 bSortSignificanceAscending;  // 0x0028, protected
    TArray<FTransform,TSizedDefaultAllocator<32> > Viewpoints;  // 0x0030, protected
    uint32 ManagedObjectsWithSequentialPostWork;  // 0x0040, private
    TMap<FName,TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> >,0> > ManagedObjectsByTag;  // 0x0048, private
    TMap<UObject *,USignificanceManager::FManagedObjectInfo *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,USignificanceManager::FManagedObjectInfo *,0> > ManagedObjects;  // 0x0098, private
    TArray<USignificanceManager::FManagedObjectInfo *,TSizedDefaultAllocator<32> > ObjArray;  // 0x00E8, private
    TArray<USignificanceManager::FSequentialPostWorkPair,TSizedDefaultAllocator<32> > ObjWithSequentialPostWork;  // 0x00F8, private

    // Virtual functions that start here:
    //   RegisterObject, UnregisterObject, Update
};
