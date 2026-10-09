// /Script/Engine.WindDirectionalSource
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/WindDirectionalSource.h

UCLASS(Config=Engine)
class AWindDirectionalSource : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWindDirectionalSourceComponent* Component;  // 0x0220, size 0x8
};
