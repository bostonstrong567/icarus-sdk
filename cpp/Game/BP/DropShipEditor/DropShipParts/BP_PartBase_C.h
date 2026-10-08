// /Game/BP/DropShipEditor/DropShipParts/BP_PartBase.BP_PartBase_C
// Derives from: AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5E2, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PartBase_C : public AIcarusRocketPart
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifier;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_DropShip_C* AssociatedDropShip;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FTransform SyncedTransform;  // 0x05B0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClientSync;  // 0x05E0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Collision;  // 0x05E1, size 0x1

    UFUNCTION(BlueprintCallable) void AssembledByDatabase();
    UFUNCTION(BlueprintCallable) void Debug_PrintTransformLocation();
    UFUNCTION(BlueprintCallable) void Enable_Interactable_Collision();  // named "Enable Interactable Collision"
    UFUNCTION() void ExecuteUbergraph_BP_PartBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayAnimation(USkeletalMeshComponent* SkeletalMesh, UAnimationAsset* Animation, float StartingPosition, bool Reverse);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_Collision();
    UFUNCTION(BlueprintCallable) void OnRep_SyncedTransform();
    UFUNCTION(BlueprintCallable) void ReadyCheck(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetEditorHighlight(bool Highlight);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetEditorInteractable(bool Interactable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleFlightSFX(ERocketState DropShipState, bool IsLocalPlayer);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TriggerEvent(FDropShipActionsEnum Actions);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Update_Fmod_Dropship_State(EDropshipDescentStateFMODParam DropshipSequenceState);  // parameters 0x1, named "Update Fmod Dropship State"
};
