// /Script/Icarus.GenericAITargetComponent
// Derives from: UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/AI/GenericAITargetComponent.h

UCLASS(Config=Engine)
class UGenericAITargetComponent : public UActorComponent, public IAITargetable, public IAISightTargetInterface
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UAIPerceptionStimuliSourceComponent* PerceptionComponent;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle TargetableRelationship;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* TargetComponent;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorRootPerceptionTargetOffset;  // 0x00E8, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* ActorState;  // 0x00F8, size 0x8
};
