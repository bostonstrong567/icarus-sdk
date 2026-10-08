// /Game/BP/World/PersistentBlockers/BP_PersistentBlocker_StyxB.BP_PersistentBlocker_StyxB_C
// Derives from: APersistentBlocker > AIcarusActor > AActor > UObject
// size 0x32A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PersistentBlocker_StyxB_C : public APersistentBlocker
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PreviewB;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PreviewA;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerDC;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_03;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_01;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_656;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_655;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_392;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerCF;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IcePreviewVisibility;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DesertPreviewVisibility;  // 0x0329, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_PersistentBlocker_StyxB(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_DesertPreviewVisibility();
    UFUNCTION(BlueprintCallable) void OnRep_IcePreviewVisibility();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDestroyedState();
    UFUNCTION(BlueprintCallable) void UpdatePreview(bool Desert, bool State);  // parameters 0x2
};
