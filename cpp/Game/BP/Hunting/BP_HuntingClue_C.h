// /Game/BP/Hunting/BP_HuntingClue.BP_HuntingClue_C
// Derives from: AHuntingClue > AIcarusActor > AActor > UObject
// size 0x351, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HuntingClue_C : public AHuntingClue, public IIHuntingInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* InteractionBox;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClueUpdated ClueUpdated;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lifetime;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_HuntingClue_C* NextHuntingClue;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> SplineLocations;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ACharacter* AIReference;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Focused;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EHuntingClueState> CurrentState;  // 0x0329, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Highlighted;  // 0x032A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FHuntingClueSetupRowHandle HuntingClueRow;  // 0x032C, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_HuntingManager_C* HuntingManagerRef;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseTrail;  // 0x0350, size 0x1

    UFUNCTION() void BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ClueUpdated__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_HuntingClue(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusUpdated(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GatherSplineLocations(bool& Return, TArray<FVector>& Locations);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetHuntingWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNextClueDistance(float& Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitVisuals();
    UFUNCTION(BlueprintCallable) void OnRep_NextHuntingClue();
    UFUNCTION(BlueprintCallable) void OnRep_SplineLocations();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RegisterHuntingWidget();
    UFUNCTION(BlueprintCallable) void RequestSplineLocations();
    UFUNCTION(BlueprintCallable) void SendSplineLocations(const TArray<FVector>& Locations);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetNextClue(ABP_HuntingClue_C* Clue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdatePerceptionState();
    UFUNCTION(BlueprintCallable) void UpdateState(bool Highlight);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateStateVisuals();
    UFUNCTION(BlueprintCallable) void UpdateTrail();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
