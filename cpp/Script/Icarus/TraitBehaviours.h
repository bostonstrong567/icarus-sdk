// /Script/Icarus.TraitBehaviours
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/TraitBehaviours.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class UTraitBehaviours : public UTraitComponent
{
public:
    UPROPERTY() FTraitAnimNotifySignature OnTraitAnimNotify;  // 0x00D0, size 0x1
    UPROPERTY() TArray<UTraitBehaviour*> OwnedBehaviours;  // 0x00D8, size 0x10

    UFUNCTION(BlueprintCallable) UTraitBehaviour* CreateBehaviour(TSubclassOf<UTraitBehaviour> BehaviourClass);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void CreateBehaviours();
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UTraitBehaviour*> GetBehaviours() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) UTraitBehaviour* GetFirstBehaviourOfType(TSubclassOf<UTraitBehaviour> Class);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void RegisterBehaviour(UTraitBehaviour* Behaviour);  // parameters 0x8

    // Virtual functions that start here:
    //   CleanupBehaviours, CreateBehaviours_Implementation, RegisterBehaviour_Implementation
};
