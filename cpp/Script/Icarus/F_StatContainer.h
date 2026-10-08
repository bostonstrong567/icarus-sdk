// /Script/Icarus.StatContainer
// size 0x108, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FStatContainer
{
    UPROPERTY(Instanced) UIcarusStatContainer* IcarusStatComponent;  // 0x00F8, size 0x8

    // Not reflected:
    TMulticastDelegate<void __cdecl(FStatContainer *),FDefaultDelegateUserPolicy> OnInternalStatContainerUpdated;  // 0x0000
    TMulticastDelegate<void __cdecl(FStatContainer *),FDefaultDelegateUserPolicy> OnInternalStatContainerDestroyed;  // 0x0018
    TMap<FStatSource,FStatList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStatSource,FStatList,0> > StatSources;  // 0x0030
    FStatList StatCache;  // 0x0080
    int32 StatLock;  // 0x0090
    int32 LockDepth;  // 0x0094
    TMap<enum EStats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EStats,int,0> > PendingChangedStats;  // 0x0098
    TArray<FBackingStatContainer,TSizedDefaultAllocator<32> > BackingContainers;  // 0x00E8
    int32 NextUID;  // 0x0100
};
