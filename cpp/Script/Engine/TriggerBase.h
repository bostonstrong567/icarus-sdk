// /Script/Engine.TriggerBase
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/TriggerBase.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class ATriggerBase : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UShapeComponent* CollisionComponent;  // 0x0220, size 0x8
};
