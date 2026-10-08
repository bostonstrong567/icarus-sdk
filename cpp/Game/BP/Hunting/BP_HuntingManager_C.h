// /Game/BP/Hunting/BP_HuntingManager.BP_HuntingManager_C
// Derives from: UActorComponent > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_HuntingManager_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFocusUpdated FocusUpdated;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* HuntingFocus;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusStatContainer* OwnerStatContainer;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackFootprints;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackFootprintTooltips;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPerceptionStateUpdated PerceptionStateUpdated;  // 0x00E0, size 0x10

    UFUNCTION(BlueprintCallable, Client, Reliable) void CLIENT_SendSplineLocations(AActor* Clue, const TArray<FVector>& Locations);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_BP_HuntingManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusUpdated__DelegateSignature(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_HuntingFocus();
    UFUNCTION(BlueprintCallable) void PerceptionStateUpdated__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_RequestSplineLocations(AActor* Clue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHuntingFocus(AActor* NewFocus);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdatePerceptionState();
};
