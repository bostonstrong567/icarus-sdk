// /Game/BP/Building/SnowSystem/RoofSnow.RoofSnow_C
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x520, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class URoofSnow_C : public UStaticMeshComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshXScale;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshYScale;  // 0x04EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshZScaleMultiplier;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Snow_Amount;  // 0x04F4, size 0x4, named "Snow Amount"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingAngleClampModifier;  // 0x04F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFlatRoofSnowAmount;  // 0x04FC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Destroying;  // 0x0500, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SnowDefrostTimer;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecentlyAdded;  // 0x0510, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SnowClearedDelay;  // 0x0514, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SnowClearSound;  // 0x0518, size 0x8

    UFUNCTION(BlueprintCallable) void Defrost();
    UFUNCTION() void ExecuteUbergraph_RoofSnow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MultiClearSnowEffects();
    UFUNCTION(BlueprintCallable) void OnRep_Destroying();
    UFUNCTION(BlueprintCallable) void OnRep_Snow_Amount();  // named "OnRep_Snow Amount"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Server_Modify_Snow_Amount(float SnowDelta);  // parameters 0x4, named "Server Modify Snow Amount"
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerClearSnow();
    UFUNCTION(BlueprintCallable, Server, Reliable) void TriggerDefrostTimer();
    UFUNCTION(BlueprintCallable) void TurnOffSnow();
    UFUNCTION(BlueprintCallable) void Update_Snow_Visualizer();  // named "Update Snow Visualizer"
};
