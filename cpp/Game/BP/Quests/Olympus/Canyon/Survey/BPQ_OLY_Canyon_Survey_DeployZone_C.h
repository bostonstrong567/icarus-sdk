// /Game/BP/Quests/Olympus/Canyon/Survey/BPQ_OLY_Canyon_Survey_DeployZone.BPQ_OLY_Canyon_Survey_DeployZone_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4BC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Canyon_Survey_DeployZone_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Visualizer;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DeployZone;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0480, size 0x8
    UPROPERTY() float Timeline_0_Thickness_616A9BA346966CBE4024BBA023A8C4BD;  // 0x0488, size 0x4
    UPROPERTY() float Timeline_0_Opacity_616A9BA346966CBE4024BBA023A8C4BD;  // 0x048C, size 0x4
    UPROPERTY() float Timeline_0_Radius_616A9BA346966CBE4024BBA023A8C4BD;  // 0x0490, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_616A9BA346966CBE4024BBA023A8C4BD;  // 0x0494, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlacementDistance;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04A4, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DeployNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Canyon_Survey_DeployZone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, NetMulticast) void SetScanLocation(FLinearColor LocationVector);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
