// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_Base.BP_Mission_NPC_Base_C
// Derives from: AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x7D3, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_Base_C : public AIcarusNPCMissionCharacter
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DialogueAudio;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool ShouldLookAt;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InteractSound;  // 0x0798, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IgnoreLookAtNeckMovement;  // 0x07A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnInteract OnInteract;  // 0x07A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLookAtAlpha;  // 0x07B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Interact_Cooldown;  // 0x07BC, size 0x1, named "Interact Cooldown"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasRegisteredSpeaker;  // 0x07BD, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UAnimSequence* OverrideAnimationSequence;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UAnimSequence* OverrideLookAtAnimationSequence;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsSoldier;  // 0x07D0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsADS;  // 0x07D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CustomHighlightableSetup;  // 0x07D2, size 0x1

    UFUNCTION(BlueprintCallable) void Access_Inventory(AActor* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DamageMissionNPC(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void EndInteractCooldown();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void Interact(AIcarusPlayerCharacter* Player, bool IsHoldInteract);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnInteract__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void OnNPCDataUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterDialogueSpeaker();
    UFUNCTION(BlueprintCallable) void TriggerDialogue();
    UFUNCTION(BlueprintCallable) void UnregisterDialogueSpeaker();
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
