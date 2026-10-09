// /Script/Engine.LightmassPortal
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassPortal.h

UCLASS(MinimalAPI, Config=Engine)
class ALightmassPortal : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) ULightmassPortalComponent* PortalComponent;  // 0x0220, size 0x8
};
