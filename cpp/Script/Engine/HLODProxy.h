// /Script/Engine.HLODProxy
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Engine/HLODProxy.h

UCLASS()
class UHLODProxy : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FHLODProxyMesh> ProxyMeshes;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors;  // 0x0038, size 0x50
};
