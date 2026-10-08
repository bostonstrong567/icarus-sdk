// /Script/Icarus.ActionableComponent
// Derives from: UTraitBehaviours > UTraitComponent > UActorComponent > UObject
// size 0x158, declared in Icarus/Source/Icarus/Traits/ActionableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UActionableComponent : public UTraitBehaviours
{
public:
    UPROPERTY(BlueprintAssignable) FActionSignature OnAction;  // 0x00E8, size 0x1
    UPROPERTY(BlueprintAssignable) FUsedFromMenuSignature OnUsedFromMenu;  // 0x00E9, size 0x1
    UPROPERTY(BlueprintAssignable) FActionHitSignature OnActionHit;  // 0x00EA, size 0x1
    UPROPERTY(BlueprintAssignable) FActionAssociatedItemUpdated OnAssociatedItemUpdated;  // 0x00EB, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 AssociatedItemInventoryId;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 AssociatedItemInventorySlot;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 DynamicState;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 GunCurrentMagSize;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CurrentAmmoType;  // 0x0150, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMap<enum EActionableEventType,FActionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EActionableEventType,FActionTimer,0> > ActionTimers;  // 0x00F0, private

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Action(AActor* InvokingActor, EActionableEventType ActionType, EActionableTrigger ActionTrigger, bool bClientPrediction);  // parameters 0xB
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetActionData(FActionsRowHandle ActionRowHandle, FActionData& OutData) const;  // parameters 0x119
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetActionableData(FActionableData& OutData) const;  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) UActionableBehaviour* GetBehaviourForActionType(const EActionableEventType& EventType) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_ActionableHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, FHitResult SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_ActionableHitNamed(AActor* InvokingActor, AActor* OverlappedComponentOwner, FName OverlappedComponentName, FHitResult SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA8
    UFUNCTION() void OnHeldTimerExpired(AActor* InvokingActor, EActionableEventType ActionType, bool bClientPrediction);  // parameters 0xA
    UFUNCTION() void OnRep_CurrentAmmoType();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_OwningClientActionableHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, FHitResult SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_OwningClientActionableHitNamed(AActor* InvokingActor, AActor* OverlappedComponentOwner, FName OverlappedComponentName, FHitResult SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void SetAssociatedItemInventoryId(int32 NewAssociatedItemInventoryId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAssociatedItemInventorySlot(int32 NewAssociatedItemInventorySlot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCurrentAmmoType(int32 NewCurrentAmmoType);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDynamicState(int32 NewDynamicState);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGunCurrentMagSize(int32 NewGunCurrentMagSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNewAssociatedItem(int32 NewAssociatedItemInventoryId, int32 NewAssocaitedItemSlot);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void UseFromMenu(AActor* InvokingActor);  // parameters 0x8

    // Virtual functions that start here:
    //   Action_Implementation, Multicast_ActionableHitNamed_Implementation
    //   Multicast_ActionableHit_Implementation, Server_OwningClientActionableHitNamed_Implementation
    //   Server_OwningClientActionableHit_Implementation, UseFromMenu_Implementation
};
