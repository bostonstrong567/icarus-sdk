// /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Derives from: UOnlineEngineInterface > UObject
// size 0x188, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Private/OnlineEngineInterfaceImpl.h

UCLASS(Config=Engine)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Config) TMap<FName, FName> MappedUniqueNetIdTypes;  // 0x0028, size 0x50
    UPROPERTY(Config) TArray<FName> CompatibleUniqueNetIdTypes;  // 0x0078, size 0x10
    UPROPERTY(Config) FName VoiceSubsystemNameOverride;  // 0x0088, size 0x8
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x0090, not reflected
    TMap<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0> > OnStartSessionCompleteDelegateHandles;  // 0x0098, not reflected
    TMap<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0> > OnEndSessionCompleteDelegateHandles;  // 0x00E8, not reflected
    TMap<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0> > OnLoginPIECompleteDelegateHandlesForPIEInstances;  // 0x0138, not reflected
};
