// /Script/ApexDestruction.DestructibleActor
// Derives from: AActor > UObject
// size 0x238, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleActor.h

UCLASS(Config=Engine)
class ADestructibleActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UDestructibleComponent* DestructibleComponent;  // 0x0220, size 0x8
    UPROPERTY(BlueprintAssignable) FActorFractureSignature OnActorFracture;  // 0x0228, size 0x10
};
