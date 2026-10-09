// /Script/Icarus.StatContainer
// size 0x108, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FStatContainer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(FStatContainer *),FDefaultDelegateUserPolicy> OnInternalStatContainerUpdated;  // 0x0000, not reflected
    TMulticastDelegate<void __cdecl(FStatContainer *),FDefaultDelegateUserPolicy> OnInternalStatContainerDestroyed;  // 0x0018, not reflected
protected:
    TMap<FStatSource,FStatList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStatSource,FStatList,0> > StatSources;  // 0x0030, not reflected
    FStatList StatCache;  // 0x0080, not reflected
private:
    int32 StatLock;  // 0x0090, not reflected
    int32 LockDepth;  // 0x0094, not reflected
    TMap<enum EStats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EStats,int,0> > PendingChangedStats;  // 0x0098, not reflected
    TArray<FBackingStatContainer,TSizedDefaultAllocator<32> > BackingContainers;  // 0x00E8, not reflected
    UPROPERTY(Instanced) UIcarusStatContainer* IcarusStatComponent;  // 0x00F8, size 0x8
    int32 NextUID;  // 0x0100, not reflected
};
