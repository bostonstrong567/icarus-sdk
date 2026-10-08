// /Game/BP/Quests/Olympus/Desert/Extermination/BPQ_OLY_Desert_Extermination_Corpse.BPQ_OLY_Desert_Extermination_Corpse_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_Corpse_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Base_FX;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Recede_FX;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_SandMould;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0480, size 0x8
    UPROPERTY() FVector WorldOffsetTimeline_Offset_14D5BED8491DDE1FD7D8009D737A0BC5;  // 0x0488, size 0xC
    UPROPERTY() TEnumAsByte<ETimelineDirection> WorldOffsetTimeline__Direction_14D5BED8491DDE1FD7D8009D737A0BC5;  // 0x0494, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* WorldOffsetTimeline;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SetIndex;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture_Override;  // 0x04A8, size 0x8, named "Texture Override"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Specified_Color;  // 0x04B0, size 0x10, named "Specified Color"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DestroyParticles();
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Extermination_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveSearchArea();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION() void WorldOffsetTimeline__FX__EventFunc();
    UFUNCTION() void WorldOffsetTimeline__FinishedFunc();
    UFUNCTION() void WorldOffsetTimeline__UpdateFunc();
};
