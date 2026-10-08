// /Game/BP/Objects/World/Items/WorldObjects/BP_WorldObject.BP_WorldObject_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x31A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldObject_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* InteractAudioLocation;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_ObjectMesh;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FWorldInteract WorldInteract;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool WasInteracted;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* InteractSound;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool CanInteractSoundRepeat;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CustomHighlightableSetup;  // 0x0319, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_WorldObject(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintCallable) void OnRep_WasInteracted();
    UFUNCTION(BlueprintCallable) void Play_Interact_Sound();  // named "Play Interact Sound"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void WorldInteract__DelegateSignature();
    UFUNCTION(BlueprintCallable) void WorldObject_Held_Interact(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
