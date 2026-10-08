// /Script/Icarus.FlammableActor
// Derives from: UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Traits/FlammableActor.h

UCLASS(EditInlineNew, Config=Engine)
class UFlammableActor : public UFlammableComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FFlammableRepState ReplicatedState;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReplicatesState;  // 0x00F8, size 0x1

    UFUNCTION() void OnRep_ReplicatedState();

    // Virtual functions that start here:
    //   OnRep_ReplicatedState
};
