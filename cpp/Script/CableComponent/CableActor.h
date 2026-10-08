// /Script/CableComponent.CableActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/Runtime/CableComponent/Source/CableComponent/Classes/CableActor.h

UCLASS(Config=Engine)
class ACableActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCableComponent* CableComponent;  // 0x0220, size 0x8
};
