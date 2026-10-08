// /Script/Icarus.TraitBehaviour
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Traits/Behaviours/TraitBehaviour.h

UCLASS(Transient, MinimalAPI, Config=Engine)
class UTraitBehaviour : public UActorComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, Instanced, BlueprintReadOnly) UTraitBehaviours* OwningComponent;  // 0x00B0, size 0x8
    UPROPERTY() bool bBehaviourDelegatesBound;  // 0x00B8, size 0x1

    UFUNCTION() void OnRep_OwningComponent();
    UFUNCTION(BlueprintNativeEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0

    // Virtual functions that start here:
    //   OnRep_OwningComponent, OnTraitAnimNotify_Implementation
};
