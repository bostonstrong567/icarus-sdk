// /Game/BP/World/PersistentBlockers/BP_PersistentBlocker_StyxC.BP_PersistentBlocker_StyxC_C
// Derives from: APersistentBlocker > AIcarusActor > AActor > UObject
// size 0x353, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PersistentBlocker_StyxC_C : public APersistentBlocker
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Dam_Location2;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destrutible_Blocker2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Dam_Location;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destrutible_Blocker1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PreviewB;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PreviewA;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_1239_StaticMeshComponent0;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_1238_StaticMeshComponent0;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerDC;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_837_StaticMeshComponent0;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Cliff_836_StaticMeshComponent0;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_1241_StaticMeshComponent0;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_1240_StaticMeshComponent0;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerCF;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ForestPreviewVisibility;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DesertPreviewVisibility;  // 0x0351, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FirstDestroyed;  // 0x0352, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_PersistentBlocker_StyxC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_DesertPreviewVisibility();
    UFUNCTION(BlueprintCallable) void OnRep_FirstDestroyed();
    UFUNCTION(BlueprintCallable) void OnRep_ForestPreviewVisibility();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDestroyedState();
    UFUNCTION(BlueprintCallable) void UpdateFirstDestroyedState();
    UFUNCTION(BlueprintCallable) void UpdatePreviewMeshes();
};
