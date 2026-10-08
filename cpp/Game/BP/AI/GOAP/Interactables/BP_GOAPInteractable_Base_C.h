// /Game/BP/AI/GOAP/Interactables/BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GOAPInteractable_Base_C : public AIcarusActor, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef;  // 0x02F0, size 0x8

    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckDebugEnabled();
    UFUNCTION() void ExecuteUbergraph_BP_GOAPInteractable_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnInteractionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageComplete(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
};
