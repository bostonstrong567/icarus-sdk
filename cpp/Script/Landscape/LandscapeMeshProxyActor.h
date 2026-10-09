// /Script/Landscape.LandscapeMeshProxyActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeMeshProxyActor.h

UCLASS(MinimalAPI, Config=Engine)
class ALandscapeMeshProxyActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;  // 0x0220, size 0x8
};
