// /Script/Engine.SkyAtmosphere
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Components/SkyAtmosphereComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ASkyAtmosphere : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkyAtmosphereComponent* SkyAtmosphereComponent;  // 0x0220, size 0x8
};
