// /Script/Landscape.LandscapeMeshProxyComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x510, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeMeshProxyComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FGuid LandscapeGuid;  // 0x04E0, size 0x10
    UPROPERTY() TArray<FIntPoint> ProxyComponentBases;  // 0x04F0, size 0x10
    UPROPERTY() int8 ProxyLOD;  // 0x0500, size 0x1
};
