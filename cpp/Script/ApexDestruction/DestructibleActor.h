// /Script/ApexDestruction.DestructibleActor
// Derives from: AActor > UObject
// size 0x238, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleActor.h

UCLASS(Config=Engine)
class ADestructibleActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FActorFractureSignature OnActorFracture;  // 0x0228, size 0x10
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UDestructibleComponent* DestructibleComponent;  // 0x0220, size 0x8
};
