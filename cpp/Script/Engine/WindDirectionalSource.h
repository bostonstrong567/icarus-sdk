// /Script/Engine.WindDirectionalSource
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/WindDirectionalSource.h

UCLASS(Config=Engine)
class AWindDirectionalSource : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWindDirectionalSourceComponent* Component;  // 0x0220, size 0x8
};
