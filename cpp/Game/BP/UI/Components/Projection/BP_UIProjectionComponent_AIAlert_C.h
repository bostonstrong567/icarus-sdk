// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x1B5, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_AIAlert_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 AlertValue;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool PerceptionEnabled;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float HealthValue;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertTickRate;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanSeeHealthBar;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Level;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FAICreatureTypeRowHandle CreatureType;  // 0x0140, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0158, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float NamePlateRenderRange;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EpicNamePlateRenderRangeExtend;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float AlertRenderRange;  // 0x0178, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsRecentlyPerceiving_Any_Player;  // 0x017C, size 0x1, named "IsRecentlyPerceiving Any Player"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FText EpicCreatureName;  // 0x0180, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsEatingOrDrinking;  // 0x0198, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusNPCGOAPCharacter* CharacterRef;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CustomBehaviourState;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StatBasedVisibilityRange;  // 0x01AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverrideVisibility;  // 0x01AD, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float ArmorValue;  // 0x01B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasArmor;  // 0x01B4, size 0x1

    UFUNCTION(BlueprintCallable) void AlertTick();
    UFUNCTION(BlueprintCallable) void AnyPlayerRecentlyWasPerceived();
    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void ForceProjectionUpdate();
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_AlertValue();
    UFUNCTION(BlueprintCallable) void OnRep_ArmorValue();
    UFUNCTION(BlueprintCallable) void OnRep_CreatureType();
    UFUNCTION(BlueprintCallable) void OnRep_CustomBehaviourState();
    UFUNCTION(BlueprintCallable) void OnRep_EpicCreature();
    UFUNCTION(BlueprintCallable) void OnRep_EpicCreatureName();
    UFUNCTION(BlueprintCallable) void OnRep_HealthValue();
    UFUNCTION(BlueprintCallable) void OnRep_IsEatingOrDrinking();
    UFUNCTION(BlueprintCallable) void OnRep_IsRecentlyPerceiving_Any_Player();  // named "OnRep_IsRecentlyPerceiving Any Player"
    UFUNCTION(BlueprintCallable) void OnRep_Level();
    UFUNCTION(BlueprintCallable) void OnRep_NamePlateRenderRange();
    UFUNCTION(BlueprintCallable) void OnRep_PerceptionEnabled();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateArmorState(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateHealthState(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateLevel(int32 Level);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdatePerceptionState();
};
