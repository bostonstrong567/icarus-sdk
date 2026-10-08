// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent.BP_UIProjectionComponent_C
// Derives from: UActorComponent > UObject
// size 0x119, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UHuntingWidget> WidgetClass;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProjectionUpdated ProjectionUpdated;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UW_ProjectionWidget_C> Widget;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enabled;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float NearbyDistanceStart;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float NearbyDistanceEnd;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* TargetComponentOverride;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProjectionLocationTag;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPriorityVisibility;  // 0x0118, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceUpdate();
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_085089B14AC10467FBC409BEB05D5F01(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_D09A340442841CEDB6A7A58D706E1269(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_NearbyDistanceEnd();
    UFUNCTION(BlueprintCallable) void OnRep_NearbyDistanceStart();
    UFUNCTION(BlueprintCallable) void ProjectionUpdated__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterWidget();
    UFUNCTION(BlueprintCallable) void SetTargetComponent(USceneComponent* TargetComponentOverride);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetWidget(TSoftClassPtr<UHuntingWidget> Widget);  // parameters 0x28
};
